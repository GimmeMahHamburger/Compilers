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
	
arrayaccess: IDENTIFIER LBRACKET expression RBRACKET;

expression: IDENTIFIER
	|FLOAT
	|INTEGER
	|BOOLEAN
	|expression operator expression
	|objectaccess
	|functioncall
	;
	
statement: definition
    |functioncall
    |assignment
    |ifstatement
    ;

objectaccess: IDENTIFIER ACCESSOR IDENTIFIER;

classdefinition: CLASSID IDENTIFIER LCURLY definition* RCURLY;

assignment: IDENTIFIER EQUAL expression;

parameter: UNDERSCORE expression;

functioncall: parameter* IDENTIFIER
	|parameter* objectaccess;

variabledefinition: type IDENTIFIER
	|type IDENTIFIER EQUAL expression;

objectdefinition: IDENTIFIER IDENTIFIER;

pointerdefinition: type REFERENCE IDENTIFIER
	|type REFERENCE IDENTIFIER LBRACKET INTEGER RBRACKET
	;

parametersdefinition: type IDENTIFIER
    |type IDENTIFIER ',' parametersdefinition
    ;

functiondefinition: type SIGNATURE parametersdefinition? COLON IDENTIFIER LCURLY statement+ RCURLY;

ifstatement: UNDERSCORE functioncall parameter IF;

definition: classdefinition
    |objectdefinition
    |variabledefinition
    |functiondefinition
    |pointerdefinition
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

NEWLINE: '\n';
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

IDENTIFIER: [a-zA-Z][a-zA-Z0-9]+;
