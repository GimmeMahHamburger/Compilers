lexer grammar PascalIINoRelationLexer;


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
VOIDTYPE: 'void';
FLOATID: 'float';
BOOLEANID: 'bool';

IDENTIFIER: [a-zA-Z][a-zA-Z0-9]*;