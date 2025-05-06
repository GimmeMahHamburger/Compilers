
// Generated from PascalIINoRelationParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"


namespace antlrcpptest {


class  PascalIINoRelationParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleType = 1, RuleOperator = 2, RuleSingleoperator = 3, 
    RuleArrayaccess = 4, RuleExpression = 5, RuleStatement = 6, RuleObjectaccess = 7, 
    RulePointeraccess = 8, RuleAddressof = 9, RuleClassdefinition = 10, 
    RulePointerassignment = 11, RuleAssignment = 12, RuleParameter = 13, 
    RuleFunctioncall = 14, RuleVariabledefinition = 15, RuleObjectdefinition = 16, 
    RulePointerdefinition = 17, RuleParametersdefinition = 18, RuleFunctiondefinition = 19, 
    RuleIfstatement = 20, RuleForstatement = 21, RuleWritestatement = 22, 
    RuleReadstatement = 23, RuleDefinition = 24, RuleReturnstatement = 25, 
    RuleCharliteral = 26, RuleCstring = 27
  };

  explicit PascalIINoRelationParser(antlr4::TokenStream *input);

  PascalIINoRelationParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~PascalIINoRelationParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class TypeContext;
  class OperatorContext;
  class SingleoperatorContext;
  class ArrayaccessContext;
  class ExpressionContext;
  class StatementContext;
  class ObjectaccessContext;
  class PointeraccessContext;
  class AddressofContext;
  class ClassdefinitionContext;
  class PointerassignmentContext;
  class AssignmentContext;
  class ParameterContext;
  class FunctioncallContext;
  class VariabledefinitionContext;
  class ObjectdefinitionContext;
  class PointerdefinitionContext;
  class ParametersdefinitionContext;
  class FunctiondefinitionContext;
  class IfstatementContext;
  class ForstatementContext;
  class WritestatementContext;
  class ReadstatementContext;
  class DefinitionContext;
  class ReturnstatementContext;
  class CharliteralContext;
  class CstringContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTERID();
    antlr4::tree::TerminalNode *INTID();
    antlr4::tree::TerminalNode *VOIDTYPE();
    antlr4::tree::TerminalNode *FLOATID();
    antlr4::tree::TerminalNode *BOOLEANID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  OperatorContext : public antlr4::ParserRuleContext {
  public:
    OperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *MODULO();
    antlr4::tree::TerminalNode *LESSTHAN();
    antlr4::tree::TerminalNode *GREATERTHAN();
    std::vector<antlr4::tree::TerminalNode *> EQUAL();
    antlr4::tree::TerminalNode* EQUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AMPERSAND();
    antlr4::tree::TerminalNode* AMPERSAND(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorContext* operator_();

  class  SingleoperatorContext : public antlr4::ParserRuleContext {
  public:
    SingleoperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleoperatorContext* singleoperator();

  class  ArrayaccessContext : public antlr4::ParserRuleContext {
  public:
    ArrayaccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LBRACKET();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RBRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayaccessContext* arrayaccess();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *VOIDTYPE();
    CstringContext *cstring();
    antlr4::tree::TerminalNode *NOT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    ObjectaccessContext *objectaccess();
    FunctioncallContext *functioncall();
    AddressofContext *addressof();
    PointeraccessContext *pointeraccess();
    SingleoperatorContext *singleoperator();
    ArrayaccessContext *arrayaccess();
    OperatorContext *operator_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefinitionContext *definition();
    FunctioncallContext *functioncall();
    PointerassignmentContext *pointerassignment();
    AssignmentContext *assignment();
    IfstatementContext *ifstatement();
    WritestatementContext *writestatement();
    ReturnstatementContext *returnstatement();
    ForstatementContext *forstatement();
    ReadstatementContext *readstatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ObjectaccessContext : public antlr4::ParserRuleContext {
  public:
    ObjectaccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *ACCESSOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectaccessContext* objectaccess();

  class  PointeraccessContext : public antlr4::ParserRuleContext {
  public:
    PointeraccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFERENCE();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointeraccessContext* pointeraccess();

  class  AddressofContext : public antlr4::ParserRuleContext {
  public:
    AddressofContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AMPERSAND();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddressofContext* addressof();

  class  ClassdefinitionContext : public antlr4::ParserRuleContext {
  public:
    ClassdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASSID();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassdefinitionContext* classdefinition();

  class  PointerassignmentContext : public antlr4::ParserRuleContext {
  public:
    PointerassignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REFERENCE();
    AssignmentContext *assignment();
    ArrayaccessContext *arrayaccess();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerassignmentContext* pointerassignment();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();
    ObjectaccessContext *objectaccess();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDERSCORE();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  FunctioncallContext : public antlr4::ParserRuleContext {
  public:
    FunctioncallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    ObjectaccessContext *objectaccess();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctioncallContext* functioncall();

  class  VariabledefinitionContext : public antlr4::ParserRuleContext {
  public:
    VariabledefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariabledefinitionContext* variabledefinition();

  class  ObjectdefinitionContext : public antlr4::ParserRuleContext {
  public:
    ObjectdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectdefinitionContext* objectdefinition();

  class  PointerdefinitionContext : public antlr4::ParserRuleContext {
  public:
    PointerdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *REFERENCE();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *RBRACKET();
    antlr4::tree::TerminalNode *AMPERSAND();
    antlr4::tree::TerminalNode *EQUAL();
    CstringContext *cstring();
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PointerdefinitionContext* pointerdefinition();

  class  ParametersdefinitionContext : public antlr4::ParserRuleContext {
  public:
    ParametersdefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerdefinitionContext *pointerdefinition();
    antlr4::tree::TerminalNode *COMMA();
    ParametersdefinitionContext *parametersdefinition();
    VariabledefinitionContext *variabledefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametersdefinitionContext* parametersdefinition();

  class  FunctiondefinitionContext : public antlr4::ParserRuleContext {
  public:
    FunctiondefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *SIGNATURE();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *LCURLY();
    antlr4::tree::TerminalNode *RCURLY();
    ParametersdefinitionContext *parametersdefinition();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctiondefinitionContext* functiondefinition();

  class  IfstatementContext : public antlr4::ParserRuleContext {
  public:
    IfstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDERSCORE();
    FunctioncallContext *functioncall();
    ParameterContext *parameter();
    antlr4::tree::TerminalNode *IF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfstatementContext* ifstatement();

  class  ForstatementContext : public antlr4::ParserRuleContext {
  public:
    ForstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    VariabledefinitionContext *variabledefinition();
    FunctioncallContext *functioncall();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForstatementContext* forstatement();

  class  WritestatementContext : public antlr4::ParserRuleContext {
  public:
    WritestatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDERSCORE();
    antlr4::tree::TerminalNode *CSTRING();
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *CHAR();
    ExpressionContext *expression();
    CharliteralContext *charliteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WritestatementContext* writestatement();

  class  ReadstatementContext : public antlr4::ParserRuleContext {
  public:
    ReadstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *READ();
    AddressofContext *addressof();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReadstatementContext* readstatement();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassdefinitionContext *classdefinition();
    ObjectdefinitionContext *objectdefinition();
    VariabledefinitionContext *variabledefinition();
    FunctiondefinitionContext *functiondefinition();
    PointerdefinitionContext *pointerdefinition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitionContext* definition();

  class  ReturnstatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnstatementContext* returnstatement();

  class  CharliteralContext : public antlr4::ParserRuleContext {
  public:
    CharliteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SINGLEQUOTE();
    antlr4::tree::TerminalNode* SINGLEQUOTE(size_t i);
    antlr4::tree::TerminalNode *NEWLINE();
    antlr4::tree::TerminalNode *CHAR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CharliteralContext* charliteral();

  class  CstringContext : public antlr4::ParserRuleContext {
  public:
    CstringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SINGLEQUOTE();
    antlr4::tree::TerminalNode* SINGLEQUOTE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CstringContext* cstring();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace antlrcpptest
