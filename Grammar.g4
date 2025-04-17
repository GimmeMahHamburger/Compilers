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
	|CSTRING
	|expression operator expression
	|NOT expression
	|objectaccess
	|functioncall
	|addressof
	|pointeraccess
	|singleoperator expression
	;
	
statement: definition
    |functioncall
	|pointerassignment
    |assignment
    |ifstatement
    |writestatement
	|returnstatement
    ;

objectaccess: IDENTIFIER ACCESSOR IDENTIFIER;

pointeraccess: REFERENCE IDENTIFIER;

addressof: AMPERSAND IDENTIFIER;

classdefinition: CLASSID IDENTIFIER LCURLY definition* RCURLY;

pointerassignment: REFERENCE assignment;

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
	|type REFERENCE IDENTIFIER EQUAL CSTRING
	|IDENTIFIER REFERENCE IDENTIFIER
	|IDENTIFIER REFERENCE IDENTIFIER LBRACKET INTEGER RBRACKET
	;

parametersdefinition: pointerdefinition
    |pointerdefinition ',' parametersdefinition
    |variabledefinition
    |variabledefinition ',' parametersdefinition
    ;

functiondefinition: type SIGNATURE parametersdefinition? COLON IDENTIFIER LCURLY statement+ RCURLY;

ifstatement: UNDERSCORE functioncall parameter IF;

writestatement: UNDERSCORE CSTRING WRITE
    |UNDERSCORE CHAR WRITE
    |UNDERSCORE expression WRITE
	|UNDERSCORE charliteral WRITE
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
CSTRING: ['][a-zA-Z ]+['];

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
