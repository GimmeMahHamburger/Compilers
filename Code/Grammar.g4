grammar PascalIINoRelation;

program: statement+;

type:CHARACTERID
	|INTID
	|VOID
	|FLOATID
	|BOOLEANID
	;

operator:PLUS
	|MINUS
	|DIVIDE
	|STAR
	|MODULO
	|LESSTHAN
	|GREATERTHAN
	|EQUAL EQUAL
	|OR OR
	|AMPERSAND AMPERSAND
	;

singleoperator: MINUS
	|NOT
	;
	
arrayaccess: IDENTIFIER LBRACKET expression RBRACKET;

expression: IDENTIFIER
	|FLOAT
	|INTEGER
	|BOOLEAN
	|CHAR
	|VOID
	|cstring
	|expression operator expression
	|NOT expression
	|objectaccess
	|functioncall
	|addressof
	|pointeraccess
	|singleoperator expression
	|arrayaccess
	;

statement: definition
	|functioncall
	|pointerassignment
	|assignment
	|ifstatement
	|writestatement
	|returnstatement
	|forstatement
	|readstatement
	;

objectaccess: IDENTIFIER ACCESSOR IDENTIFIER;

pointeraccess: REFERENCE IDENTIFIER;

addressof: AMPERSAND IDENTIFIER;

classdefinition: CLASSID IDENTIFIER LCURLY definition* RCURLY;

pointerassignment: REFERENCE assignment
	|arrayaccess EQUAL expression
	;

assignment: IDENTIFIER EQUAL expression
	|objectaccess EQUAL expression
	;

parameter: UNDERSCORE expression;

functioncall: parameter* IDENTIFIER
	|parameter* objectaccess;

variabledefinition: type IDENTIFIER
	|type IDENTIFIER EQUAL expression;

objectdefinition: IDENTIFIER IDENTIFIER;

pointerdefinition: type REFERENCE IDENTIFIER
	|type REFERENCE IDENTIFIER LBRACKET INTEGER RBRACKET
	|type AMPERSAND IDENTIFIER
	|type REFERENCE IDENTIFIER EQUAL cstring
	|IDENTIFIER REFERENCE IDENTIFIER
	|IDENTIFIER REFERENCE IDENTIFIER LBRACKET INTEGER RBRACKET
	|type REFERENCE IDENTIFIER EQUAL LCURLY expression? (COMMA expression)* RCURLY
	;

parametersdefinition: pointerdefinition
	|pointerdefinition ',' parametersdefinition
	|variabledefinition
	|variabledefinition ',' parametersdefinition
	;

functiondefinition: type SIGNATURE parametersdefinition? COLON IDENTIFIER LCURLY statement+ RCURLY;

ifstatement: UNDERSCORE functioncall parameter IF;

forstatement: UNDERSCORE variabledefinition UNDERSCORE functioncall UNDERSCORE expression UNDERSCORE expression FOR
	|UNDERSCORE IDENTIFIER UNDERSCORE functioncall UNDERSCORE expression UNDERSCORE expression FOR
	;

writestatement: UNDERSCORE CSTRING WRITE
	|UNDERSCORE CHAR WRITE
	|UNDERSCORE expression WRITE
	|UNDERSCORE charliteral WRITE
	;
    
readstatement: UNDERSCORE IDENTIFIER UNDERSCORE expression READ
	|UNDERSCORE addressof UNDERSCORE expression READ
	;

definition: classdefinition
	|objectdefinition
	|variabledefinition
	|functiondefinition
	|pointerdefinition
	;
    
returnstatement: RETURN expression
	|RETURN
	;

charliteral: SINGLEQUOTE NEWLINE SINGLEQUOTE
	|CHAR
	;
	
cstring: SINGLEQUOTE ((~'\'')*?) SINGLEQUOTE;

UNDERSCORE: '_';
PLUS: '+';
MINUS: '-';
DIVIDE: '/';
STAR: '*';
MODULO: '%';
SIGNATURE: '<-';
LESSTHAN: '<';
GREATERTHAN: '>';
EQUAL: '=';
OR: '|';
AMPERSAND: '&';
NOT: '!';
MULTICOMMENT: [~][~][~].*?[~][~][~] -> skip;
COMMENT: [~].*?[\n] -> skip;
REFERENCE: '$';
FLOAT:[0-9]+[.][0-9]+;
INTEGER: [0-9]+;
BOOLEAN: 'true' | 'false';
CHAR: ['][a-zA-Z]['];
CSTRING: ['][.]*['];

NEWLINE: '\\n';
WHITESPACE: [ \t\n\r]+ -> skip;
LBRACKET: '[';
RBRACKET: ']';
LCURLY: '{';
RCURLY: '}';
ACCESSOR: '.';
ESCAPE: '\\';
COLON: ':';
SINGLEQUOTE: '\'';
DOUBLEQUOTE: '"';
COMMA: ',';

FOR: 'for';
WRITE: 'write';
READ: 'read';
IF: 'if';
RETURN: 'return';
CLASSID: 'class';
CHARACTERID: 'char';
INTID: 'int';
VOID: 'void';
FLOATID: 'float';
BOOLEANID: 'bool';

IDENTIFIER: [a-zA-Z][a-zA-Z0-9]*;
