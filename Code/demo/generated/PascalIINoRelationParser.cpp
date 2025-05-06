
// Generated from PascalIINoRelationParser.g4 by ANTLR 4.13.2


#include "PascalIINoRelationParserListener.h"
#include "PascalIINoRelationParserVisitor.h"

#include "PascalIINoRelationParser.h"


using namespace antlrcpp;
using namespace antlrcpptest;

using namespace antlr4;

namespace {

struct PascalIINoRelationParserStaticData final {
  PascalIINoRelationParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PascalIINoRelationParserStaticData(const PascalIINoRelationParserStaticData&) = delete;
  PascalIINoRelationParserStaticData(PascalIINoRelationParserStaticData&&) = delete;
  PascalIINoRelationParserStaticData& operator=(const PascalIINoRelationParserStaticData&) = delete;
  PascalIINoRelationParserStaticData& operator=(PascalIINoRelationParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pascaliinorelationparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<PascalIINoRelationParserStaticData> pascaliinorelationparserParserStaticData = nullptr;

void pascaliinorelationparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (pascaliinorelationparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(pascaliinorelationparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PascalIINoRelationParserStaticData>(
    std::vector<std::string>{
      "program", "type", "operator", "singleoperator", "arrayaccess", "expression", 
      "statement", "objectaccess", "pointeraccess", "addressof", "classdefinition", 
      "pointerassignment", "assignment", "parameter", "functioncall", "variabledefinition", 
      "objectdefinition", "pointerdefinition", "parametersdefinition", "functiondefinition", 
      "ifstatement", "forstatement", "writestatement", "readstatement", 
      "definition", "returnstatement", "charliteral", "cstring"
    },
    std::vector<std::string>{
      "", "'_'", "'+'", "'-'", "'/'", "'*'", "'%'", "'<-'", "'<'", "'>'", 
      "'='", "'|'", "'&'", "'!'", "", "", "'$'", "", "", "", "", "", "'\\n'", 
      "", "'['", "']'", "'{'", "'}'", "'.'", "'\\'", "':'", "'''", "'\"'", 
      "','", "'for'", "'write'", "'read'", "'if'", "'return'", "'class'", 
      "'char'", "'int'", "'void'", "'float'", "'bool'"
    },
    std::vector<std::string>{
      "", "UNDERSCORE", "PLUS", "MINUS", "DIVIDE", "STAR", "MODULO", "SIGNATURE", 
      "LESSTHAN", "GREATERTHAN", "EQUAL", "OR", "AMPERSAND", "NOT", "MULTICOMMENT", 
      "COMMENT", "REFERENCE", "FLOAT", "INTEGER", "BOOLEAN", "CHAR", "CSTRING", 
      "NEWLINE", "WHITESPACE", "LBRACKET", "RBRACKET", "LCURLY", "RCURLY", 
      "ACCESSOR", "ESCAPE", "COLON", "SINGLEQUOTE", "DOUBLEQUOTE", "COMMA", 
      "FOR", "WRITE", "READ", "IF", "RETURN", "CLASSID", "CHARACTERID", 
      "INTID", "VOIDTYPE", "FLOATID", "BOOLEANID", "IDENTIFIER"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,45,356,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,4,
  	0,58,8,0,11,0,12,0,59,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,3,2,77,8,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,104,8,5,1,5,
  	1,5,1,5,1,5,5,5,110,8,5,10,5,12,5,113,9,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,3,6,124,8,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,
  	1,10,1,10,5,10,140,8,10,10,10,12,10,143,9,10,1,10,1,10,1,11,1,11,1,11,
  	1,11,1,11,1,11,3,11,153,8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,
  	162,8,12,1,13,1,13,1,13,1,14,5,14,168,8,14,10,14,12,14,171,9,14,1,14,
  	1,14,5,14,175,8,14,10,14,12,14,178,9,14,1,14,3,14,181,8,14,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,3,15,191,8,15,1,16,1,16,1,16,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,17,1,17,3,17,232,8,17,1,17,1,17,5,17,236,8,17,10,
  	17,12,17,239,9,17,1,17,1,17,3,17,243,8,17,1,18,1,18,1,18,1,18,1,18,1,
  	18,1,18,1,18,1,18,1,18,3,18,255,8,18,1,19,1,19,1,19,3,19,260,8,19,1,19,
  	1,19,1,19,1,19,4,19,266,8,19,11,19,12,19,267,1,19,1,19,1,20,1,20,1,20,
  	1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,
  	1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,21,297,8,21,1,22,1,22,1,22,
  	1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,313,8,22,
  	1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,3,23,327,
  	8,23,1,24,1,24,1,24,1,24,1,24,3,24,334,8,24,1,25,1,25,1,25,3,25,339,8,
  	25,1,26,1,26,1,26,1,26,3,26,345,8,26,1,27,1,27,5,27,349,8,27,10,27,12,
  	27,352,9,27,1,27,1,27,1,27,1,350,1,10,28,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,0,3,1,0,40,44,2,0,
  	3,3,13,13,1,0,31,31,391,0,57,1,0,0,0,2,61,1,0,0,0,4,76,1,0,0,0,6,78,1,
  	0,0,0,8,80,1,0,0,0,10,103,1,0,0,0,12,123,1,0,0,0,14,125,1,0,0,0,16,129,
  	1,0,0,0,18,132,1,0,0,0,20,135,1,0,0,0,22,152,1,0,0,0,24,161,1,0,0,0,26,
  	163,1,0,0,0,28,180,1,0,0,0,30,190,1,0,0,0,32,192,1,0,0,0,34,242,1,0,0,
  	0,36,254,1,0,0,0,38,256,1,0,0,0,40,271,1,0,0,0,42,296,1,0,0,0,44,312,
  	1,0,0,0,46,326,1,0,0,0,48,333,1,0,0,0,50,338,1,0,0,0,52,344,1,0,0,0,54,
  	346,1,0,0,0,56,58,3,12,6,0,57,56,1,0,0,0,58,59,1,0,0,0,59,57,1,0,0,0,
  	59,60,1,0,0,0,60,1,1,0,0,0,61,62,7,0,0,0,62,3,1,0,0,0,63,77,5,2,0,0,64,
  	77,5,3,0,0,65,77,5,4,0,0,66,77,5,5,0,0,67,77,5,6,0,0,68,77,5,8,0,0,69,
  	77,5,9,0,0,70,71,5,10,0,0,71,77,5,10,0,0,72,73,5,11,0,0,73,77,5,11,0,
  	0,74,75,5,12,0,0,75,77,5,12,0,0,76,63,1,0,0,0,76,64,1,0,0,0,76,65,1,0,
  	0,0,76,66,1,0,0,0,76,67,1,0,0,0,76,68,1,0,0,0,76,69,1,0,0,0,76,70,1,0,
  	0,0,76,72,1,0,0,0,76,74,1,0,0,0,77,5,1,0,0,0,78,79,7,1,0,0,79,7,1,0,0,
  	0,80,81,5,45,0,0,81,82,5,24,0,0,82,83,3,10,5,0,83,84,5,25,0,0,84,9,1,
  	0,0,0,85,86,6,5,-1,0,86,104,5,45,0,0,87,104,5,17,0,0,88,104,5,18,0,0,
  	89,104,5,19,0,0,90,104,5,20,0,0,91,104,5,42,0,0,92,104,3,54,27,0,93,94,
  	5,13,0,0,94,104,3,10,5,7,95,104,3,14,7,0,96,104,3,28,14,0,97,104,3,18,
  	9,0,98,104,3,16,8,0,99,100,3,6,3,0,100,101,3,10,5,2,101,104,1,0,0,0,102,
  	104,3,8,4,0,103,85,1,0,0,0,103,87,1,0,0,0,103,88,1,0,0,0,103,89,1,0,0,
  	0,103,90,1,0,0,0,103,91,1,0,0,0,103,92,1,0,0,0,103,93,1,0,0,0,103,95,
  	1,0,0,0,103,96,1,0,0,0,103,97,1,0,0,0,103,98,1,0,0,0,103,99,1,0,0,0,103,
  	102,1,0,0,0,104,111,1,0,0,0,105,106,10,8,0,0,106,107,3,4,2,0,107,108,
  	3,10,5,9,108,110,1,0,0,0,109,105,1,0,0,0,110,113,1,0,0,0,111,109,1,0,
  	0,0,111,112,1,0,0,0,112,11,1,0,0,0,113,111,1,0,0,0,114,124,3,48,24,0,
  	115,124,3,28,14,0,116,124,3,22,11,0,117,124,3,24,12,0,118,124,3,40,20,
  	0,119,124,3,44,22,0,120,124,3,50,25,0,121,124,3,42,21,0,122,124,3,46,
  	23,0,123,114,1,0,0,0,123,115,1,0,0,0,123,116,1,0,0,0,123,117,1,0,0,0,
  	123,118,1,0,0,0,123,119,1,0,0,0,123,120,1,0,0,0,123,121,1,0,0,0,123,122,
  	1,0,0,0,124,13,1,0,0,0,125,126,5,45,0,0,126,127,5,28,0,0,127,128,5,45,
  	0,0,128,15,1,0,0,0,129,130,5,16,0,0,130,131,5,45,0,0,131,17,1,0,0,0,132,
  	133,5,12,0,0,133,134,5,45,0,0,134,19,1,0,0,0,135,136,5,39,0,0,136,137,
  	5,45,0,0,137,141,5,26,0,0,138,140,3,48,24,0,139,138,1,0,0,0,140,143,1,
  	0,0,0,141,139,1,0,0,0,141,142,1,0,0,0,142,144,1,0,0,0,143,141,1,0,0,0,
  	144,145,5,27,0,0,145,21,1,0,0,0,146,147,5,16,0,0,147,153,3,24,12,0,148,
  	149,3,8,4,0,149,150,5,10,0,0,150,151,3,10,5,0,151,153,1,0,0,0,152,146,
  	1,0,0,0,152,148,1,0,0,0,153,23,1,0,0,0,154,155,5,45,0,0,155,156,5,10,
  	0,0,156,162,3,10,5,0,157,158,3,14,7,0,158,159,5,10,0,0,159,160,3,10,5,
  	0,160,162,1,0,0,0,161,154,1,0,0,0,161,157,1,0,0,0,162,25,1,0,0,0,163,
  	164,5,1,0,0,164,165,3,10,5,0,165,27,1,0,0,0,166,168,3,26,13,0,167,166,
  	1,0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,169,170,1,0,0,0,170,172,1,0,0,
  	0,171,169,1,0,0,0,172,181,5,45,0,0,173,175,3,26,13,0,174,173,1,0,0,0,
  	175,178,1,0,0,0,176,174,1,0,0,0,176,177,1,0,0,0,177,179,1,0,0,0,178,176,
  	1,0,0,0,179,181,3,14,7,0,180,169,1,0,0,0,180,176,1,0,0,0,181,29,1,0,0,
  	0,182,183,3,2,1,0,183,184,5,45,0,0,184,191,1,0,0,0,185,186,3,2,1,0,186,
  	187,5,45,0,0,187,188,5,10,0,0,188,189,3,10,5,0,189,191,1,0,0,0,190,182,
  	1,0,0,0,190,185,1,0,0,0,191,31,1,0,0,0,192,193,5,45,0,0,193,194,5,45,
  	0,0,194,33,1,0,0,0,195,196,3,2,1,0,196,197,5,16,0,0,197,198,5,45,0,0,
  	198,243,1,0,0,0,199,200,3,2,1,0,200,201,5,16,0,0,201,202,5,45,0,0,202,
  	203,5,24,0,0,203,204,5,18,0,0,204,205,5,25,0,0,205,243,1,0,0,0,206,207,
  	3,2,1,0,207,208,5,12,0,0,208,209,5,45,0,0,209,243,1,0,0,0,210,211,3,2,
  	1,0,211,212,5,16,0,0,212,213,5,45,0,0,213,214,5,10,0,0,214,215,3,54,27,
  	0,215,243,1,0,0,0,216,217,5,45,0,0,217,218,5,16,0,0,218,243,5,45,0,0,
  	219,220,5,45,0,0,220,221,5,16,0,0,221,222,5,45,0,0,222,223,5,24,0,0,223,
  	224,5,18,0,0,224,243,5,25,0,0,225,226,3,2,1,0,226,227,5,16,0,0,227,228,
  	5,45,0,0,228,229,5,10,0,0,229,231,5,26,0,0,230,232,3,10,5,0,231,230,1,
  	0,0,0,231,232,1,0,0,0,232,237,1,0,0,0,233,234,5,33,0,0,234,236,3,10,5,
  	0,235,233,1,0,0,0,236,239,1,0,0,0,237,235,1,0,0,0,237,238,1,0,0,0,238,
  	240,1,0,0,0,239,237,1,0,0,0,240,241,5,27,0,0,241,243,1,0,0,0,242,195,
  	1,0,0,0,242,199,1,0,0,0,242,206,1,0,0,0,242,210,1,0,0,0,242,216,1,0,0,
  	0,242,219,1,0,0,0,242,225,1,0,0,0,243,35,1,0,0,0,244,255,3,34,17,0,245,
  	246,3,34,17,0,246,247,5,33,0,0,247,248,3,36,18,0,248,255,1,0,0,0,249,
  	255,3,30,15,0,250,251,3,30,15,0,251,252,5,33,0,0,252,253,3,36,18,0,253,
  	255,1,0,0,0,254,244,1,0,0,0,254,245,1,0,0,0,254,249,1,0,0,0,254,250,1,
  	0,0,0,255,37,1,0,0,0,256,257,3,2,1,0,257,259,5,7,0,0,258,260,3,36,18,
  	0,259,258,1,0,0,0,259,260,1,0,0,0,260,261,1,0,0,0,261,262,5,30,0,0,262,
  	263,5,45,0,0,263,265,5,26,0,0,264,266,3,12,6,0,265,264,1,0,0,0,266,267,
  	1,0,0,0,267,265,1,0,0,0,267,268,1,0,0,0,268,269,1,0,0,0,269,270,5,27,
  	0,0,270,39,1,0,0,0,271,272,5,1,0,0,272,273,3,28,14,0,273,274,3,26,13,
  	0,274,275,5,37,0,0,275,41,1,0,0,0,276,277,5,1,0,0,277,278,3,30,15,0,278,
  	279,5,1,0,0,279,280,3,28,14,0,280,281,5,1,0,0,281,282,3,10,5,0,282,283,
  	5,1,0,0,283,284,3,10,5,0,284,285,5,34,0,0,285,297,1,0,0,0,286,287,5,1,
  	0,0,287,288,5,45,0,0,288,289,5,1,0,0,289,290,3,28,14,0,290,291,5,1,0,
  	0,291,292,3,10,5,0,292,293,5,1,0,0,293,294,3,10,5,0,294,295,5,34,0,0,
  	295,297,1,0,0,0,296,276,1,0,0,0,296,286,1,0,0,0,297,43,1,0,0,0,298,299,
  	5,1,0,0,299,300,5,21,0,0,300,313,5,35,0,0,301,302,5,1,0,0,302,303,5,20,
  	0,0,303,313,5,35,0,0,304,305,5,1,0,0,305,306,3,10,5,0,306,307,5,35,0,
  	0,307,313,1,0,0,0,308,309,5,1,0,0,309,310,3,52,26,0,310,311,5,35,0,0,
  	311,313,1,0,0,0,312,298,1,0,0,0,312,301,1,0,0,0,312,304,1,0,0,0,312,308,
  	1,0,0,0,313,45,1,0,0,0,314,315,5,1,0,0,315,316,5,45,0,0,316,317,5,1,0,
  	0,317,318,3,10,5,0,318,319,5,36,0,0,319,327,1,0,0,0,320,321,5,1,0,0,321,
  	322,3,18,9,0,322,323,5,1,0,0,323,324,3,10,5,0,324,325,5,36,0,0,325,327,
  	1,0,0,0,326,314,1,0,0,0,326,320,1,0,0,0,327,47,1,0,0,0,328,334,3,20,10,
  	0,329,334,3,32,16,0,330,334,3,30,15,0,331,334,3,38,19,0,332,334,3,34,
  	17,0,333,328,1,0,0,0,333,329,1,0,0,0,333,330,1,0,0,0,333,331,1,0,0,0,
  	333,332,1,0,0,0,334,49,1,0,0,0,335,336,5,38,0,0,336,339,3,10,5,0,337,
  	339,5,38,0,0,338,335,1,0,0,0,338,337,1,0,0,0,339,51,1,0,0,0,340,341,5,
  	31,0,0,341,342,5,22,0,0,342,345,5,31,0,0,343,345,5,20,0,0,344,340,1,0,
  	0,0,344,343,1,0,0,0,345,53,1,0,0,0,346,350,5,31,0,0,347,349,8,2,0,0,348,
  	347,1,0,0,0,349,352,1,0,0,0,350,351,1,0,0,0,350,348,1,0,0,0,351,353,1,
  	0,0,0,352,350,1,0,0,0,353,354,5,31,0,0,354,55,1,0,0,0,25,59,76,103,111,
  	123,141,152,161,169,176,180,190,231,237,242,254,259,267,296,312,326,333,
  	338,344,350
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pascaliinorelationparserParserStaticData = std::move(staticData);
}

}

PascalIINoRelationParser::PascalIINoRelationParser(TokenStream *input) : PascalIINoRelationParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

PascalIINoRelationParser::PascalIINoRelationParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  PascalIINoRelationParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *pascaliinorelationparserParserStaticData->atn, pascaliinorelationparserParserStaticData->decisionToDFA, pascaliinorelationparserParserStaticData->sharedContextCache, options);
}

PascalIINoRelationParser::~PascalIINoRelationParser() {
  delete _interpreter;
}

const atn::ATN& PascalIINoRelationParser::getATN() const {
  return *pascaliinorelationparserParserStaticData->atn;
}

std::string PascalIINoRelationParser::getGrammarFileName() const {
  return "PascalIINoRelationParser.g4";
}

const std::vector<std::string>& PascalIINoRelationParser::getRuleNames() const {
  return pascaliinorelationparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& PascalIINoRelationParser::getVocabulary() const {
  return pascaliinorelationparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PascalIINoRelationParser::getSerializedATN() const {
  return pascaliinorelationparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

PascalIINoRelationParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PascalIINoRelationParser::StatementContext *> PascalIINoRelationParser::ProgramContext::statement() {
  return getRuleContexts<PascalIINoRelationParser::StatementContext>();
}

PascalIINoRelationParser::StatementContext* PascalIINoRelationParser::ProgramContext::statement(size_t i) {
  return getRuleContext<PascalIINoRelationParser::StatementContext>(i);
}


size_t PascalIINoRelationParser::ProgramContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleProgram;
}

void PascalIINoRelationParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void PascalIINoRelationParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any PascalIINoRelationParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::ProgramContext* PascalIINoRelationParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, PascalIINoRelationParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(56);
      statement();
      setState(59); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 70093866336258) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

PascalIINoRelationParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::TypeContext::CHARACTERID() {
  return getToken(PascalIINoRelationParser::CHARACTERID, 0);
}

tree::TerminalNode* PascalIINoRelationParser::TypeContext::INTID() {
  return getToken(PascalIINoRelationParser::INTID, 0);
}

tree::TerminalNode* PascalIINoRelationParser::TypeContext::VOIDTYPE() {
  return getToken(PascalIINoRelationParser::VOIDTYPE, 0);
}

tree::TerminalNode* PascalIINoRelationParser::TypeContext::FLOATID() {
  return getToken(PascalIINoRelationParser::FLOATID, 0);
}

tree::TerminalNode* PascalIINoRelationParser::TypeContext::BOOLEANID() {
  return getToken(PascalIINoRelationParser::BOOLEANID, 0);
}


size_t PascalIINoRelationParser::TypeContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleType;
}

void PascalIINoRelationParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void PascalIINoRelationParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any PascalIINoRelationParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::TypeContext* PascalIINoRelationParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 2, PascalIINoRelationParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34084860461056) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorContext ------------------------------------------------------------------

PascalIINoRelationParser::OperatorContext::OperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::OperatorContext::PLUS() {
  return getToken(PascalIINoRelationParser::PLUS, 0);
}

tree::TerminalNode* PascalIINoRelationParser::OperatorContext::MINUS() {
  return getToken(PascalIINoRelationParser::MINUS, 0);
}

tree::TerminalNode* PascalIINoRelationParser::OperatorContext::DIVIDE() {
  return getToken(PascalIINoRelationParser::DIVIDE, 0);
}

tree::TerminalNode* PascalIINoRelationParser::OperatorContext::STAR() {
  return getToken(PascalIINoRelationParser::STAR, 0);
}

tree::TerminalNode* PascalIINoRelationParser::OperatorContext::MODULO() {
  return getToken(PascalIINoRelationParser::MODULO, 0);
}

tree::TerminalNode* PascalIINoRelationParser::OperatorContext::LESSTHAN() {
  return getToken(PascalIINoRelationParser::LESSTHAN, 0);
}

tree::TerminalNode* PascalIINoRelationParser::OperatorContext::GREATERTHAN() {
  return getToken(PascalIINoRelationParser::GREATERTHAN, 0);
}

std::vector<tree::TerminalNode *> PascalIINoRelationParser::OperatorContext::EQUAL() {
  return getTokens(PascalIINoRelationParser::EQUAL);
}

tree::TerminalNode* PascalIINoRelationParser::OperatorContext::EQUAL(size_t i) {
  return getToken(PascalIINoRelationParser::EQUAL, i);
}

std::vector<tree::TerminalNode *> PascalIINoRelationParser::OperatorContext::OR() {
  return getTokens(PascalIINoRelationParser::OR);
}

tree::TerminalNode* PascalIINoRelationParser::OperatorContext::OR(size_t i) {
  return getToken(PascalIINoRelationParser::OR, i);
}

std::vector<tree::TerminalNode *> PascalIINoRelationParser::OperatorContext::AMPERSAND() {
  return getTokens(PascalIINoRelationParser::AMPERSAND);
}

tree::TerminalNode* PascalIINoRelationParser::OperatorContext::AMPERSAND(size_t i) {
  return getToken(PascalIINoRelationParser::AMPERSAND, i);
}


size_t PascalIINoRelationParser::OperatorContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleOperator;
}

void PascalIINoRelationParser::OperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperator(this);
}

void PascalIINoRelationParser::OperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperator(this);
}


std::any PascalIINoRelationParser::OperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitOperator(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::OperatorContext* PascalIINoRelationParser::operator_() {
  OperatorContext *_localctx = _tracker.createInstance<OperatorContext>(_ctx, getState());
  enterRule(_localctx, 4, PascalIINoRelationParser::RuleOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalIINoRelationParser::PLUS: {
        enterOuterAlt(_localctx, 1);
        setState(63);
        match(PascalIINoRelationParser::PLUS);
        break;
      }

      case PascalIINoRelationParser::MINUS: {
        enterOuterAlt(_localctx, 2);
        setState(64);
        match(PascalIINoRelationParser::MINUS);
        break;
      }

      case PascalIINoRelationParser::DIVIDE: {
        enterOuterAlt(_localctx, 3);
        setState(65);
        match(PascalIINoRelationParser::DIVIDE);
        break;
      }

      case PascalIINoRelationParser::STAR: {
        enterOuterAlt(_localctx, 4);
        setState(66);
        match(PascalIINoRelationParser::STAR);
        break;
      }

      case PascalIINoRelationParser::MODULO: {
        enterOuterAlt(_localctx, 5);
        setState(67);
        match(PascalIINoRelationParser::MODULO);
        break;
      }

      case PascalIINoRelationParser::LESSTHAN: {
        enterOuterAlt(_localctx, 6);
        setState(68);
        match(PascalIINoRelationParser::LESSTHAN);
        break;
      }

      case PascalIINoRelationParser::GREATERTHAN: {
        enterOuterAlt(_localctx, 7);
        setState(69);
        match(PascalIINoRelationParser::GREATERTHAN);
        break;
      }

      case PascalIINoRelationParser::EQUAL: {
        enterOuterAlt(_localctx, 8);
        setState(70);
        match(PascalIINoRelationParser::EQUAL);
        setState(71);
        match(PascalIINoRelationParser::EQUAL);
        break;
      }

      case PascalIINoRelationParser::OR: {
        enterOuterAlt(_localctx, 9);
        setState(72);
        match(PascalIINoRelationParser::OR);
        setState(73);
        match(PascalIINoRelationParser::OR);
        break;
      }

      case PascalIINoRelationParser::AMPERSAND: {
        enterOuterAlt(_localctx, 10);
        setState(74);
        match(PascalIINoRelationParser::AMPERSAND);
        setState(75);
        match(PascalIINoRelationParser::AMPERSAND);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleoperatorContext ------------------------------------------------------------------

PascalIINoRelationParser::SingleoperatorContext::SingleoperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::SingleoperatorContext::MINUS() {
  return getToken(PascalIINoRelationParser::MINUS, 0);
}

tree::TerminalNode* PascalIINoRelationParser::SingleoperatorContext::NOT() {
  return getToken(PascalIINoRelationParser::NOT, 0);
}


size_t PascalIINoRelationParser::SingleoperatorContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleSingleoperator;
}

void PascalIINoRelationParser::SingleoperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleoperator(this);
}

void PascalIINoRelationParser::SingleoperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleoperator(this);
}


std::any PascalIINoRelationParser::SingleoperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitSingleoperator(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::SingleoperatorContext* PascalIINoRelationParser::singleoperator() {
  SingleoperatorContext *_localctx = _tracker.createInstance<SingleoperatorContext>(_ctx, getState());
  enterRule(_localctx, 6, PascalIINoRelationParser::RuleSingleoperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    _la = _input->LA(1);
    if (!(_la == PascalIINoRelationParser::MINUS

    || _la == PascalIINoRelationParser::NOT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrayaccessContext ------------------------------------------------------------------

PascalIINoRelationParser::ArrayaccessContext::ArrayaccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::ArrayaccessContext::IDENTIFIER() {
  return getToken(PascalIINoRelationParser::IDENTIFIER, 0);
}

tree::TerminalNode* PascalIINoRelationParser::ArrayaccessContext::LBRACKET() {
  return getToken(PascalIINoRelationParser::LBRACKET, 0);
}

PascalIINoRelationParser::ExpressionContext* PascalIINoRelationParser::ArrayaccessContext::expression() {
  return getRuleContext<PascalIINoRelationParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalIINoRelationParser::ArrayaccessContext::RBRACKET() {
  return getToken(PascalIINoRelationParser::RBRACKET, 0);
}


size_t PascalIINoRelationParser::ArrayaccessContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleArrayaccess;
}

void PascalIINoRelationParser::ArrayaccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayaccess(this);
}

void PascalIINoRelationParser::ArrayaccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayaccess(this);
}


std::any PascalIINoRelationParser::ArrayaccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitArrayaccess(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::ArrayaccessContext* PascalIINoRelationParser::arrayaccess() {
  ArrayaccessContext *_localctx = _tracker.createInstance<ArrayaccessContext>(_ctx, getState());
  enterRule(_localctx, 8, PascalIINoRelationParser::RuleArrayaccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(PascalIINoRelationParser::IDENTIFIER);
    setState(81);
    match(PascalIINoRelationParser::LBRACKET);
    setState(82);
    expression(0);
    setState(83);
    match(PascalIINoRelationParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

PascalIINoRelationParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::ExpressionContext::IDENTIFIER() {
  return getToken(PascalIINoRelationParser::IDENTIFIER, 0);
}

tree::TerminalNode* PascalIINoRelationParser::ExpressionContext::FLOAT() {
  return getToken(PascalIINoRelationParser::FLOAT, 0);
}

tree::TerminalNode* PascalIINoRelationParser::ExpressionContext::INTEGER() {
  return getToken(PascalIINoRelationParser::INTEGER, 0);
}

tree::TerminalNode* PascalIINoRelationParser::ExpressionContext::BOOLEAN() {
  return getToken(PascalIINoRelationParser::BOOLEAN, 0);
}

tree::TerminalNode* PascalIINoRelationParser::ExpressionContext::CHAR() {
  return getToken(PascalIINoRelationParser::CHAR, 0);
}

tree::TerminalNode* PascalIINoRelationParser::ExpressionContext::VOIDTYPE() {
  return getToken(PascalIINoRelationParser::VOIDTYPE, 0);
}

PascalIINoRelationParser::CstringContext* PascalIINoRelationParser::ExpressionContext::cstring() {
  return getRuleContext<PascalIINoRelationParser::CstringContext>(0);
}

tree::TerminalNode* PascalIINoRelationParser::ExpressionContext::NOT() {
  return getToken(PascalIINoRelationParser::NOT, 0);
}

std::vector<PascalIINoRelationParser::ExpressionContext *> PascalIINoRelationParser::ExpressionContext::expression() {
  return getRuleContexts<PascalIINoRelationParser::ExpressionContext>();
}

PascalIINoRelationParser::ExpressionContext* PascalIINoRelationParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<PascalIINoRelationParser::ExpressionContext>(i);
}

PascalIINoRelationParser::ObjectaccessContext* PascalIINoRelationParser::ExpressionContext::objectaccess() {
  return getRuleContext<PascalIINoRelationParser::ObjectaccessContext>(0);
}

PascalIINoRelationParser::FunctioncallContext* PascalIINoRelationParser::ExpressionContext::functioncall() {
  return getRuleContext<PascalIINoRelationParser::FunctioncallContext>(0);
}

PascalIINoRelationParser::AddressofContext* PascalIINoRelationParser::ExpressionContext::addressof() {
  return getRuleContext<PascalIINoRelationParser::AddressofContext>(0);
}

PascalIINoRelationParser::PointeraccessContext* PascalIINoRelationParser::ExpressionContext::pointeraccess() {
  return getRuleContext<PascalIINoRelationParser::PointeraccessContext>(0);
}

PascalIINoRelationParser::SingleoperatorContext* PascalIINoRelationParser::ExpressionContext::singleoperator() {
  return getRuleContext<PascalIINoRelationParser::SingleoperatorContext>(0);
}

PascalIINoRelationParser::ArrayaccessContext* PascalIINoRelationParser::ExpressionContext::arrayaccess() {
  return getRuleContext<PascalIINoRelationParser::ArrayaccessContext>(0);
}

PascalIINoRelationParser::OperatorContext* PascalIINoRelationParser::ExpressionContext::operator_() {
  return getRuleContext<PascalIINoRelationParser::OperatorContext>(0);
}


size_t PascalIINoRelationParser::ExpressionContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleExpression;
}

void PascalIINoRelationParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void PascalIINoRelationParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any PascalIINoRelationParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


PascalIINoRelationParser::ExpressionContext* PascalIINoRelationParser::expression() {
   return expression(0);
}

PascalIINoRelationParser::ExpressionContext* PascalIINoRelationParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PascalIINoRelationParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  PascalIINoRelationParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, PascalIINoRelationParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(103);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(86);
      match(PascalIINoRelationParser::IDENTIFIER);
      break;
    }

    case 2: {
      setState(87);
      match(PascalIINoRelationParser::FLOAT);
      break;
    }

    case 3: {
      setState(88);
      match(PascalIINoRelationParser::INTEGER);
      break;
    }

    case 4: {
      setState(89);
      match(PascalIINoRelationParser::BOOLEAN);
      break;
    }

    case 5: {
      setState(90);
      match(PascalIINoRelationParser::CHAR);
      break;
    }

    case 6: {
      setState(91);
      match(PascalIINoRelationParser::VOIDTYPE);
      break;
    }

    case 7: {
      setState(92);
      cstring();
      break;
    }

    case 8: {
      setState(93);
      match(PascalIINoRelationParser::NOT);
      setState(94);
      expression(7);
      break;
    }

    case 9: {
      setState(95);
      objectaccess();
      break;
    }

    case 10: {
      setState(96);
      functioncall();
      break;
    }

    case 11: {
      setState(97);
      addressof();
      break;
    }

    case 12: {
      setState(98);
      pointeraccess();
      break;
    }

    case 13: {
      setState(99);
      singleoperator();
      setState(100);
      expression(2);
      break;
    }

    case 14: {
      setState(102);
      arrayaccess();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(111);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(105);

        if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
        setState(106);
        operator_();
        setState(107);
        expression(9); 
      }
      setState(113);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

PascalIINoRelationParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalIINoRelationParser::DefinitionContext* PascalIINoRelationParser::StatementContext::definition() {
  return getRuleContext<PascalIINoRelationParser::DefinitionContext>(0);
}

PascalIINoRelationParser::FunctioncallContext* PascalIINoRelationParser::StatementContext::functioncall() {
  return getRuleContext<PascalIINoRelationParser::FunctioncallContext>(0);
}

PascalIINoRelationParser::PointerassignmentContext* PascalIINoRelationParser::StatementContext::pointerassignment() {
  return getRuleContext<PascalIINoRelationParser::PointerassignmentContext>(0);
}

PascalIINoRelationParser::AssignmentContext* PascalIINoRelationParser::StatementContext::assignment() {
  return getRuleContext<PascalIINoRelationParser::AssignmentContext>(0);
}

PascalIINoRelationParser::IfstatementContext* PascalIINoRelationParser::StatementContext::ifstatement() {
  return getRuleContext<PascalIINoRelationParser::IfstatementContext>(0);
}

PascalIINoRelationParser::WritestatementContext* PascalIINoRelationParser::StatementContext::writestatement() {
  return getRuleContext<PascalIINoRelationParser::WritestatementContext>(0);
}

PascalIINoRelationParser::ReturnstatementContext* PascalIINoRelationParser::StatementContext::returnstatement() {
  return getRuleContext<PascalIINoRelationParser::ReturnstatementContext>(0);
}

PascalIINoRelationParser::ForstatementContext* PascalIINoRelationParser::StatementContext::forstatement() {
  return getRuleContext<PascalIINoRelationParser::ForstatementContext>(0);
}

PascalIINoRelationParser::ReadstatementContext* PascalIINoRelationParser::StatementContext::readstatement() {
  return getRuleContext<PascalIINoRelationParser::ReadstatementContext>(0);
}


size_t PascalIINoRelationParser::StatementContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleStatement;
}

void PascalIINoRelationParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void PascalIINoRelationParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any PascalIINoRelationParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::StatementContext* PascalIINoRelationParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 12, PascalIINoRelationParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(114);
      definition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(115);
      functioncall();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(116);
      pointerassignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(117);
      assignment();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(118);
      ifstatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(119);
      writestatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(120);
      returnstatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(121);
      forstatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(122);
      readstatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectaccessContext ------------------------------------------------------------------

PascalIINoRelationParser::ObjectaccessContext::ObjectaccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PascalIINoRelationParser::ObjectaccessContext::IDENTIFIER() {
  return getTokens(PascalIINoRelationParser::IDENTIFIER);
}

tree::TerminalNode* PascalIINoRelationParser::ObjectaccessContext::IDENTIFIER(size_t i) {
  return getToken(PascalIINoRelationParser::IDENTIFIER, i);
}

tree::TerminalNode* PascalIINoRelationParser::ObjectaccessContext::ACCESSOR() {
  return getToken(PascalIINoRelationParser::ACCESSOR, 0);
}


size_t PascalIINoRelationParser::ObjectaccessContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleObjectaccess;
}

void PascalIINoRelationParser::ObjectaccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectaccess(this);
}

void PascalIINoRelationParser::ObjectaccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectaccess(this);
}


std::any PascalIINoRelationParser::ObjectaccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitObjectaccess(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::ObjectaccessContext* PascalIINoRelationParser::objectaccess() {
  ObjectaccessContext *_localctx = _tracker.createInstance<ObjectaccessContext>(_ctx, getState());
  enterRule(_localctx, 14, PascalIINoRelationParser::RuleObjectaccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(PascalIINoRelationParser::IDENTIFIER);
    setState(126);
    match(PascalIINoRelationParser::ACCESSOR);
    setState(127);
    match(PascalIINoRelationParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointeraccessContext ------------------------------------------------------------------

PascalIINoRelationParser::PointeraccessContext::PointeraccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::PointeraccessContext::REFERENCE() {
  return getToken(PascalIINoRelationParser::REFERENCE, 0);
}

tree::TerminalNode* PascalIINoRelationParser::PointeraccessContext::IDENTIFIER() {
  return getToken(PascalIINoRelationParser::IDENTIFIER, 0);
}


size_t PascalIINoRelationParser::PointeraccessContext::getRuleIndex() const {
  return PascalIINoRelationParser::RulePointeraccess;
}

void PascalIINoRelationParser::PointeraccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointeraccess(this);
}

void PascalIINoRelationParser::PointeraccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointeraccess(this);
}


std::any PascalIINoRelationParser::PointeraccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitPointeraccess(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::PointeraccessContext* PascalIINoRelationParser::pointeraccess() {
  PointeraccessContext *_localctx = _tracker.createInstance<PointeraccessContext>(_ctx, getState());
  enterRule(_localctx, 16, PascalIINoRelationParser::RulePointeraccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(PascalIINoRelationParser::REFERENCE);
    setState(130);
    match(PascalIINoRelationParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddressofContext ------------------------------------------------------------------

PascalIINoRelationParser::AddressofContext::AddressofContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::AddressofContext::AMPERSAND() {
  return getToken(PascalIINoRelationParser::AMPERSAND, 0);
}

tree::TerminalNode* PascalIINoRelationParser::AddressofContext::IDENTIFIER() {
  return getToken(PascalIINoRelationParser::IDENTIFIER, 0);
}


size_t PascalIINoRelationParser::AddressofContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleAddressof;
}

void PascalIINoRelationParser::AddressofContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddressof(this);
}

void PascalIINoRelationParser::AddressofContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddressof(this);
}


std::any PascalIINoRelationParser::AddressofContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitAddressof(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::AddressofContext* PascalIINoRelationParser::addressof() {
  AddressofContext *_localctx = _tracker.createInstance<AddressofContext>(_ctx, getState());
  enterRule(_localctx, 18, PascalIINoRelationParser::RuleAddressof);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(PascalIINoRelationParser::AMPERSAND);
    setState(133);
    match(PascalIINoRelationParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassdefinitionContext ------------------------------------------------------------------

PascalIINoRelationParser::ClassdefinitionContext::ClassdefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::ClassdefinitionContext::CLASSID() {
  return getToken(PascalIINoRelationParser::CLASSID, 0);
}

tree::TerminalNode* PascalIINoRelationParser::ClassdefinitionContext::IDENTIFIER() {
  return getToken(PascalIINoRelationParser::IDENTIFIER, 0);
}

tree::TerminalNode* PascalIINoRelationParser::ClassdefinitionContext::LCURLY() {
  return getToken(PascalIINoRelationParser::LCURLY, 0);
}

tree::TerminalNode* PascalIINoRelationParser::ClassdefinitionContext::RCURLY() {
  return getToken(PascalIINoRelationParser::RCURLY, 0);
}

std::vector<PascalIINoRelationParser::DefinitionContext *> PascalIINoRelationParser::ClassdefinitionContext::definition() {
  return getRuleContexts<PascalIINoRelationParser::DefinitionContext>();
}

PascalIINoRelationParser::DefinitionContext* PascalIINoRelationParser::ClassdefinitionContext::definition(size_t i) {
  return getRuleContext<PascalIINoRelationParser::DefinitionContext>(i);
}


size_t PascalIINoRelationParser::ClassdefinitionContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleClassdefinition;
}

void PascalIINoRelationParser::ClassdefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassdefinition(this);
}

void PascalIINoRelationParser::ClassdefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassdefinition(this);
}


std::any PascalIINoRelationParser::ClassdefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitClassdefinition(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::ClassdefinitionContext* PascalIINoRelationParser::classdefinition() {
  ClassdefinitionContext *_localctx = _tracker.createInstance<ClassdefinitionContext>(_ctx, getState());
  enterRule(_localctx, 20, PascalIINoRelationParser::RuleClassdefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(PascalIINoRelationParser::CLASSID);
    setState(136);
    match(PascalIINoRelationParser::IDENTIFIER);
    setState(137);
    match(PascalIINoRelationParser::LCURLY);
    setState(141);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 69818988363776) != 0)) {
      setState(138);
      definition();
      setState(143);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(144);
    match(PascalIINoRelationParser::RCURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerassignmentContext ------------------------------------------------------------------

PascalIINoRelationParser::PointerassignmentContext::PointerassignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::PointerassignmentContext::REFERENCE() {
  return getToken(PascalIINoRelationParser::REFERENCE, 0);
}

PascalIINoRelationParser::AssignmentContext* PascalIINoRelationParser::PointerassignmentContext::assignment() {
  return getRuleContext<PascalIINoRelationParser::AssignmentContext>(0);
}

PascalIINoRelationParser::ArrayaccessContext* PascalIINoRelationParser::PointerassignmentContext::arrayaccess() {
  return getRuleContext<PascalIINoRelationParser::ArrayaccessContext>(0);
}

tree::TerminalNode* PascalIINoRelationParser::PointerassignmentContext::EQUAL() {
  return getToken(PascalIINoRelationParser::EQUAL, 0);
}

PascalIINoRelationParser::ExpressionContext* PascalIINoRelationParser::PointerassignmentContext::expression() {
  return getRuleContext<PascalIINoRelationParser::ExpressionContext>(0);
}


size_t PascalIINoRelationParser::PointerassignmentContext::getRuleIndex() const {
  return PascalIINoRelationParser::RulePointerassignment;
}

void PascalIINoRelationParser::PointerassignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerassignment(this);
}

void PascalIINoRelationParser::PointerassignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerassignment(this);
}


std::any PascalIINoRelationParser::PointerassignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitPointerassignment(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::PointerassignmentContext* PascalIINoRelationParser::pointerassignment() {
  PointerassignmentContext *_localctx = _tracker.createInstance<PointerassignmentContext>(_ctx, getState());
  enterRule(_localctx, 22, PascalIINoRelationParser::RulePointerassignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(152);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalIINoRelationParser::REFERENCE: {
        enterOuterAlt(_localctx, 1);
        setState(146);
        match(PascalIINoRelationParser::REFERENCE);
        setState(147);
        assignment();
        break;
      }

      case PascalIINoRelationParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(148);
        arrayaccess();
        setState(149);
        match(PascalIINoRelationParser::EQUAL);
        setState(150);
        expression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

PascalIINoRelationParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::AssignmentContext::IDENTIFIER() {
  return getToken(PascalIINoRelationParser::IDENTIFIER, 0);
}

tree::TerminalNode* PascalIINoRelationParser::AssignmentContext::EQUAL() {
  return getToken(PascalIINoRelationParser::EQUAL, 0);
}

PascalIINoRelationParser::ExpressionContext* PascalIINoRelationParser::AssignmentContext::expression() {
  return getRuleContext<PascalIINoRelationParser::ExpressionContext>(0);
}

PascalIINoRelationParser::ObjectaccessContext* PascalIINoRelationParser::AssignmentContext::objectaccess() {
  return getRuleContext<PascalIINoRelationParser::ObjectaccessContext>(0);
}


size_t PascalIINoRelationParser::AssignmentContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleAssignment;
}

void PascalIINoRelationParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void PascalIINoRelationParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any PascalIINoRelationParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::AssignmentContext* PascalIINoRelationParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 24, PascalIINoRelationParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(161);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(154);
      match(PascalIINoRelationParser::IDENTIFIER);
      setState(155);
      match(PascalIINoRelationParser::EQUAL);
      setState(156);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(157);
      objectaccess();
      setState(158);
      match(PascalIINoRelationParser::EQUAL);
      setState(159);
      expression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

PascalIINoRelationParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::ParameterContext::UNDERSCORE() {
  return getToken(PascalIINoRelationParser::UNDERSCORE, 0);
}

PascalIINoRelationParser::ExpressionContext* PascalIINoRelationParser::ParameterContext::expression() {
  return getRuleContext<PascalIINoRelationParser::ExpressionContext>(0);
}


size_t PascalIINoRelationParser::ParameterContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleParameter;
}

void PascalIINoRelationParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void PascalIINoRelationParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


std::any PascalIINoRelationParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::ParameterContext* PascalIINoRelationParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 26, PascalIINoRelationParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(PascalIINoRelationParser::UNDERSCORE);
    setState(164);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctioncallContext ------------------------------------------------------------------

PascalIINoRelationParser::FunctioncallContext::FunctioncallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::FunctioncallContext::IDENTIFIER() {
  return getToken(PascalIINoRelationParser::IDENTIFIER, 0);
}

std::vector<PascalIINoRelationParser::ParameterContext *> PascalIINoRelationParser::FunctioncallContext::parameter() {
  return getRuleContexts<PascalIINoRelationParser::ParameterContext>();
}

PascalIINoRelationParser::ParameterContext* PascalIINoRelationParser::FunctioncallContext::parameter(size_t i) {
  return getRuleContext<PascalIINoRelationParser::ParameterContext>(i);
}

PascalIINoRelationParser::ObjectaccessContext* PascalIINoRelationParser::FunctioncallContext::objectaccess() {
  return getRuleContext<PascalIINoRelationParser::ObjectaccessContext>(0);
}


size_t PascalIINoRelationParser::FunctioncallContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleFunctioncall;
}

void PascalIINoRelationParser::FunctioncallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctioncall(this);
}

void PascalIINoRelationParser::FunctioncallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctioncall(this);
}


std::any PascalIINoRelationParser::FunctioncallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitFunctioncall(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::FunctioncallContext* PascalIINoRelationParser::functioncall() {
  FunctioncallContext *_localctx = _tracker.createInstance<FunctioncallContext>(_ctx, getState());
  enterRule(_localctx, 28, PascalIINoRelationParser::RuleFunctioncall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(180);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PascalIINoRelationParser::UNDERSCORE) {
        setState(166);
        parameter();
        setState(171);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(172);
      match(PascalIINoRelationParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(176);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PascalIINoRelationParser::UNDERSCORE) {
        setState(173);
        parameter();
        setState(178);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(179);
      objectaccess();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariabledefinitionContext ------------------------------------------------------------------

PascalIINoRelationParser::VariabledefinitionContext::VariabledefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalIINoRelationParser::TypeContext* PascalIINoRelationParser::VariabledefinitionContext::type() {
  return getRuleContext<PascalIINoRelationParser::TypeContext>(0);
}

tree::TerminalNode* PascalIINoRelationParser::VariabledefinitionContext::IDENTIFIER() {
  return getToken(PascalIINoRelationParser::IDENTIFIER, 0);
}

tree::TerminalNode* PascalIINoRelationParser::VariabledefinitionContext::EQUAL() {
  return getToken(PascalIINoRelationParser::EQUAL, 0);
}

PascalIINoRelationParser::ExpressionContext* PascalIINoRelationParser::VariabledefinitionContext::expression() {
  return getRuleContext<PascalIINoRelationParser::ExpressionContext>(0);
}


size_t PascalIINoRelationParser::VariabledefinitionContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleVariabledefinition;
}

void PascalIINoRelationParser::VariabledefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariabledefinition(this);
}

void PascalIINoRelationParser::VariabledefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariabledefinition(this);
}


std::any PascalIINoRelationParser::VariabledefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitVariabledefinition(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::VariabledefinitionContext* PascalIINoRelationParser::variabledefinition() {
  VariabledefinitionContext *_localctx = _tracker.createInstance<VariabledefinitionContext>(_ctx, getState());
  enterRule(_localctx, 30, PascalIINoRelationParser::RuleVariabledefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(182);
      type();
      setState(183);
      match(PascalIINoRelationParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(185);
      type();
      setState(186);
      match(PascalIINoRelationParser::IDENTIFIER);
      setState(187);
      match(PascalIINoRelationParser::EQUAL);
      setState(188);
      expression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectdefinitionContext ------------------------------------------------------------------

PascalIINoRelationParser::ObjectdefinitionContext::ObjectdefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PascalIINoRelationParser::ObjectdefinitionContext::IDENTIFIER() {
  return getTokens(PascalIINoRelationParser::IDENTIFIER);
}

tree::TerminalNode* PascalIINoRelationParser::ObjectdefinitionContext::IDENTIFIER(size_t i) {
  return getToken(PascalIINoRelationParser::IDENTIFIER, i);
}


size_t PascalIINoRelationParser::ObjectdefinitionContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleObjectdefinition;
}

void PascalIINoRelationParser::ObjectdefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectdefinition(this);
}

void PascalIINoRelationParser::ObjectdefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectdefinition(this);
}


std::any PascalIINoRelationParser::ObjectdefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitObjectdefinition(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::ObjectdefinitionContext* PascalIINoRelationParser::objectdefinition() {
  ObjectdefinitionContext *_localctx = _tracker.createInstance<ObjectdefinitionContext>(_ctx, getState());
  enterRule(_localctx, 32, PascalIINoRelationParser::RuleObjectdefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(PascalIINoRelationParser::IDENTIFIER);
    setState(193);
    match(PascalIINoRelationParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PointerdefinitionContext ------------------------------------------------------------------

PascalIINoRelationParser::PointerdefinitionContext::PointerdefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalIINoRelationParser::TypeContext* PascalIINoRelationParser::PointerdefinitionContext::type() {
  return getRuleContext<PascalIINoRelationParser::TypeContext>(0);
}

tree::TerminalNode* PascalIINoRelationParser::PointerdefinitionContext::REFERENCE() {
  return getToken(PascalIINoRelationParser::REFERENCE, 0);
}

std::vector<tree::TerminalNode *> PascalIINoRelationParser::PointerdefinitionContext::IDENTIFIER() {
  return getTokens(PascalIINoRelationParser::IDENTIFIER);
}

tree::TerminalNode* PascalIINoRelationParser::PointerdefinitionContext::IDENTIFIER(size_t i) {
  return getToken(PascalIINoRelationParser::IDENTIFIER, i);
}

tree::TerminalNode* PascalIINoRelationParser::PointerdefinitionContext::LBRACKET() {
  return getToken(PascalIINoRelationParser::LBRACKET, 0);
}

tree::TerminalNode* PascalIINoRelationParser::PointerdefinitionContext::INTEGER() {
  return getToken(PascalIINoRelationParser::INTEGER, 0);
}

tree::TerminalNode* PascalIINoRelationParser::PointerdefinitionContext::RBRACKET() {
  return getToken(PascalIINoRelationParser::RBRACKET, 0);
}

tree::TerminalNode* PascalIINoRelationParser::PointerdefinitionContext::AMPERSAND() {
  return getToken(PascalIINoRelationParser::AMPERSAND, 0);
}

tree::TerminalNode* PascalIINoRelationParser::PointerdefinitionContext::EQUAL() {
  return getToken(PascalIINoRelationParser::EQUAL, 0);
}

PascalIINoRelationParser::CstringContext* PascalIINoRelationParser::PointerdefinitionContext::cstring() {
  return getRuleContext<PascalIINoRelationParser::CstringContext>(0);
}

tree::TerminalNode* PascalIINoRelationParser::PointerdefinitionContext::LCURLY() {
  return getToken(PascalIINoRelationParser::LCURLY, 0);
}

tree::TerminalNode* PascalIINoRelationParser::PointerdefinitionContext::RCURLY() {
  return getToken(PascalIINoRelationParser::RCURLY, 0);
}

std::vector<PascalIINoRelationParser::ExpressionContext *> PascalIINoRelationParser::PointerdefinitionContext::expression() {
  return getRuleContexts<PascalIINoRelationParser::ExpressionContext>();
}

PascalIINoRelationParser::ExpressionContext* PascalIINoRelationParser::PointerdefinitionContext::expression(size_t i) {
  return getRuleContext<PascalIINoRelationParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> PascalIINoRelationParser::PointerdefinitionContext::COMMA() {
  return getTokens(PascalIINoRelationParser::COMMA);
}

tree::TerminalNode* PascalIINoRelationParser::PointerdefinitionContext::COMMA(size_t i) {
  return getToken(PascalIINoRelationParser::COMMA, i);
}


size_t PascalIINoRelationParser::PointerdefinitionContext::getRuleIndex() const {
  return PascalIINoRelationParser::RulePointerdefinition;
}

void PascalIINoRelationParser::PointerdefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPointerdefinition(this);
}

void PascalIINoRelationParser::PointerdefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPointerdefinition(this);
}


std::any PascalIINoRelationParser::PointerdefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitPointerdefinition(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::PointerdefinitionContext* PascalIINoRelationParser::pointerdefinition() {
  PointerdefinitionContext *_localctx = _tracker.createInstance<PointerdefinitionContext>(_ctx, getState());
  enterRule(_localctx, 34, PascalIINoRelationParser::RulePointerdefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(242);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(195);
      type();
      setState(196);
      match(PascalIINoRelationParser::REFERENCE);
      setState(197);
      match(PascalIINoRelationParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(199);
      type();
      setState(200);
      match(PascalIINoRelationParser::REFERENCE);
      setState(201);
      match(PascalIINoRelationParser::IDENTIFIER);
      setState(202);
      match(PascalIINoRelationParser::LBRACKET);
      setState(203);
      match(PascalIINoRelationParser::INTEGER);
      setState(204);
      match(PascalIINoRelationParser::RBRACKET);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(206);
      type();
      setState(207);
      match(PascalIINoRelationParser::AMPERSAND);
      setState(208);
      match(PascalIINoRelationParser::IDENTIFIER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(210);
      type();
      setState(211);
      match(PascalIINoRelationParser::REFERENCE);
      setState(212);
      match(PascalIINoRelationParser::IDENTIFIER);
      setState(213);
      match(PascalIINoRelationParser::EQUAL);
      setState(214);
      cstring();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(216);
      match(PascalIINoRelationParser::IDENTIFIER);
      setState(217);
      match(PascalIINoRelationParser::REFERENCE);
      setState(218);
      match(PascalIINoRelationParser::IDENTIFIER);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(219);
      match(PascalIINoRelationParser::IDENTIFIER);
      setState(220);
      match(PascalIINoRelationParser::REFERENCE);
      setState(221);
      match(PascalIINoRelationParser::IDENTIFIER);
      setState(222);
      match(PascalIINoRelationParser::LBRACKET);
      setState(223);
      match(PascalIINoRelationParser::INTEGER);
      setState(224);
      match(PascalIINoRelationParser::RBRACKET);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(225);
      type();
      setState(226);
      match(PascalIINoRelationParser::REFERENCE);
      setState(227);
      match(PascalIINoRelationParser::IDENTIFIER);
      setState(228);
      match(PascalIINoRelationParser::EQUAL);
      setState(229);
      match(PascalIINoRelationParser::LCURLY);
      setState(231);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 39584568127498) != 0)) {
        setState(230);
        expression(0);
      }
      setState(237);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PascalIINoRelationParser::COMMA) {
        setState(233);
        match(PascalIINoRelationParser::COMMA);
        setState(234);
        expression(0);
        setState(239);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(240);
      match(PascalIINoRelationParser::RCURLY);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersdefinitionContext ------------------------------------------------------------------

PascalIINoRelationParser::ParametersdefinitionContext::ParametersdefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalIINoRelationParser::PointerdefinitionContext* PascalIINoRelationParser::ParametersdefinitionContext::pointerdefinition() {
  return getRuleContext<PascalIINoRelationParser::PointerdefinitionContext>(0);
}

tree::TerminalNode* PascalIINoRelationParser::ParametersdefinitionContext::COMMA() {
  return getToken(PascalIINoRelationParser::COMMA, 0);
}

PascalIINoRelationParser::ParametersdefinitionContext* PascalIINoRelationParser::ParametersdefinitionContext::parametersdefinition() {
  return getRuleContext<PascalIINoRelationParser::ParametersdefinitionContext>(0);
}

PascalIINoRelationParser::VariabledefinitionContext* PascalIINoRelationParser::ParametersdefinitionContext::variabledefinition() {
  return getRuleContext<PascalIINoRelationParser::VariabledefinitionContext>(0);
}


size_t PascalIINoRelationParser::ParametersdefinitionContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleParametersdefinition;
}

void PascalIINoRelationParser::ParametersdefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametersdefinition(this);
}

void PascalIINoRelationParser::ParametersdefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametersdefinition(this);
}


std::any PascalIINoRelationParser::ParametersdefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitParametersdefinition(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::ParametersdefinitionContext* PascalIINoRelationParser::parametersdefinition() {
  ParametersdefinitionContext *_localctx = _tracker.createInstance<ParametersdefinitionContext>(_ctx, getState());
  enterRule(_localctx, 36, PascalIINoRelationParser::RuleParametersdefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(244);
      pointerdefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(245);
      pointerdefinition();
      setState(246);
      match(PascalIINoRelationParser::COMMA);
      setState(247);
      parametersdefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(249);
      variabledefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(250);
      variabledefinition();
      setState(251);
      match(PascalIINoRelationParser::COMMA);
      setState(252);
      parametersdefinition();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiondefinitionContext ------------------------------------------------------------------

PascalIINoRelationParser::FunctiondefinitionContext::FunctiondefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalIINoRelationParser::TypeContext* PascalIINoRelationParser::FunctiondefinitionContext::type() {
  return getRuleContext<PascalIINoRelationParser::TypeContext>(0);
}

tree::TerminalNode* PascalIINoRelationParser::FunctiondefinitionContext::SIGNATURE() {
  return getToken(PascalIINoRelationParser::SIGNATURE, 0);
}

tree::TerminalNode* PascalIINoRelationParser::FunctiondefinitionContext::COLON() {
  return getToken(PascalIINoRelationParser::COLON, 0);
}

tree::TerminalNode* PascalIINoRelationParser::FunctiondefinitionContext::IDENTIFIER() {
  return getToken(PascalIINoRelationParser::IDENTIFIER, 0);
}

tree::TerminalNode* PascalIINoRelationParser::FunctiondefinitionContext::LCURLY() {
  return getToken(PascalIINoRelationParser::LCURLY, 0);
}

tree::TerminalNode* PascalIINoRelationParser::FunctiondefinitionContext::RCURLY() {
  return getToken(PascalIINoRelationParser::RCURLY, 0);
}

PascalIINoRelationParser::ParametersdefinitionContext* PascalIINoRelationParser::FunctiondefinitionContext::parametersdefinition() {
  return getRuleContext<PascalIINoRelationParser::ParametersdefinitionContext>(0);
}

std::vector<PascalIINoRelationParser::StatementContext *> PascalIINoRelationParser::FunctiondefinitionContext::statement() {
  return getRuleContexts<PascalIINoRelationParser::StatementContext>();
}

PascalIINoRelationParser::StatementContext* PascalIINoRelationParser::FunctiondefinitionContext::statement(size_t i) {
  return getRuleContext<PascalIINoRelationParser::StatementContext>(i);
}


size_t PascalIINoRelationParser::FunctiondefinitionContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleFunctiondefinition;
}

void PascalIINoRelationParser::FunctiondefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctiondefinition(this);
}

void PascalIINoRelationParser::FunctiondefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctiondefinition(this);
}


std::any PascalIINoRelationParser::FunctiondefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitFunctiondefinition(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::FunctiondefinitionContext* PascalIINoRelationParser::functiondefinition() {
  FunctiondefinitionContext *_localctx = _tracker.createInstance<FunctiondefinitionContext>(_ctx, getState());
  enterRule(_localctx, 38, PascalIINoRelationParser::RuleFunctiondefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    type();
    setState(257);
    match(PascalIINoRelationParser::SIGNATURE);
    setState(259);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 69269232549888) != 0)) {
      setState(258);
      parametersdefinition();
    }
    setState(261);
    match(PascalIINoRelationParser::COLON);
    setState(262);
    match(PascalIINoRelationParser::IDENTIFIER);
    setState(263);
    match(PascalIINoRelationParser::LCURLY);
    setState(265); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(264);
      statement();
      setState(267); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 70093866336258) != 0));
    setState(269);
    match(PascalIINoRelationParser::RCURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfstatementContext ------------------------------------------------------------------

PascalIINoRelationParser::IfstatementContext::IfstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::IfstatementContext::UNDERSCORE() {
  return getToken(PascalIINoRelationParser::UNDERSCORE, 0);
}

PascalIINoRelationParser::FunctioncallContext* PascalIINoRelationParser::IfstatementContext::functioncall() {
  return getRuleContext<PascalIINoRelationParser::FunctioncallContext>(0);
}

PascalIINoRelationParser::ParameterContext* PascalIINoRelationParser::IfstatementContext::parameter() {
  return getRuleContext<PascalIINoRelationParser::ParameterContext>(0);
}

tree::TerminalNode* PascalIINoRelationParser::IfstatementContext::IF() {
  return getToken(PascalIINoRelationParser::IF, 0);
}


size_t PascalIINoRelationParser::IfstatementContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleIfstatement;
}

void PascalIINoRelationParser::IfstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfstatement(this);
}

void PascalIINoRelationParser::IfstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfstatement(this);
}


std::any PascalIINoRelationParser::IfstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitIfstatement(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::IfstatementContext* PascalIINoRelationParser::ifstatement() {
  IfstatementContext *_localctx = _tracker.createInstance<IfstatementContext>(_ctx, getState());
  enterRule(_localctx, 40, PascalIINoRelationParser::RuleIfstatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(PascalIINoRelationParser::UNDERSCORE);
    setState(272);
    functioncall();
    setState(273);
    parameter();
    setState(274);
    match(PascalIINoRelationParser::IF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForstatementContext ------------------------------------------------------------------

PascalIINoRelationParser::ForstatementContext::ForstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PascalIINoRelationParser::ForstatementContext::UNDERSCORE() {
  return getTokens(PascalIINoRelationParser::UNDERSCORE);
}

tree::TerminalNode* PascalIINoRelationParser::ForstatementContext::UNDERSCORE(size_t i) {
  return getToken(PascalIINoRelationParser::UNDERSCORE, i);
}

PascalIINoRelationParser::VariabledefinitionContext* PascalIINoRelationParser::ForstatementContext::variabledefinition() {
  return getRuleContext<PascalIINoRelationParser::VariabledefinitionContext>(0);
}

PascalIINoRelationParser::FunctioncallContext* PascalIINoRelationParser::ForstatementContext::functioncall() {
  return getRuleContext<PascalIINoRelationParser::FunctioncallContext>(0);
}

std::vector<PascalIINoRelationParser::ExpressionContext *> PascalIINoRelationParser::ForstatementContext::expression() {
  return getRuleContexts<PascalIINoRelationParser::ExpressionContext>();
}

PascalIINoRelationParser::ExpressionContext* PascalIINoRelationParser::ForstatementContext::expression(size_t i) {
  return getRuleContext<PascalIINoRelationParser::ExpressionContext>(i);
}

tree::TerminalNode* PascalIINoRelationParser::ForstatementContext::FOR() {
  return getToken(PascalIINoRelationParser::FOR, 0);
}

tree::TerminalNode* PascalIINoRelationParser::ForstatementContext::IDENTIFIER() {
  return getToken(PascalIINoRelationParser::IDENTIFIER, 0);
}


size_t PascalIINoRelationParser::ForstatementContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleForstatement;
}

void PascalIINoRelationParser::ForstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForstatement(this);
}

void PascalIINoRelationParser::ForstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForstatement(this);
}


std::any PascalIINoRelationParser::ForstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitForstatement(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::ForstatementContext* PascalIINoRelationParser::forstatement() {
  ForstatementContext *_localctx = _tracker.createInstance<ForstatementContext>(_ctx, getState());
  enterRule(_localctx, 42, PascalIINoRelationParser::RuleForstatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(296);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(276);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(277);
      variabledefinition();
      setState(278);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(279);
      functioncall();
      setState(280);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(281);
      expression(0);
      setState(282);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(283);
      expression(0);
      setState(284);
      match(PascalIINoRelationParser::FOR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(286);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(287);
      match(PascalIINoRelationParser::IDENTIFIER);
      setState(288);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(289);
      functioncall();
      setState(290);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(291);
      expression(0);
      setState(292);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(293);
      expression(0);
      setState(294);
      match(PascalIINoRelationParser::FOR);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WritestatementContext ------------------------------------------------------------------

PascalIINoRelationParser::WritestatementContext::WritestatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::WritestatementContext::UNDERSCORE() {
  return getToken(PascalIINoRelationParser::UNDERSCORE, 0);
}

tree::TerminalNode* PascalIINoRelationParser::WritestatementContext::CSTRING() {
  return getToken(PascalIINoRelationParser::CSTRING, 0);
}

tree::TerminalNode* PascalIINoRelationParser::WritestatementContext::WRITE() {
  return getToken(PascalIINoRelationParser::WRITE, 0);
}

tree::TerminalNode* PascalIINoRelationParser::WritestatementContext::CHAR() {
  return getToken(PascalIINoRelationParser::CHAR, 0);
}

PascalIINoRelationParser::ExpressionContext* PascalIINoRelationParser::WritestatementContext::expression() {
  return getRuleContext<PascalIINoRelationParser::ExpressionContext>(0);
}

PascalIINoRelationParser::CharliteralContext* PascalIINoRelationParser::WritestatementContext::charliteral() {
  return getRuleContext<PascalIINoRelationParser::CharliteralContext>(0);
}


size_t PascalIINoRelationParser::WritestatementContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleWritestatement;
}

void PascalIINoRelationParser::WritestatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWritestatement(this);
}

void PascalIINoRelationParser::WritestatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWritestatement(this);
}


std::any PascalIINoRelationParser::WritestatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitWritestatement(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::WritestatementContext* PascalIINoRelationParser::writestatement() {
  WritestatementContext *_localctx = _tracker.createInstance<WritestatementContext>(_ctx, getState());
  enterRule(_localctx, 44, PascalIINoRelationParser::RuleWritestatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(312);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(298);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(299);
      match(PascalIINoRelationParser::CSTRING);
      setState(300);
      match(PascalIINoRelationParser::WRITE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(301);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(302);
      match(PascalIINoRelationParser::CHAR);
      setState(303);
      match(PascalIINoRelationParser::WRITE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(304);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(305);
      expression(0);
      setState(306);
      match(PascalIINoRelationParser::WRITE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(308);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(309);
      charliteral();
      setState(310);
      match(PascalIINoRelationParser::WRITE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReadstatementContext ------------------------------------------------------------------

PascalIINoRelationParser::ReadstatementContext::ReadstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PascalIINoRelationParser::ReadstatementContext::UNDERSCORE() {
  return getTokens(PascalIINoRelationParser::UNDERSCORE);
}

tree::TerminalNode* PascalIINoRelationParser::ReadstatementContext::UNDERSCORE(size_t i) {
  return getToken(PascalIINoRelationParser::UNDERSCORE, i);
}

tree::TerminalNode* PascalIINoRelationParser::ReadstatementContext::IDENTIFIER() {
  return getToken(PascalIINoRelationParser::IDENTIFIER, 0);
}

PascalIINoRelationParser::ExpressionContext* PascalIINoRelationParser::ReadstatementContext::expression() {
  return getRuleContext<PascalIINoRelationParser::ExpressionContext>(0);
}

tree::TerminalNode* PascalIINoRelationParser::ReadstatementContext::READ() {
  return getToken(PascalIINoRelationParser::READ, 0);
}

PascalIINoRelationParser::AddressofContext* PascalIINoRelationParser::ReadstatementContext::addressof() {
  return getRuleContext<PascalIINoRelationParser::AddressofContext>(0);
}


size_t PascalIINoRelationParser::ReadstatementContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleReadstatement;
}

void PascalIINoRelationParser::ReadstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReadstatement(this);
}

void PascalIINoRelationParser::ReadstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReadstatement(this);
}


std::any PascalIINoRelationParser::ReadstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitReadstatement(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::ReadstatementContext* PascalIINoRelationParser::readstatement() {
  ReadstatementContext *_localctx = _tracker.createInstance<ReadstatementContext>(_ctx, getState());
  enterRule(_localctx, 46, PascalIINoRelationParser::RuleReadstatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(326);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(314);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(315);
      match(PascalIINoRelationParser::IDENTIFIER);
      setState(316);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(317);
      expression(0);
      setState(318);
      match(PascalIINoRelationParser::READ);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(320);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(321);
      addressof();
      setState(322);
      match(PascalIINoRelationParser::UNDERSCORE);
      setState(323);
      expression(0);
      setState(324);
      match(PascalIINoRelationParser::READ);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

PascalIINoRelationParser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PascalIINoRelationParser::ClassdefinitionContext* PascalIINoRelationParser::DefinitionContext::classdefinition() {
  return getRuleContext<PascalIINoRelationParser::ClassdefinitionContext>(0);
}

PascalIINoRelationParser::ObjectdefinitionContext* PascalIINoRelationParser::DefinitionContext::objectdefinition() {
  return getRuleContext<PascalIINoRelationParser::ObjectdefinitionContext>(0);
}

PascalIINoRelationParser::VariabledefinitionContext* PascalIINoRelationParser::DefinitionContext::variabledefinition() {
  return getRuleContext<PascalIINoRelationParser::VariabledefinitionContext>(0);
}

PascalIINoRelationParser::FunctiondefinitionContext* PascalIINoRelationParser::DefinitionContext::functiondefinition() {
  return getRuleContext<PascalIINoRelationParser::FunctiondefinitionContext>(0);
}

PascalIINoRelationParser::PointerdefinitionContext* PascalIINoRelationParser::DefinitionContext::pointerdefinition() {
  return getRuleContext<PascalIINoRelationParser::PointerdefinitionContext>(0);
}


size_t PascalIINoRelationParser::DefinitionContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleDefinition;
}

void PascalIINoRelationParser::DefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinition(this);
}

void PascalIINoRelationParser::DefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinition(this);
}


std::any PascalIINoRelationParser::DefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitDefinition(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::DefinitionContext* PascalIINoRelationParser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 48, PascalIINoRelationParser::RuleDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(333);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(328);
      classdefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(329);
      objectdefinition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(330);
      variabledefinition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(331);
      functiondefinition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(332);
      pointerdefinition();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnstatementContext ------------------------------------------------------------------

PascalIINoRelationParser::ReturnstatementContext::ReturnstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PascalIINoRelationParser::ReturnstatementContext::RETURN() {
  return getToken(PascalIINoRelationParser::RETURN, 0);
}

PascalIINoRelationParser::ExpressionContext* PascalIINoRelationParser::ReturnstatementContext::expression() {
  return getRuleContext<PascalIINoRelationParser::ExpressionContext>(0);
}


size_t PascalIINoRelationParser::ReturnstatementContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleReturnstatement;
}

void PascalIINoRelationParser::ReturnstatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnstatement(this);
}

void PascalIINoRelationParser::ReturnstatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnstatement(this);
}


std::any PascalIINoRelationParser::ReturnstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitReturnstatement(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::ReturnstatementContext* PascalIINoRelationParser::returnstatement() {
  ReturnstatementContext *_localctx = _tracker.createInstance<ReturnstatementContext>(_ctx, getState());
  enterRule(_localctx, 50, PascalIINoRelationParser::RuleReturnstatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(338);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(335);
      match(PascalIINoRelationParser::RETURN);
      setState(336);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(337);
      match(PascalIINoRelationParser::RETURN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharliteralContext ------------------------------------------------------------------

PascalIINoRelationParser::CharliteralContext::CharliteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PascalIINoRelationParser::CharliteralContext::SINGLEQUOTE() {
  return getTokens(PascalIINoRelationParser::SINGLEQUOTE);
}

tree::TerminalNode* PascalIINoRelationParser::CharliteralContext::SINGLEQUOTE(size_t i) {
  return getToken(PascalIINoRelationParser::SINGLEQUOTE, i);
}

tree::TerminalNode* PascalIINoRelationParser::CharliteralContext::NEWLINE() {
  return getToken(PascalIINoRelationParser::NEWLINE, 0);
}

tree::TerminalNode* PascalIINoRelationParser::CharliteralContext::CHAR() {
  return getToken(PascalIINoRelationParser::CHAR, 0);
}


size_t PascalIINoRelationParser::CharliteralContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleCharliteral;
}

void PascalIINoRelationParser::CharliteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharliteral(this);
}

void PascalIINoRelationParser::CharliteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharliteral(this);
}


std::any PascalIINoRelationParser::CharliteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitCharliteral(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::CharliteralContext* PascalIINoRelationParser::charliteral() {
  CharliteralContext *_localctx = _tracker.createInstance<CharliteralContext>(_ctx, getState());
  enterRule(_localctx, 52, PascalIINoRelationParser::RuleCharliteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(344);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PascalIINoRelationParser::SINGLEQUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(340);
        match(PascalIINoRelationParser::SINGLEQUOTE);
        setState(341);
        match(PascalIINoRelationParser::NEWLINE);
        setState(342);
        match(PascalIINoRelationParser::SINGLEQUOTE);
        break;
      }

      case PascalIINoRelationParser::CHAR: {
        enterOuterAlt(_localctx, 2);
        setState(343);
        match(PascalIINoRelationParser::CHAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CstringContext ------------------------------------------------------------------

PascalIINoRelationParser::CstringContext::CstringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PascalIINoRelationParser::CstringContext::SINGLEQUOTE() {
  return getTokens(PascalIINoRelationParser::SINGLEQUOTE);
}

tree::TerminalNode* PascalIINoRelationParser::CstringContext::SINGLEQUOTE(size_t i) {
  return getToken(PascalIINoRelationParser::SINGLEQUOTE, i);
}


size_t PascalIINoRelationParser::CstringContext::getRuleIndex() const {
  return PascalIINoRelationParser::RuleCstring;
}

void PascalIINoRelationParser::CstringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCstring(this);
}

void PascalIINoRelationParser::CstringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PascalIINoRelationParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCstring(this);
}


std::any PascalIINoRelationParser::CstringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PascalIINoRelationParserVisitor*>(visitor))
    return parserVisitor->visitCstring(this);
  else
    return visitor->visitChildren(this);
}

PascalIINoRelationParser::CstringContext* PascalIINoRelationParser::cstring() {
  CstringContext *_localctx = _tracker.createInstance<CstringContext>(_ctx, getState());
  enterRule(_localctx, 54, PascalIINoRelationParser::RuleCstring);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(346);
    match(PascalIINoRelationParser::SINGLEQUOTE);

    setState(350);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(347);
        _la = _input->LA(1);
        if (_la == 0 || _la == Token::EOF || (_la == PascalIINoRelationParser::SINGLEQUOTE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(352);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
    setState(353);
    match(PascalIINoRelationParser::SINGLEQUOTE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool PascalIINoRelationParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PascalIINoRelationParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

void PascalIINoRelationParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pascaliinorelationparserParserInitialize();
#else
  ::antlr4::internal::call_once(pascaliinorelationparserParserOnceFlag, pascaliinorelationparserParserInitialize);
#endif
}
