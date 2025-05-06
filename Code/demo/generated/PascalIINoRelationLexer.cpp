
// Generated from PascalIINoRelationLexer.g4 by ANTLR 4.13.2


#include "PascalIINoRelationLexer.h"


using namespace antlr4;

using namespace antlrcpptest;


using namespace antlr4;

namespace {

struct PascalIINoRelationLexerStaticData final {
  PascalIINoRelationLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PascalIINoRelationLexerStaticData(const PascalIINoRelationLexerStaticData&) = delete;
  PascalIINoRelationLexerStaticData(PascalIINoRelationLexerStaticData&&) = delete;
  PascalIINoRelationLexerStaticData& operator=(const PascalIINoRelationLexerStaticData&) = delete;
  PascalIINoRelationLexerStaticData& operator=(PascalIINoRelationLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pascaliinorelationlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<PascalIINoRelationLexerStaticData> pascaliinorelationlexerLexerStaticData = nullptr;

void pascaliinorelationlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (pascaliinorelationlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(pascaliinorelationlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PascalIINoRelationLexerStaticData>(
    std::vector<std::string>{
      "UNDERSCORE", "PLUS", "MINUS", "DIVIDE", "STAR", "MODULO", "SIGNATURE", 
      "LESSTHAN", "GREATERTHAN", "EQUAL", "OR", "AMPERSAND", "NOT", "MULTICOMMENT", 
      "COMMENT", "REFERENCE", "FLOAT", "INTEGER", "BOOLEAN", "CHAR", "CSTRING", 
      "NEWLINE", "WHITESPACE", "LBRACKET", "RBRACKET", "LCURLY", "RCURLY", 
      "ACCESSOR", "ESCAPE", "COLON", "SINGLEQUOTE", "DOUBLEQUOTE", "COMMA", 
      "FOR", "WRITE", "READ", "IF", "RETURN", "CLASSID", "CHARACTERID", 
      "INTID", "VOIDTYPE", "FLOATID", "BOOLEANID", "IDENTIFIER"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,45,279,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,
  	1,5,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,
  	1,13,1,13,1,13,1,13,5,13,123,8,13,10,13,12,13,126,9,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,14,1,14,5,14,136,8,14,10,14,12,14,139,9,14,1,14,1,14,
  	1,14,1,14,1,15,1,15,1,16,4,16,148,8,16,11,16,12,16,149,1,16,1,16,4,16,
  	154,8,16,11,16,12,16,155,1,17,4,17,159,8,17,11,17,12,17,160,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,172,8,18,1,19,1,19,1,19,1,19,
  	1,20,1,20,5,20,180,8,20,10,20,12,20,183,9,20,1,20,1,20,1,21,1,21,1,21,
  	1,22,4,22,191,8,22,11,22,12,22,192,1,22,1,22,1,23,1,23,1,24,1,24,1,25,
  	1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,32,
  	1,32,1,33,1,33,1,33,1,33,1,34,1,34,1,34,1,34,1,34,1,34,1,35,1,35,1,35,
  	1,35,1,35,1,36,1,36,1,36,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,38,1,38,
  	1,38,1,38,1,38,1,38,1,39,1,39,1,39,1,39,1,39,1,40,1,40,1,40,1,40,1,41,
  	1,41,1,41,1,41,1,41,1,42,1,42,1,42,1,42,1,42,1,42,1,43,1,43,1,43,1,43,
  	1,43,1,44,1,44,5,44,275,8,44,10,44,12,44,278,9,44,2,124,137,0,45,1,1,
  	3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,
  	15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,
  	53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,
  	38,77,39,79,40,81,41,83,42,85,43,87,44,89,45,1,0,8,1,0,126,126,1,0,10,
  	10,1,0,48,57,1,0,46,46,1,0,39,39,2,0,65,90,97,122,3,0,9,10,13,13,32,32,
  	3,0,48,57,65,90,97,122,287,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,
  	0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,
  	0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,
  	1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,
  	0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,
  	0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,
  	1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,
  	0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,
  	0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,0,0,1,91,1,0,0,0,3,93,
  	1,0,0,0,5,95,1,0,0,0,7,97,1,0,0,0,9,99,1,0,0,0,11,101,1,0,0,0,13,103,
  	1,0,0,0,15,106,1,0,0,0,17,108,1,0,0,0,19,110,1,0,0,0,21,112,1,0,0,0,23,
  	114,1,0,0,0,25,116,1,0,0,0,27,118,1,0,0,0,29,133,1,0,0,0,31,144,1,0,0,
  	0,33,147,1,0,0,0,35,158,1,0,0,0,37,171,1,0,0,0,39,173,1,0,0,0,41,177,
  	1,0,0,0,43,186,1,0,0,0,45,190,1,0,0,0,47,196,1,0,0,0,49,198,1,0,0,0,51,
  	200,1,0,0,0,53,202,1,0,0,0,55,204,1,0,0,0,57,206,1,0,0,0,59,208,1,0,0,
  	0,61,210,1,0,0,0,63,212,1,0,0,0,65,214,1,0,0,0,67,216,1,0,0,0,69,220,
  	1,0,0,0,71,226,1,0,0,0,73,231,1,0,0,0,75,234,1,0,0,0,77,241,1,0,0,0,79,
  	247,1,0,0,0,81,252,1,0,0,0,83,256,1,0,0,0,85,261,1,0,0,0,87,267,1,0,0,
  	0,89,272,1,0,0,0,91,92,5,95,0,0,92,2,1,0,0,0,93,94,5,43,0,0,94,4,1,0,
  	0,0,95,96,5,45,0,0,96,6,1,0,0,0,97,98,5,47,0,0,98,8,1,0,0,0,99,100,5,
  	42,0,0,100,10,1,0,0,0,101,102,5,37,0,0,102,12,1,0,0,0,103,104,5,60,0,
  	0,104,105,5,45,0,0,105,14,1,0,0,0,106,107,5,60,0,0,107,16,1,0,0,0,108,
  	109,5,62,0,0,109,18,1,0,0,0,110,111,5,61,0,0,111,20,1,0,0,0,112,113,5,
  	124,0,0,113,22,1,0,0,0,114,115,5,38,0,0,115,24,1,0,0,0,116,117,5,33,0,
  	0,117,26,1,0,0,0,118,119,7,0,0,0,119,120,7,0,0,0,120,124,7,0,0,0,121,
  	123,9,0,0,0,122,121,1,0,0,0,123,126,1,0,0,0,124,125,1,0,0,0,124,122,1,
  	0,0,0,125,127,1,0,0,0,126,124,1,0,0,0,127,128,7,0,0,0,128,129,7,0,0,0,
  	129,130,7,0,0,0,130,131,1,0,0,0,131,132,6,13,0,0,132,28,1,0,0,0,133,137,
  	7,0,0,0,134,136,9,0,0,0,135,134,1,0,0,0,136,139,1,0,0,0,137,138,1,0,0,
  	0,137,135,1,0,0,0,138,140,1,0,0,0,139,137,1,0,0,0,140,141,7,1,0,0,141,
  	142,1,0,0,0,142,143,6,14,0,0,143,30,1,0,0,0,144,145,5,36,0,0,145,32,1,
  	0,0,0,146,148,7,2,0,0,147,146,1,0,0,0,148,149,1,0,0,0,149,147,1,0,0,0,
  	149,150,1,0,0,0,150,151,1,0,0,0,151,153,7,3,0,0,152,154,7,2,0,0,153,152,
  	1,0,0,0,154,155,1,0,0,0,155,153,1,0,0,0,155,156,1,0,0,0,156,34,1,0,0,
  	0,157,159,7,2,0,0,158,157,1,0,0,0,159,160,1,0,0,0,160,158,1,0,0,0,160,
  	161,1,0,0,0,161,36,1,0,0,0,162,163,5,116,0,0,163,164,5,114,0,0,164,165,
  	5,117,0,0,165,172,5,101,0,0,166,167,5,102,0,0,167,168,5,97,0,0,168,169,
  	5,108,0,0,169,170,5,115,0,0,170,172,5,101,0,0,171,162,1,0,0,0,171,166,
  	1,0,0,0,172,38,1,0,0,0,173,174,7,4,0,0,174,175,7,5,0,0,175,176,7,4,0,
  	0,176,40,1,0,0,0,177,181,7,4,0,0,178,180,7,3,0,0,179,178,1,0,0,0,180,
  	183,1,0,0,0,181,179,1,0,0,0,181,182,1,0,0,0,182,184,1,0,0,0,183,181,1,
  	0,0,0,184,185,7,4,0,0,185,42,1,0,0,0,186,187,5,92,0,0,187,188,5,110,0,
  	0,188,44,1,0,0,0,189,191,7,6,0,0,190,189,1,0,0,0,191,192,1,0,0,0,192,
  	190,1,0,0,0,192,193,1,0,0,0,193,194,1,0,0,0,194,195,6,22,0,0,195,46,1,
  	0,0,0,196,197,5,91,0,0,197,48,1,0,0,0,198,199,5,93,0,0,199,50,1,0,0,0,
  	200,201,5,123,0,0,201,52,1,0,0,0,202,203,5,125,0,0,203,54,1,0,0,0,204,
  	205,5,46,0,0,205,56,1,0,0,0,206,207,5,92,0,0,207,58,1,0,0,0,208,209,5,
  	58,0,0,209,60,1,0,0,0,210,211,5,39,0,0,211,62,1,0,0,0,212,213,5,34,0,
  	0,213,64,1,0,0,0,214,215,5,44,0,0,215,66,1,0,0,0,216,217,5,102,0,0,217,
  	218,5,111,0,0,218,219,5,114,0,0,219,68,1,0,0,0,220,221,5,119,0,0,221,
  	222,5,114,0,0,222,223,5,105,0,0,223,224,5,116,0,0,224,225,5,101,0,0,225,
  	70,1,0,0,0,226,227,5,114,0,0,227,228,5,101,0,0,228,229,5,97,0,0,229,230,
  	5,100,0,0,230,72,1,0,0,0,231,232,5,105,0,0,232,233,5,102,0,0,233,74,1,
  	0,0,0,234,235,5,114,0,0,235,236,5,101,0,0,236,237,5,116,0,0,237,238,5,
  	117,0,0,238,239,5,114,0,0,239,240,5,110,0,0,240,76,1,0,0,0,241,242,5,
  	99,0,0,242,243,5,108,0,0,243,244,5,97,0,0,244,245,5,115,0,0,245,246,5,
  	115,0,0,246,78,1,0,0,0,247,248,5,99,0,0,248,249,5,104,0,0,249,250,5,97,
  	0,0,250,251,5,114,0,0,251,80,1,0,0,0,252,253,5,105,0,0,253,254,5,110,
  	0,0,254,255,5,116,0,0,255,82,1,0,0,0,256,257,5,118,0,0,257,258,5,111,
  	0,0,258,259,5,105,0,0,259,260,5,100,0,0,260,84,1,0,0,0,261,262,5,102,
  	0,0,262,263,5,108,0,0,263,264,5,111,0,0,264,265,5,97,0,0,265,266,5,116,
  	0,0,266,86,1,0,0,0,267,268,5,98,0,0,268,269,5,111,0,0,269,270,5,111,0,
  	0,270,271,5,108,0,0,271,88,1,0,0,0,272,276,7,5,0,0,273,275,7,7,0,0,274,
  	273,1,0,0,0,275,278,1,0,0,0,276,274,1,0,0,0,276,277,1,0,0,0,277,90,1,
  	0,0,0,278,276,1,0,0,0,10,0,124,137,149,155,160,171,181,192,276,1,6,0,
  	0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pascaliinorelationlexerLexerStaticData = std::move(staticData);
}

}

PascalIINoRelationLexer::PascalIINoRelationLexer(CharStream *input) : Lexer(input) {
  PascalIINoRelationLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *pascaliinorelationlexerLexerStaticData->atn, pascaliinorelationlexerLexerStaticData->decisionToDFA, pascaliinorelationlexerLexerStaticData->sharedContextCache);
}

PascalIINoRelationLexer::~PascalIINoRelationLexer() {
  delete _interpreter;
}

std::string PascalIINoRelationLexer::getGrammarFileName() const {
  return "PascalIINoRelationLexer.g4";
}

const std::vector<std::string>& PascalIINoRelationLexer::getRuleNames() const {
  return pascaliinorelationlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& PascalIINoRelationLexer::getChannelNames() const {
  return pascaliinorelationlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& PascalIINoRelationLexer::getModeNames() const {
  return pascaliinorelationlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& PascalIINoRelationLexer::getVocabulary() const {
  return pascaliinorelationlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PascalIINoRelationLexer::getSerializedATN() const {
  return pascaliinorelationlexerLexerStaticData->serializedATN;
}

const atn::ATN& PascalIINoRelationLexer::getATN() const {
  return *pascaliinorelationlexerLexerStaticData->atn;
}




void PascalIINoRelationLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  pascaliinorelationlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(pascaliinorelationlexerLexerOnceFlag, pascaliinorelationlexerLexerInitialize);
#endif
}
