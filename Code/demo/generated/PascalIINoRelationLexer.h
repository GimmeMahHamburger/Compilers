
// Generated from PascalIINoRelationLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  PascalIINoRelationLexer : public antlr4::Lexer {
public:
  enum {
    UNDERSCORE = 1, PLUS = 2, MINUS = 3, DIVIDE = 4, STAR = 5, MODULO = 6, 
    SIGNATURE = 7, LESSTHAN = 8, GREATERTHAN = 9, EQUAL = 10, OR = 11, AMPERSAND = 12, 
    NOT = 13, MULTICOMMENT = 14, COMMENT = 15, REFERENCE = 16, FLOAT = 17, 
    INTEGER = 18, BOOLEAN = 19, CHAR = 20, CSTRING = 21, NEWLINE = 22, WHITESPACE = 23, 
    LBRACKET = 24, RBRACKET = 25, LCURLY = 26, RCURLY = 27, ACCESSOR = 28, 
    ESCAPE = 29, COLON = 30, SINGLEQUOTE = 31, DOUBLEQUOTE = 32, COMMA = 33, 
    FOR = 34, WRITE = 35, READ = 36, IF = 37, RETURN = 38, CLASSID = 39, 
    CHARACTERID = 40, INTID = 41, VOIDTYPE = 42, FLOATID = 43, BOOLEANID = 44, 
    IDENTIFIER = 45
  };

  explicit PascalIINoRelationLexer(antlr4::CharStream *input);

  ~PascalIINoRelationLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace antlrcpptest
