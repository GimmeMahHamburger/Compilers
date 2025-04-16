grammar PascalIINoRelation;

type:CLASSID
	|CHARACTERID
	|INTID
	|VOID
	|FLOATID
	|BOOLEANID
	;

operation:PLUS
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
arrayaccess: IDENTIFIER LEFTBRACKET expression RIGHTBRACKET;

expression: IDENTIFIER
	|FLOAT
	|INTEGER
	|BOOLEAN
	|expression operator expression
	|objectaccess
	;

objectaccess: IDENTIFIER ACESSOR IDENTIFIER;

parameter: UNDERSCORE expression;

functioncall: parameter* IDENTIFIER
	|parameter* objectaccess;

variabledefinition: type IDENTIFIER
	|type IDENTIFIER EQUALS expression;

objectdefinition: IDENTIFIER IDENTIFIER;


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
MULTICOMMENT: [~][~][~].*[~][~][~] -> skip;
COMMENT: [~].*[\n] -> skip;
REFERENCE: '$';
FLOAT:[0-9]+[.][0-9]+;
INTEGER: [0-9]+;
BOOLEAN: true | false;
CHAR: ['][a-zA-Z]['];
IDENTIFIER: [a-zA-Z_][a-zA-Z_0-9]+;
NEWLINE: '\n';
WHITESPACE: '[\t\n\r]' -> skip;
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
