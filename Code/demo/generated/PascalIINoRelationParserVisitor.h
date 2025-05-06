
// Generated from PascalIINoRelationParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "PascalIINoRelationParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by PascalIINoRelationParser.
 */
class  PascalIINoRelationParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PascalIINoRelationParser.
   */
    virtual std::any visitProgram(PascalIINoRelationParser::ProgramContext *context) = 0;

    virtual std::any visitType(PascalIINoRelationParser::TypeContext *context) = 0;

    virtual std::any visitOperator(PascalIINoRelationParser::OperatorContext *context) = 0;

    virtual std::any visitSingleoperator(PascalIINoRelationParser::SingleoperatorContext *context) = 0;

    virtual std::any visitArrayaccess(PascalIINoRelationParser::ArrayaccessContext *context) = 0;

    virtual std::any visitExpression(PascalIINoRelationParser::ExpressionContext *context) = 0;

    virtual std::any visitStatement(PascalIINoRelationParser::StatementContext *context) = 0;

    virtual std::any visitObjectaccess(PascalIINoRelationParser::ObjectaccessContext *context) = 0;

    virtual std::any visitPointeraccess(PascalIINoRelationParser::PointeraccessContext *context) = 0;

    virtual std::any visitAddressof(PascalIINoRelationParser::AddressofContext *context) = 0;

    virtual std::any visitClassdefinition(PascalIINoRelationParser::ClassdefinitionContext *context) = 0;

    virtual std::any visitPointerassignment(PascalIINoRelationParser::PointerassignmentContext *context) = 0;

    virtual std::any visitAssignment(PascalIINoRelationParser::AssignmentContext *context) = 0;

    virtual std::any visitParameter(PascalIINoRelationParser::ParameterContext *context) = 0;

    virtual std::any visitFunctioncall(PascalIINoRelationParser::FunctioncallContext *context) = 0;

    virtual std::any visitVariabledefinition(PascalIINoRelationParser::VariabledefinitionContext *context) = 0;

    virtual std::any visitObjectdefinition(PascalIINoRelationParser::ObjectdefinitionContext *context) = 0;

    virtual std::any visitPointerdefinition(PascalIINoRelationParser::PointerdefinitionContext *context) = 0;

    virtual std::any visitParametersdefinition(PascalIINoRelationParser::ParametersdefinitionContext *context) = 0;

    virtual std::any visitFunctiondefinition(PascalIINoRelationParser::FunctiondefinitionContext *context) = 0;

    virtual std::any visitIfstatement(PascalIINoRelationParser::IfstatementContext *context) = 0;

    virtual std::any visitForstatement(PascalIINoRelationParser::ForstatementContext *context) = 0;

    virtual std::any visitWritestatement(PascalIINoRelationParser::WritestatementContext *context) = 0;

    virtual std::any visitReadstatement(PascalIINoRelationParser::ReadstatementContext *context) = 0;

    virtual std::any visitDefinition(PascalIINoRelationParser::DefinitionContext *context) = 0;

    virtual std::any visitReturnstatement(PascalIINoRelationParser::ReturnstatementContext *context) = 0;

    virtual std::any visitCharliteral(PascalIINoRelationParser::CharliteralContext *context) = 0;

    virtual std::any visitCstring(PascalIINoRelationParser::CstringContext *context) = 0;


};

}  // namespace antlrcpptest
