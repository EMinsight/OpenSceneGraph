// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Stats>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::map< std::string COMMA  double >, osg::Stats::AttributeMap);

TYPE_NAME_ALIAS(std::vector< osg::Stats::AttributeMap >, osg::Stats::AttributeMapList);

TYPE_NAME_ALIAS(std::map< std::string COMMA  bool >, osg::Stats::CollectMap);

BEGIN_OBJECT_REFLECTOR(osg::Stats)
	I_BaseType(osg::Referenced);
	I_Constructor1(IN, const std::string &, name,
	               Properties::NON_EXPLICIT,
	               ____Stats__C5_std_string_R1,
	               "",
	               "");
	I_Constructor2(IN, const std::string &, name, IN, unsigned int, numberOfFrames,
	               ____Stats__C5_std_string_R1__unsigned_int,
	               "",
	               "");
	I_Method1(void, setName, IN, const std::string &, name,
	          Properties::NON_VIRTUAL,
	          __void__setName__C5_std_string_R1,
	          "",
	          "");
	I_Method0(const std::string &, getName,
	          Properties::NON_VIRTUAL,
	          __C5_std_string_R1__getName,
	          "",
	          "");
	I_Method1(void, allocate, IN, unsigned int, numberOfFrames,
	          Properties::NON_VIRTUAL,
	          __void__allocate__unsigned_int,
	          "",
	          "");
	I_Method0(int, getEarliestFrameNumber,
	          Properties::NON_VIRTUAL,
	          __int__getEarliestFrameNumber,
	          "",
	          "");
	I_Method0(int, getLatestFrameNumber,
	          Properties::NON_VIRTUAL,
	          __int__getLatestFrameNumber,
	          "",
	          "");
	I_Method3(bool, setAttribute, IN, int, frameNumber, IN, const std::string &, attributeName, IN, double, value,
	          Properties::NON_VIRTUAL,
	          __bool__setAttribute__int__C5_std_string_R1__double,
	          "",
	          "");
	I_Method3(bool, getAttribute, IN, int, frameNumber, IN, const std::string &, attributeName, IN, double &, value,
	          Properties::NON_VIRTUAL,
	          __bool__getAttribute__int__C5_std_string_R1__double_R1,
	          "",
	          "");
	I_MethodWithDefaults3(bool, getAveragedAttribute, IN, const std::string &, attributeName, , IN, double &, value, , IN, bool, averageInInverseSpace, false,
	                      Properties::NON_VIRTUAL,
	                      __bool__getAveragedAttribute__C5_std_string_R1__double_R1__bool,
	                      "",
	                      "");
	I_MethodWithDefaults5(bool, getAveragedAttribute, IN, int, startFrameNumber, , IN, int, endFrameNumber, , IN, const std::string &, attributeName, , IN, double &, value, , IN, bool, averageInInverseSpace, false,
	                      Properties::NON_VIRTUAL,
	                      __bool__getAveragedAttribute__int__int__C5_std_string_R1__double_R1__bool,
	                      "",
	                      "");
	I_Method1(osg::Stats::AttributeMap &, getAttributeMap, IN, int, frameNumber,
	          Properties::NON_VIRTUAL,
	          __AttributeMap_R1__getAttributeMap__int,
	          "",
	          "");
	I_Method1(const osg::Stats::AttributeMap &, getAttributeMap, IN, int, frameNumber,
	          Properties::NON_VIRTUAL,
	          __C5_AttributeMap_R1__getAttributeMap__int,
	          "",
	          "");
	I_Method2(void, collectStats, IN, const std::string &, str, IN, bool, flag,
	          Properties::NON_VIRTUAL,
	          __void__collectStats__C5_std_string_R1__bool,
	          "",
	          "");
	I_Method1(bool, collectStats, IN, const std::string &, str,
	          Properties::NON_VIRTUAL,
	          __bool__collectStats__C5_std_string_R1,
	          "",
	          "");
	I_MethodWithDefaults2(void, report, IN, std::ostream &, out, , IN, const char *, indent, 0,
	                      Properties::NON_VIRTUAL,
	                      __void__report__std_ostream_R1__C5_char_P1,
	                      "",
	                      "");
	I_MethodWithDefaults3(void, report, IN, std::ostream &, out, , IN, unsigned int, frameNumber, , IN, const char *, indent, 0,
	                      Properties::NON_VIRTUAL,
	                      __void__report__std_ostream_R1__unsigned_int__C5_char_P1,
	                      "",
	                      "");
	I_ProtectedMethod3(bool, getAttributeNoMutex, IN, int, frameNumber, IN, const std::string &, attributeName, IN, double &, value,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __bool__getAttributeNoMutex__int__C5_std_string_R1__double_R1,
	                   "",
	                   "");
	I_ProtectedMethod1(osg::Stats::AttributeMap &, getAttributeMapNoMutex, IN, int, frameNumber,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __AttributeMap_R1__getAttributeMapNoMutex__int,
	                   "",
	                   "");
	I_ProtectedMethod1(const osg::Stats::AttributeMap &, getAttributeMapNoMutex, IN, int, frameNumber,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __C5_AttributeMap_R1__getAttributeMapNoMutex__int,
	                   "",
	                   "");
	I_ProtectedMethod1(int, getIndex, IN, int, frameNumber,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __int__getIndex__int,
	                   "",
	                   "");
	I_SimpleProperty(int, EarliestFrameNumber, 
	                 __int__getEarliestFrameNumber, 
	                 0);
	I_SimpleProperty(int, LatestFrameNumber, 
	                 __int__getLatestFrameNumber, 
	                 0);
	I_SimpleProperty(const std::string &, Name, 
	                 __C5_std_string_R1__getName, 
	                 __void__setName__C5_std_string_R1);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< std::string COMMA  bool >);

STD_MAP_REFLECTOR(std::map< std::string COMMA  double >);

STD_VECTOR_REFLECTOR(std::vector< osg::Stats::AttributeMap >);

