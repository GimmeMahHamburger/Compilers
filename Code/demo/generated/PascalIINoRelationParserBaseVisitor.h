
// Generated from PascalIINoRelationParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PascalIINoRelationParserVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of PascalIINoRelationParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PascalIINoRelationParserBaseVisitor : public PascalIINoRelationParserVisitor {
public:

  virtual std::any visitProgram(PascalIINoRelationParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(PascalIINoRelationParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperator(PascalIINoRelationParser::OperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleoperator(PascalIINoRelationParser::SingleoperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayaccess(PascalIINoRelationParser::ArrayaccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(PascalIINoRelationParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(PascalIINoRelationParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectaccess(PascalIINoRelationParser::ObjectaccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointeraccess(PascalIINoRelationParser::PointeraccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddressof(PascalIINoRelationParser::AddressofContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassdefinition(PascalIINoRelationParser::ClassdefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerassignment(PascalIINoRelationParser::PointerassignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(PascalIINoRelationParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(PascalIINoRelationParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctioncall(PascalIINoRelationParser::FunctioncallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariabledefinition(PascalIINoRelationParser::VariabledefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectdefinition(PascalIINoRelationParser::ObjectdefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerdefinition(PascalIINoRelationParser::PointerdefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParametersdefinition(PascalIINoRelationParser::ParametersdefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctiondefinition(PascalIINoRelationParser::FunctiondefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfstatement(PascalIINoRelationParser::IfstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForstatement(PascalIINoRelationParser::ForstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWritestatement(PascalIINoRelationParser::WritestatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReadstatement(PascalIINoRelationParser::ReadstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinition(PascalIINoRelationParser::DefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnstatement(PascalIINoRelationParser::ReturnstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCharliteral(PascalIINoRelationParser::CharliteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCstring(PascalIINoRelationParser::CstringContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest
