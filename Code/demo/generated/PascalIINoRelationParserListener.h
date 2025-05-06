
// Generated from PascalIINoRelationParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PascalIINoRelationParser.h"


namespace antlrcpptest {

/**
 * This interface defines an abstract listener for a parse tree produced by PascalIINoRelationParser.
 */
class  PascalIINoRelationParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(PascalIINoRelationParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(PascalIINoRelationParser::ProgramContext *ctx) = 0;

  virtual void enterType(PascalIINoRelationParser::TypeContext *ctx) = 0;
  virtual void exitType(PascalIINoRelationParser::TypeContext *ctx) = 0;

  virtual void enterOperator(PascalIINoRelationParser::OperatorContext *ctx) = 0;
  virtual void exitOperator(PascalIINoRelationParser::OperatorContext *ctx) = 0;

  virtual void enterSingleoperator(PascalIINoRelationParser::SingleoperatorContext *ctx) = 0;
  virtual void exitSingleoperator(PascalIINoRelationParser::SingleoperatorContext *ctx) = 0;

  virtual void enterArrayaccess(PascalIINoRelationParser::ArrayaccessContext *ctx) = 0;
  virtual void exitArrayaccess(PascalIINoRelationParser::ArrayaccessContext *ctx) = 0;

  virtual void enterExpression(PascalIINoRelationParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(PascalIINoRelationParser::ExpressionContext *ctx) = 0;

  virtual void enterStatement(PascalIINoRelationParser::StatementContext *ctx) = 0;
  virtual void exitStatement(PascalIINoRelationParser::StatementContext *ctx) = 0;

  virtual void enterObjectaccess(PascalIINoRelationParser::ObjectaccessContext *ctx) = 0;
  virtual void exitObjectaccess(PascalIINoRelationParser::ObjectaccessContext *ctx) = 0;

  virtual void enterPointeraccess(PascalIINoRelationParser::PointeraccessContext *ctx) = 0;
  virtual void exitPointeraccess(PascalIINoRelationParser::PointeraccessContext *ctx) = 0;

  virtual void enterAddressof(PascalIINoRelationParser::AddressofContext *ctx) = 0;
  virtual void exitAddressof(PascalIINoRelationParser::AddressofContext *ctx) = 0;

  virtual void enterClassdefinition(PascalIINoRelationParser::ClassdefinitionContext *ctx) = 0;
  virtual void exitClassdefinition(PascalIINoRelationParser::ClassdefinitionContext *ctx) = 0;

  virtual void enterPointerassignment(PascalIINoRelationParser::PointerassignmentContext *ctx) = 0;
  virtual void exitPointerassignment(PascalIINoRelationParser::PointerassignmentContext *ctx) = 0;

  virtual void enterAssignment(PascalIINoRelationParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(PascalIINoRelationParser::AssignmentContext *ctx) = 0;

  virtual void enterParameter(PascalIINoRelationParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(PascalIINoRelationParser::ParameterContext *ctx) = 0;

  virtual void enterFunctioncall(PascalIINoRelationParser::FunctioncallContext *ctx) = 0;
  virtual void exitFunctioncall(PascalIINoRelationParser::FunctioncallContext *ctx) = 0;

  virtual void enterVariabledefinition(PascalIINoRelationParser::VariabledefinitionContext *ctx) = 0;
  virtual void exitVariabledefinition(PascalIINoRelationParser::VariabledefinitionContext *ctx) = 0;

  virtual void enterObjectdefinition(PascalIINoRelationParser::ObjectdefinitionContext *ctx) = 0;
  virtual void exitObjectdefinition(PascalIINoRelationParser::ObjectdefinitionContext *ctx) = 0;

  virtual void enterPointerdefinition(PascalIINoRelationParser::PointerdefinitionContext *ctx) = 0;
  virtual void exitPointerdefinition(PascalIINoRelationParser::PointerdefinitionContext *ctx) = 0;

  virtual void enterParametersdefinition(PascalIINoRelationParser::ParametersdefinitionContext *ctx) = 0;
  virtual void exitParametersdefinition(PascalIINoRelationParser::ParametersdefinitionContext *ctx) = 0;

  virtual void enterFunctiondefinition(PascalIINoRelationParser::FunctiondefinitionContext *ctx) = 0;
  virtual void exitFunctiondefinition(PascalIINoRelationParser::FunctiondefinitionContext *ctx) = 0;

  virtual void enterIfstatement(PascalIINoRelationParser::IfstatementContext *ctx) = 0;
  virtual void exitIfstatement(PascalIINoRelationParser::IfstatementContext *ctx) = 0;

  virtual void enterForstatement(PascalIINoRelationParser::ForstatementContext *ctx) = 0;
  virtual void exitForstatement(PascalIINoRelationParser::ForstatementContext *ctx) = 0;

  virtual void enterWritestatement(PascalIINoRelationParser::WritestatementContext *ctx) = 0;
  virtual void exitWritestatement(PascalIINoRelationParser::WritestatementContext *ctx) = 0;

  virtual void enterReadstatement(PascalIINoRelationParser::ReadstatementContext *ctx) = 0;
  virtual void exitReadstatement(PascalIINoRelationParser::ReadstatementContext *ctx) = 0;

  virtual void enterDefinition(PascalIINoRelationParser::DefinitionContext *ctx) = 0;
  virtual void exitDefinition(PascalIINoRelationParser::DefinitionContext *ctx) = 0;

  virtual void enterReturnstatement(PascalIINoRelationParser::ReturnstatementContext *ctx) = 0;
  virtual void exitReturnstatement(PascalIINoRelationParser::ReturnstatementContext *ctx) = 0;

  virtual void enterCharliteral(PascalIINoRelationParser::CharliteralContext *ctx) = 0;
  virtual void exitCharliteral(PascalIINoRelationParser::CharliteralContext *ctx) = 0;

  virtual void enterCstring(PascalIINoRelationParser::CstringContext *ctx) = 0;
  virtual void exitCstring(PascalIINoRelationParser::CstringContext *ctx) = 0;


};

}  // namespace antlrcpptest
