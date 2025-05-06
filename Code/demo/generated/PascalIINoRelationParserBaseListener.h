
// Generated from PascalIINoRelationParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PascalIINoRelationParserListener.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of PascalIINoRelationParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PascalIINoRelationParserBaseListener : public PascalIINoRelationParserListener {
public:

  virtual void enterProgram(PascalIINoRelationParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(PascalIINoRelationParser::ProgramContext * /*ctx*/) override { }

  virtual void enterType(PascalIINoRelationParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(PascalIINoRelationParser::TypeContext * /*ctx*/) override { }

  virtual void enterOperator(PascalIINoRelationParser::OperatorContext * /*ctx*/) override { }
  virtual void exitOperator(PascalIINoRelationParser::OperatorContext * /*ctx*/) override { }

  virtual void enterSingleoperator(PascalIINoRelationParser::SingleoperatorContext * /*ctx*/) override { }
  virtual void exitSingleoperator(PascalIINoRelationParser::SingleoperatorContext * /*ctx*/) override { }

  virtual void enterArrayaccess(PascalIINoRelationParser::ArrayaccessContext * /*ctx*/) override { }
  virtual void exitArrayaccess(PascalIINoRelationParser::ArrayaccessContext * /*ctx*/) override { }

  virtual void enterExpression(PascalIINoRelationParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(PascalIINoRelationParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterStatement(PascalIINoRelationParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(PascalIINoRelationParser::StatementContext * /*ctx*/) override { }

  virtual void enterObjectaccess(PascalIINoRelationParser::ObjectaccessContext * /*ctx*/) override { }
  virtual void exitObjectaccess(PascalIINoRelationParser::ObjectaccessContext * /*ctx*/) override { }

  virtual void enterPointeraccess(PascalIINoRelationParser::PointeraccessContext * /*ctx*/) override { }
  virtual void exitPointeraccess(PascalIINoRelationParser::PointeraccessContext * /*ctx*/) override { }

  virtual void enterAddressof(PascalIINoRelationParser::AddressofContext * /*ctx*/) override { }
  virtual void exitAddressof(PascalIINoRelationParser::AddressofContext * /*ctx*/) override { }

  virtual void enterClassdefinition(PascalIINoRelationParser::ClassdefinitionContext * /*ctx*/) override { }
  virtual void exitClassdefinition(PascalIINoRelationParser::ClassdefinitionContext * /*ctx*/) override { }

  virtual void enterPointerassignment(PascalIINoRelationParser::PointerassignmentContext * /*ctx*/) override { }
  virtual void exitPointerassignment(PascalIINoRelationParser::PointerassignmentContext * /*ctx*/) override { }

  virtual void enterAssignment(PascalIINoRelationParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(PascalIINoRelationParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterParameter(PascalIINoRelationParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(PascalIINoRelationParser::ParameterContext * /*ctx*/) override { }

  virtual void enterFunctioncall(PascalIINoRelationParser::FunctioncallContext * /*ctx*/) override { }
  virtual void exitFunctioncall(PascalIINoRelationParser::FunctioncallContext * /*ctx*/) override { }

  virtual void enterVariabledefinition(PascalIINoRelationParser::VariabledefinitionContext * /*ctx*/) override { }
  virtual void exitVariabledefinition(PascalIINoRelationParser::VariabledefinitionContext * /*ctx*/) override { }

  virtual void enterObjectdefinition(PascalIINoRelationParser::ObjectdefinitionContext * /*ctx*/) override { }
  virtual void exitObjectdefinition(PascalIINoRelationParser::ObjectdefinitionContext * /*ctx*/) override { }

  virtual void enterPointerdefinition(PascalIINoRelationParser::PointerdefinitionContext * /*ctx*/) override { }
  virtual void exitPointerdefinition(PascalIINoRelationParser::PointerdefinitionContext * /*ctx*/) override { }

  virtual void enterParametersdefinition(PascalIINoRelationParser::ParametersdefinitionContext * /*ctx*/) override { }
  virtual void exitParametersdefinition(PascalIINoRelationParser::ParametersdefinitionContext * /*ctx*/) override { }

  virtual void enterFunctiondefinition(PascalIINoRelationParser::FunctiondefinitionContext * /*ctx*/) override { }
  virtual void exitFunctiondefinition(PascalIINoRelationParser::FunctiondefinitionContext * /*ctx*/) override { }

  virtual void enterIfstatement(PascalIINoRelationParser::IfstatementContext * /*ctx*/) override { }
  virtual void exitIfstatement(PascalIINoRelationParser::IfstatementContext * /*ctx*/) override { }

  virtual void enterForstatement(PascalIINoRelationParser::ForstatementContext * /*ctx*/) override { }
  virtual void exitForstatement(PascalIINoRelationParser::ForstatementContext * /*ctx*/) override { }

  virtual void enterWritestatement(PascalIINoRelationParser::WritestatementContext * /*ctx*/) override { }
  virtual void exitWritestatement(PascalIINoRelationParser::WritestatementContext * /*ctx*/) override { }

  virtual void enterReadstatement(PascalIINoRelationParser::ReadstatementContext * /*ctx*/) override { }
  virtual void exitReadstatement(PascalIINoRelationParser::ReadstatementContext * /*ctx*/) override { }

  virtual void enterDefinition(PascalIINoRelationParser::DefinitionContext * /*ctx*/) override { }
  virtual void exitDefinition(PascalIINoRelationParser::DefinitionContext * /*ctx*/) override { }

  virtual void enterReturnstatement(PascalIINoRelationParser::ReturnstatementContext * /*ctx*/) override { }
  virtual void exitReturnstatement(PascalIINoRelationParser::ReturnstatementContext * /*ctx*/) override { }

  virtual void enterCharliteral(PascalIINoRelationParser::CharliteralContext * /*ctx*/) override { }
  virtual void exitCharliteral(PascalIINoRelationParser::CharliteralContext * /*ctx*/) override { }

  virtual void enterCstring(PascalIINoRelationParser::CstringContext * /*ctx*/) override { }
  virtual void exitCstring(PascalIINoRelationParser::CstringContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace antlrcpptest
