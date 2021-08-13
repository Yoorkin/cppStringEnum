//
// Created by yorkin on 8/13/21.
//

#ifndef EVOVM_STRINGENUM_H
#define EVOVM_STRINGENUM_H
#include<vector>
#include<string>
#include<map>
#include<exception>

#define SE_ARGS1(E,A,...) E(A)
#define SE_ARGS2(E,A,...) E(A),SE_ARGS1(E,__VA_ARGS__)
#define SE_ARGS3(E,A,...) E(A),SE_ARGS2(E,__VA_ARGS__)
#define SE_ARGS4(E,A,...) E(A),SE_ARGS3(E,__VA_ARGS__)
#define SE_ARGS5(E,A,...) E(A),SE_ARGS4(E,__VA_ARGS__)
#define SE_ARGS6(E,A,...) E(A),SE_ARGS5(E,__VA_ARGS__)
#define SE_ARGS7(E,A,...) E(A),SE_ARGS6(E,__VA_ARGS__)
#define SE_ARGS8(E,A,...) E(A),SE_ARGS7(E,__VA_ARGS__)
#define SE_ARGS9(E,A,...) E(A),SE_ARGS8(E,__VA_ARGS__)
#define SE_ARGS10(E,A,...) E(A),SE_ARGS9(E,__VA_ARGS__)
#define SE_ARGS11(E,A,...) E(A),SE_ARGS10(E,__VA_ARGS__)
#define SE_ARGS12(E,A,...) E(A),SE_ARGS11(E,__VA_ARGS__)
#define SE_ARGS13(E,A,...) E(A),SE_ARGS12(E,__VA_ARGS__)
#define SE_ARGS14(E,A,...) E(A),SE_ARGS13(E,__VA_ARGS__)
#define SE_ARGS15(E,A,...) E(A),SE_ARGS14(E,__VA_ARGS__)
#define SE_ARGS16(E,A,...) E(A),SE_ARGS15(E,__VA_ARGS__)
#define SE_ARGS17(E,A,...) E(A),SE_ARGS16(E,__VA_ARGS__)
#define SE_ARGS18(E,A,...) E(A),SE_ARGS17(E,__VA_ARGS__)
#define SE_ARGS19(E,A,...) E(A),SE_ARGS18(E,__VA_ARGS__)
#define SE_ARGS20(E,A,...) E(A),SE_ARGS19(E,__VA_ARGS__)
#define SE_ARGS21(E,A,...) E(A),SE_ARGS20(E,__VA_ARGS__)
#define SE_ARGS22(E,A,...) E(A),SE_ARGS21(E,__VA_ARGS__)
#define SE_ARGS23(E,A,...) E(A),SE_ARGS22(E,__VA_ARGS__)
#define SE_ARGS24(E,A,...) E(A),SE_ARGS23(E,__VA_ARGS__)
#define SE_ARGS25(E,A,...) E(A),SE_ARGS24(E,__VA_ARGS__)
#define SE_ARGS26(E,A,...) E(A),SE_ARGS25(E,__VA_ARGS__)
#define SE_ARGS27(E,A,...) E(A),SE_ARGS26(E,__VA_ARGS__)
#define SE_ARGS28(E,A,...) E(A),SE_ARGS27(E,__VA_ARGS__)
#define SE_ARGS29(E,A,...) E(A),SE_ARGS28(E,__VA_ARGS__)
#define SE_ARGS30(E,A,...) E(A),SE_ARGS29(E,__VA_ARGS__)
#define SE_ARGS31(E,A,...) E(A),SE_ARGS30(E,__VA_ARGS__)
#define SE_ARGS32(E,A,...) E(A),SE_ARGS31(E,__VA_ARGS__)
#define SE_ARGS33(E,A,...) E(A),SE_ARGS32(E,__VA_ARGS__)
#define SE_ARGS34(E,A,...) E(A),SE_ARGS33(E,__VA_ARGS__)
#define SE_ARGS35(E,A,...) E(A),SE_ARGS34(E,__VA_ARGS__)
#define SE_ARGS36(E,A,...) E(A),SE_ARGS35(E,__VA_ARGS__)
#define SE_ARGS37(E,A,...) E(A),SE_ARGS36(E,__VA_ARGS__)
#define SE_ARGS38(E,A,...) E(A),SE_ARGS37(E,__VA_ARGS__)
#define SE_ARGS39(E,A,...) E(A),SE_ARGS38(E,__VA_ARGS__)
#define SE_ARGS40(E,A,...) E(A),SE_ARGS39(E,__VA_ARGS__)
#define SE_ARGS41(E,A,...) E(A),SE_ARGS40(E,__VA_ARGS__)
#define SE_ARGS42(E,A,...) E(A),SE_ARGS41(E,__VA_ARGS__)
#define SE_ARGS43(E,A,...) E(A),SE_ARGS42(E,__VA_ARGS__)
#define SE_ARGS44(E,A,...) E(A),SE_ARGS43(E,__VA_ARGS__)
#define SE_ARGS45(E,A,...) E(A),SE_ARGS44(E,__VA_ARGS__)
#define SE_ARGS46(E,A,...) E(A),SE_ARGS45(E,__VA_ARGS__)
#define SE_ARGS47(E,A,...) E(A),SE_ARGS46(E,__VA_ARGS__)
#define SE_ARGS48(E,A,...) E(A),SE_ARGS47(E,__VA_ARGS__)
#define SE_ARGS49(E,A,...) E(A),SE_ARGS48(E,__VA_ARGS__)
#define SE_ARGS50(E,A,...) E(A),SE_ARGS49(E,__VA_ARGS__)
#define SE_ARGS51(E,A,...) E(A),SE_ARGS50(E,__VA_ARGS__)
#define SE_ARGS52(E,A,...) E(A),SE_ARGS51(E,__VA_ARGS__)
#define SE_ARGS53(E,A,...) E(A),SE_ARGS52(E,__VA_ARGS__)
#define SE_ARGS54(E,A,...) E(A),SE_ARGS53(E,__VA_ARGS__)
#define SE_ARGS55(E,A,...) E(A),SE_ARGS54(E,__VA_ARGS__)
#define SE_ARGS56(E,A,...) E(A),SE_ARGS55(E,__VA_ARGS__)
#define SE_ARGS57(E,A,...) E(A),SE_ARGS56(E,__VA_ARGS__)
#define SE_ARGS58(E,A,...) E(A),SE_ARGS57(E,__VA_ARGS__)
#define SE_ARGS59(E,A,...) E(A),SE_ARGS58(E,__VA_ARGS__)
#define SE_ARGS60(E,A,...) E(A),SE_ARGS59(E,__VA_ARGS__)
#define SE_ARGS61(E,A,...) E(A),SE_ARGS60(E,__VA_ARGS__)
#define SE_ARGS62(E,A,...) E(A),SE_ARGS61(E,__VA_ARGS__)
#define SE_ARGS63(E,A,...) E(A),SE_ARGS62(E,__VA_ARGS__)
#define SE_ARGS64(E,A,...) E(A),SE_ARGS63(E,__VA_ARGS__)

#define SE_CONCAT_(l, r) l##r
#define SE_CONCAT(l, r) SE_CONCAT_(l, r)

#define SE_ARG_COUNT(...) SE_INTERAL_ARG_COUNT(0, ##__VA_ARGS__,\
	64, 63, 62, 61, 60, \
	59, 58, 57, 56, 55, 54, 53, 52, 51, 50, \
	49, 48, 47, 46, 45, 44, 43, 42, 41, 40, \
	39, 38, 37, 36, 35, 34, 33, 32, 31, 30, \
	29, 28, 27, 26, 25, 24, 23, 22, 21, 20, \
	19, 18, 17, 16, 15, 14, 13, 12, 11, 10, \
	 9,  8,  7,  6,  5,  4,  3,  2,  1,  0)

#define SE_INTERAL_ARG_COUNT(\
	 _0,  _1,  _2,  _3,  _4,  _5,  _6,  _7,  _8,  _9, \
	_10, _11, _12, _13, _14, _15, _16, _17, _18, _19, \
	_20, _21, _22, _23, _24, _25, _26, _27, _28, _29, \
	_30, _31, _32, _33, _34, _35, _36, _37, _38, _39, \
	_40, _41, _42, _43, _44, _45, _46, _47, _48, _49, \
	_50, _51, _52, _53, _54, _55, _56, _57, _58, _59, \
	_60, _61, _62, _63, _64, N, ...) N

#define SE_FOREACH(MACRO,...) SE_CONCAT(SE_ARGS,SE_ARG_COUNT(__VA_ARGS__))(MACRO,__VA_ARGS__)

#define SE_ENUM_EXPAND(x) x
#define SE_STRING_EXPAND(x) #x
#define SE_PAIR_EXPAND(x) {SE_STRING_EXPAND(x),SE_ENUM_EXPAND(x)}

#define STRING_ENUM_DECLARE(Name,...)\
        class Name{\
        public:\
            enum Enum{SE_FOREACH(SE_ENUM_EXPAND,__VA_ARGS__)};\
        private:\
            static std::vector<std::string> enumToString;\
        public:\
            static std::map<std::string,Enum> stringEnumMap;\
            static const std::string &getString(Enum e){return enumToString[(int)e];}\
            static const Enum getEnum(const std::string &str){\
                auto target = stringEnumMap.find(str);\
                if(target==stringEnumMap.end()){\
                    std::string err = "can not find ";\
                    throw std::invalid_argument(err+str);\
                }\
                return target->second;}\
        };

#define STIRNG_ENUM_DEFINE(Name,...)\
        std::vector<std::string> Name ::enumToString={SE_FOREACH(SE_STRING_EXPAND,__VA_ARGS__)};\
        std::map<std::string,Name ::Enum> Name ::stringEnumMap={SE_FOREACH(SE_PAIR_EXPAND,__VA_ARGS__)};


#define STRING_ENUM(Name,...) STRING_ENUM_DECLARE(Name,__VA_ARGS__) \
                                STIRNG_ENUM_DEFINE(Name,__VA_ARGS__)


#endif //EVOVM_STRINGENUM_H
