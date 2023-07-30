# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.8)
   message(FATAL_ERROR "CMake >= 2.8.0 required")
endif()
if(CMAKE_VERSION VERSION_LESS "2.8.3")
   message(FATAL_ERROR "CMake >= 2.8.3 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.8.3...3.25)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_cmake_targets_defined "")
set(_cmake_targets_not_defined "")
set(_cmake_expected_targets "")
foreach(_cmake_expected_target IN ITEMS clang-tblgen clangBasic clangAPINotes clangLex clangParse clangAST clangDynamicASTMatchers clangASTMatchers clangCrossTU clangSema clangCodeGen clangAnalysis clangAnalysisFlowSensitive clangAnalysisFlowSensitiveModels clangEdit clangExtractAPI clangRewrite clangARCMigrate clangDriver clangSerialization clangRewriteFrontend clangFrontend clangFrontendTool clangToolingCore clangToolingInclusions clangToolingInclusionsStdlib clangToolingRefactoring clangToolingASTDiff clangToolingSyntax clangDependencyScanning clangTransformer clangTooling clangDirectoryWatcher clangIndex clangIndexSerialization clangStaticAnalyzerCore clangStaticAnalyzerCheckers clangStaticAnalyzerFrontend clangFormat clangInterpreter clangSupport diagtool clang clang-format clangHandleCXX clangHandleLLVM clang-linker-wrapper clang-offload-packager clang-offload-bundler clang-scan-deps clang-repl clang-rename clang-refactor clang-cpp clang-check clang-extdef-mapping clangApplyReplacements clang-apply-replacements clangReorderFields clang-reorder-fields modularize clangTidy clangTidyAndroidModule clangTidyAbseilModule clangTidyAlteraModule clangTidyBoostModule clangTidyBugproneModule clangTidyCERTModule clangTidyConcurrencyModule clangTidyCppCoreGuidelinesModule clangTidyDarwinModule clangTidyFuchsiaModule clangTidyGoogleModule clangTidyHICPPModule clangTidyLinuxKernelModule clangTidyLLVMModule clangTidyLLVMLibcModule clangTidyMiscModule clangTidyModernizeModule clangTidyMPIModule clangTidyObjCModule clangTidyOpenMPModule clangTidyPerformanceModule clangTidyPortabilityModule clangTidyReadabilityModule clangTidyZirconModule clangTidyPlugin clangTidyMain clang-tidy clangTidyUtils clangChangeNamespace clang-change-namespace clangDoc clang-doc clangIncludeFixer clangIncludeFixerPlugin clang-include-fixer findAllSymbols find-all-symbols clangMove clang-move clangQuery clang-query clangIncludeCleaner clang-include-cleaner pp-trace clangPseudoCLI clangPseudoCXX clangPseudoGrammar clangPseudo clang-pseudo clangdSupport clangDaemon clangDaemonTweaks clangd clangdRemoteIndex libclang libclang_static amdgpu-arch nvptx-arch)
  list(APPEND _cmake_expected_targets "${_cmake_expected_target}")
  if(TARGET "${_cmake_expected_target}")
    list(APPEND _cmake_targets_defined "${_cmake_expected_target}")
  else()
    list(APPEND _cmake_targets_not_defined "${_cmake_expected_target}")
  endif()
endforeach()
unset(_cmake_expected_target)
if(_cmake_targets_defined STREQUAL _cmake_expected_targets)
  unset(_cmake_targets_defined)
  unset(_cmake_targets_not_defined)
  unset(_cmake_expected_targets)
  unset(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT _cmake_targets_defined STREQUAL "")
  string(REPLACE ";" ", " _cmake_targets_defined_text "${_cmake_targets_defined}")
  string(REPLACE ";" ", " _cmake_targets_not_defined_text "${_cmake_targets_not_defined}")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_cmake_targets_defined_text}\nTargets not yet defined: ${_cmake_targets_not_defined_text}\n")
endif()
unset(_cmake_targets_defined)
unset(_cmake_targets_not_defined)
unset(_cmake_expected_targets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target clang-tblgen
add_executable(clang-tblgen IMPORTED)

# Create imported target clangBasic
add_library(clangBasic STATIC IMPORTED)

set_target_properties(clangBasic PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM"
)

# Create imported target clangAPINotes
add_library(clangAPINotes STATIC IMPORTED)

set_target_properties(clangAPINotes PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;LLVM"
)

# Create imported target clangLex
add_library(clangLex STATIC IMPORTED)

set_target_properties(clangLex PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;LLVM"
)

# Create imported target clangParse
add_library(clangParse STATIC IMPORTED)

set_target_properties(clangParse PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangLex;clangSema;LLVM"
)

# Create imported target clangAST
add_library(clangAST STATIC IMPORTED)

set_target_properties(clangAST PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;clangLex;LLVM"
)

# Create imported target clangDynamicASTMatchers
add_library(clangDynamicASTMatchers STATIC IMPORTED)

set_target_properties(clangDynamicASTMatchers PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangASTMatchers;clangBasic;LLVM"
)

# Create imported target clangASTMatchers
add_library(clangASTMatchers STATIC IMPORTED)

set_target_properties(clangASTMatchers PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangLex;LLVM"
)

# Create imported target clangCrossTU
add_library(clangCrossTU STATIC IMPORTED)

set_target_properties(clangCrossTU PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangFrontend;clangIndex;LLVM"
)

# Create imported target clangSema
add_library(clangSema STATIC IMPORTED)

set_target_properties(clangSema PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangAnalysis;clangBasic;clangEdit;clangLex;clangSupport;LLVM"
)

# Create imported target clangCodeGen
add_library(clangCodeGen STATIC IMPORTED)

set_target_properties(clangCodeGen PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAnalysis;clangAST;clangBasic;clangFrontend;clangLex;clangSerialization;LLVM"
)

# Create imported target clangAnalysis
add_library(clangAnalysis STATIC IMPORTED)

set_target_properties(clangAnalysis PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangASTMatchers;clangBasic;clangLex;LLVM"
)

# Create imported target clangAnalysisFlowSensitive
add_library(clangAnalysisFlowSensitive STATIC IMPORTED)

set_target_properties(clangAnalysisFlowSensitive PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAnalysis;clangAST;clangBasic;LLVM"
)

# Create imported target clangAnalysisFlowSensitiveModels
add_library(clangAnalysisFlowSensitiveModels STATIC IMPORTED)

set_target_properties(clangAnalysisFlowSensitiveModels PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAnalysis;clangAnalysisFlowSensitive;clangAST;clangASTMatchers;clangBasic;LLVM"
)

# Create imported target clangEdit
add_library(clangEdit STATIC IMPORTED)

set_target_properties(clangEdit PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangLex;LLVM"
)

# Create imported target clangExtractAPI
add_library(clangExtractAPI STATIC IMPORTED)

set_target_properties(clangExtractAPI PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangFrontend;clangIndex;clangLex;LLVM"
)

# Create imported target clangRewrite
add_library(clangRewrite STATIC IMPORTED)

set_target_properties(clangRewrite PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;clangLex;LLVM"
)

# Create imported target clangARCMigrate
add_library(clangARCMigrate STATIC IMPORTED)

set_target_properties(clangARCMigrate PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangAnalysis;clangBasic;clangEdit;clangFrontend;clangLex;clangRewrite;clangSema;clangSerialization;LLVM"
)

# Create imported target clangDriver
add_library(clangDriver STATIC IMPORTED)

set_target_properties(clangDriver PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;version;LLVM"
)

# Create imported target clangSerialization
add_library(clangSerialization STATIC IMPORTED)

set_target_properties(clangSerialization PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangLex;clangSema;LLVM"
)

# Create imported target clangRewriteFrontend
add_library(clangRewriteFrontend STATIC IMPORTED)

set_target_properties(clangRewriteFrontend PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangEdit;clangFrontend;clangLex;clangRewrite;clangSerialization;LLVM"
)

# Create imported target clangFrontend
add_library(clangFrontend STATIC IMPORTED)

set_target_properties(clangFrontend PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangDriver;clangEdit;clangLex;clangParse;clangSema;clangSerialization;LLVM"
)

# Create imported target clangFrontendTool
add_library(clangFrontendTool STATIC IMPORTED)

set_target_properties(clangFrontendTool PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;clangCodeGen;clangDriver;clangExtractAPI;clangFrontend;clangRewriteFrontend;clangARCMigrate;clangStaticAnalyzerFrontend;LLVM"
)

# Create imported target clangToolingCore
add_library(clangToolingCore STATIC IMPORTED)

set_target_properties(clangToolingCore PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;clangLex;clangRewrite;LLVM"
)

# Create imported target clangToolingInclusions
add_library(clangToolingInclusions STATIC IMPORTED)

set_target_properties(clangToolingInclusions PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;clangLex;clangRewrite;clangToolingCore;LLVM"
)

# Create imported target clangToolingInclusionsStdlib
add_library(clangToolingInclusionsStdlib STATIC IMPORTED)

set_target_properties(clangToolingInclusionsStdlib PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;LLVM"
)

# Create imported target clangToolingRefactoring
add_library(clangToolingRefactoring STATIC IMPORTED)

set_target_properties(clangToolingRefactoring PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangASTMatchers;clangBasic;clangFormat;clangIndex;clangLex;clangRewrite;clangToolingCore;LLVM"
)

# Create imported target clangToolingASTDiff
add_library(clangToolingASTDiff STATIC IMPORTED)

set_target_properties(clangToolingASTDiff PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;clangAST;clangLex;LLVM"
)

# Create imported target clangToolingSyntax
add_library(clangToolingSyntax STATIC IMPORTED)

set_target_properties(clangToolingSyntax PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangFrontend;clangLex;clangToolingCore;LLVM"
)

# Create imported target clangDependencyScanning
add_library(clangDependencyScanning STATIC IMPORTED)

set_target_properties(clangDependencyScanning PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangCodeGen;clangDriver;clangFrontend;clangFrontendTool;clangLex;clangParse;clangSerialization;clangTooling;LLVM"
)

# Create imported target clangTransformer
add_library(clangTransformer STATIC IMPORTED)

set_target_properties(clangTransformer PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangASTMatchers;clangBasic;clangLex;clangToolingCore;clangToolingRefactoring;LLVM"
)

# Create imported target clangTooling
add_library(clangTooling STATIC IMPORTED)

set_target_properties(clangTooling PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangASTMatchers;clangBasic;clangDriver;clangFormat;clangFrontend;clangLex;clangRewrite;clangSerialization;clangToolingCore;LLVM"
)

# Create imported target clangDirectoryWatcher
add_library(clangDirectoryWatcher STATIC IMPORTED)

set_target_properties(clangDirectoryWatcher PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM"
)

# Create imported target clangIndex
add_library(clangIndex STATIC IMPORTED)

set_target_properties(clangIndex PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangFormat;clangFrontend;clangLex;clangRewrite;clangSerialization;clangToolingCore;LLVM"
)

# Create imported target clangIndexSerialization
add_library(clangIndexSerialization STATIC IMPORTED)

set_target_properties(clangIndexSerialization PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;LLVM"
)

# Create imported target clangStaticAnalyzerCore
add_library(clangStaticAnalyzerCore STATIC IMPORTED)

set_target_properties(clangStaticAnalyzerCore PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangASTMatchers;clangAnalysis;clangBasic;clangCrossTU;clangFrontend;clangLex;clangRewrite;clangToolingCore;LLVM"
)

# Create imported target clangStaticAnalyzerCheckers
add_library(clangStaticAnalyzerCheckers STATIC IMPORTED)

set_target_properties(clangStaticAnalyzerCheckers PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangASTMatchers;clangAnalysis;clangBasic;clangLex;clangStaticAnalyzerCore;LLVM"
)

# Create imported target clangStaticAnalyzerFrontend
add_library(clangStaticAnalyzerFrontend STATIC IMPORTED)

set_target_properties(clangStaticAnalyzerFrontend PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangASTMatchers;clangAnalysis;clangBasic;clangCrossTU;clangFrontend;clangLex;clangStaticAnalyzerCheckers;clangStaticAnalyzerCore;LLVM"
)

# Create imported target clangFormat
add_library(clangFormat STATIC IMPORTED)

set_target_properties(clangFormat PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;clangLex;clangToolingCore;clangToolingInclusions;LLVM"
)

# Create imported target clangInterpreter
add_library(clangInterpreter STATIC IMPORTED)

set_target_properties(clangInterpreter PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangAnalysis;clangBasic;clangDriver;clangEdit;clangFrontend;clangLex;clangParse;clangSema;clangSerialization;clangCodeGen;clangFrontendTool;LLVM"
)

# Create imported target clangSupport
add_library(clangSupport STATIC IMPORTED)

set_target_properties(clangSupport PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM"
)

# Create imported target diagtool
add_executable(diagtool IMPORTED)

# Create imported target clang
add_executable(clang IMPORTED)

# Create imported target clang-format
add_executable(clang-format IMPORTED)

# Create imported target clangHandleCXX
add_library(clangHandleCXX STATIC IMPORTED)

set_target_properties(clangHandleCXX PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;clangCodeGen;clangFrontend;clangLex;clangSerialization;clangTooling;LLVM"
)

# Create imported target clangHandleLLVM
add_library(clangHandleLLVM STATIC IMPORTED)

set_target_properties(clangHandleLLVM PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM"
)

# Create imported target clang-linker-wrapper
add_executable(clang-linker-wrapper IMPORTED)

# Create imported target clang-offload-packager
add_executable(clang-offload-packager IMPORTED)

# Create imported target clang-offload-bundler
add_executable(clang-offload-bundler IMPORTED)

# Create imported target clang-scan-deps
add_executable(clang-scan-deps IMPORTED)

# Create imported target clang-repl
add_executable(clang-repl IMPORTED)

# Create imported target clang-rename
add_executable(clang-rename IMPORTED)

# Create imported target clang-refactor
add_executable(clang-refactor IMPORTED)

# Create imported target clang-cpp
add_library(clang-cpp SHARED IMPORTED)

# Create imported target clang-check
add_executable(clang-check IMPORTED)

# Create imported target clang-extdef-mapping
add_executable(clang-extdef-mapping IMPORTED)

# Create imported target clangApplyReplacements
add_library(clangApplyReplacements STATIC IMPORTED)

set_target_properties(clangApplyReplacements PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clang-apply-replacements
add_executable(clang-apply-replacements IMPORTED)

# Create imported target clangReorderFields
add_library(clangReorderFields STATIC IMPORTED)

set_target_properties(clangReorderFields PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clang-reorder-fields
add_executable(clang-reorder-fields IMPORTED)

# Create imported target modularize
add_executable(modularize IMPORTED)

# Create imported target clangTidy
add_library(clangTidy STATIC IMPORTED)

set_target_properties(clangTidy PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM;\$<LINK_ONLY:clang-cpp>;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyAndroidModule
add_library(clangTidyAndroidModule STATIC IMPORTED)

set_target_properties(clangTidyAndroidModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyAbseilModule
add_library(clangTidyAbseilModule STATIC IMPORTED)

set_target_properties(clangTidyAbseilModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyAlteraModule
add_library(clangTidyAlteraModule STATIC IMPORTED)

set_target_properties(clangTidyAlteraModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyBoostModule
add_library(clangTidyBoostModule STATIC IMPORTED)

set_target_properties(clangTidyBoostModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyBugproneModule
add_library(clangTidyBugproneModule STATIC IMPORTED)

set_target_properties(clangTidyBugproneModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyCppCoreGuidelinesModule;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyCERTModule
add_library(clangTidyCERTModule STATIC IMPORTED)

set_target_properties(clangTidyCERTModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyBugproneModule;clangTidyConcurrencyModule;clangTidyGoogleModule;clangTidyMiscModule;clangTidyPerformanceModule;clangTidyReadabilityModule;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyConcurrencyModule
add_library(clangTidyConcurrencyModule STATIC IMPORTED)

set_target_properties(clangTidyConcurrencyModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyCppCoreGuidelinesModule
add_library(clangTidyCppCoreGuidelinesModule STATIC IMPORTED)

set_target_properties(clangTidyCppCoreGuidelinesModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyMiscModule;clangTidyModernizeModule;clangTidyReadabilityModule;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyDarwinModule
add_library(clangTidyDarwinModule STATIC IMPORTED)

set_target_properties(clangTidyDarwinModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyFuchsiaModule
add_library(clangTidyFuchsiaModule STATIC IMPORTED)

set_target_properties(clangTidyFuchsiaModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyGoogleModule;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyGoogleModule
add_library(clangTidyGoogleModule STATIC IMPORTED)

set_target_properties(clangTidyGoogleModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyReadabilityModule;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyHICPPModule
add_library(clangTidyHICPPModule STATIC IMPORTED)

set_target_properties(clangTidyHICPPModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyBugproneModule;clangTidyCppCoreGuidelinesModule;clangTidyGoogleModule;clangTidyMiscModule;clangTidyModernizeModule;clangTidyPerformanceModule;clangTidyReadabilityModule;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyLinuxKernelModule
add_library(clangTidyLinuxKernelModule STATIC IMPORTED)

set_target_properties(clangTidyLinuxKernelModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyLLVMModule
add_library(clangTidyLLVMModule STATIC IMPORTED)

set_target_properties(clangTidyLLVMModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyReadabilityModule;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyLLVMLibcModule
add_library(clangTidyLLVMLibcModule STATIC IMPORTED)

set_target_properties(clangTidyLLVMLibcModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyPortabilityModule;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyMiscModule
add_library(clangTidyMiscModule STATIC IMPORTED)

set_target_properties(clangTidyMiscModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAnalysis;clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyModernizeModule
add_library(clangTidyModernizeModule STATIC IMPORTED)

set_target_properties(clangTidyModernizeModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyReadabilityModule;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyMPIModule
add_library(clangTidyMPIModule STATIC IMPORTED)

set_target_properties(clangTidyMPIModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyObjCModule
add_library(clangTidyObjCModule STATIC IMPORTED)

set_target_properties(clangTidyObjCModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyOpenMPModule
add_library(clangTidyOpenMPModule STATIC IMPORTED)

set_target_properties(clangTidyOpenMPModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyPerformanceModule
add_library(clangTidyPerformanceModule STATIC IMPORTED)

set_target_properties(clangTidyPerformanceModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyPortabilityModule
add_library(clangTidyPortabilityModule STATIC IMPORTED)

set_target_properties(clangTidyPortabilityModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyReadabilityModule
add_library(clangTidyReadabilityModule STATIC IMPORTED)

set_target_properties(clangTidyReadabilityModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyZirconModule
add_library(clangTidyZirconModule STATIC IMPORTED)

set_target_properties(clangTidyZirconModule PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyUtils;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyPlugin
add_library(clangTidyPlugin STATIC IMPORTED)

set_target_properties(clangTidyPlugin PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyAndroidModule;clangTidyAbseilModule;clangTidyAlteraModule;clangTidyBoostModule;clangTidyBugproneModule;clangTidyCERTModule;clangTidyConcurrencyModule;clangTidyCppCoreGuidelinesModule;clangTidyDarwinModule;clangTidyFuchsiaModule;clangTidyGoogleModule;clangTidyHICPPModule;clangTidyLinuxKernelModule;clangTidyLLVMModule;clangTidyLLVMLibcModule;clangTidyMiscModule;clangTidyModernizeModule;clangTidyObjCModule;clangTidyOpenMPModule;clangTidyPerformanceModule;clangTidyPortabilityModule;clangTidyReadabilityModule;clangTidyZirconModule;clangTidyMPIModule;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangTidyMain
add_library(clangTidyMain STATIC IMPORTED)

set_target_properties(clangTidyMain PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;clangTidyAndroidModule;clangTidyAbseilModule;clangTidyAlteraModule;clangTidyBoostModule;clangTidyBugproneModule;clangTidyCERTModule;clangTidyConcurrencyModule;clangTidyCppCoreGuidelinesModule;clangTidyDarwinModule;clangTidyFuchsiaModule;clangTidyGoogleModule;clangTidyHICPPModule;clangTidyLinuxKernelModule;clangTidyLLVMModule;clangTidyLLVMLibcModule;clangTidyMiscModule;clangTidyModernizeModule;clangTidyObjCModule;clangTidyOpenMPModule;clangTidyPerformanceModule;clangTidyPortabilityModule;clangTidyReadabilityModule;clangTidyZirconModule;clangTidyMPIModule;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clang-tidy
add_executable(clang-tidy IMPORTED)

# Create imported target clangTidyUtils
add_library(clangTidyUtils STATIC IMPORTED)

set_target_properties(clangTidyUtils PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangTidy;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangChangeNamespace
add_library(clangChangeNamespace STATIC IMPORTED)

set_target_properties(clangChangeNamespace PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clang-change-namespace
add_executable(clang-change-namespace IMPORTED)

# Create imported target clangDoc
add_library(clangDoc STATIC IMPORTED)

set_target_properties(clangDoc PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clang-doc
add_executable(clang-doc IMPORTED)

# Create imported target clangIncludeFixer
add_library(clangIncludeFixer STATIC IMPORTED)

set_target_properties(clangIncludeFixer PROPERTIES
  INTERFACE_LINK_LIBRARIES "findAllSymbols;LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clangIncludeFixerPlugin
add_library(clangIncludeFixerPlugin STATIC IMPORTED)

set_target_properties(clangIncludeFixerPlugin PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangFrontend;clangIncludeFixer;clangParse;clangSema;clangTooling;LLVM"
)

# Create imported target clang-include-fixer
add_executable(clang-include-fixer IMPORTED)

# Create imported target findAllSymbols
add_library(findAllSymbols STATIC IMPORTED)

set_target_properties(findAllSymbols PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target find-all-symbols
add_executable(find-all-symbols IMPORTED)

# Create imported target clangMove
add_library(clangMove STATIC IMPORTED)

set_target_properties(clangMove PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clang-move
add_executable(clang-move IMPORTED)

# Create imported target clangQuery
add_library(clangQuery STATIC IMPORTED)

set_target_properties(clangQuery PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clang-query
add_executable(clang-query IMPORTED)

# Create imported target clangIncludeCleaner
add_library(clangIncludeCleaner STATIC IMPORTED)

set_target_properties(clangIncludeCleaner PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM;\$<LINK_ONLY:clang-cpp>"
)

# Create imported target clang-include-cleaner
add_executable(clang-include-cleaner IMPORTED)

# Create imported target pp-trace
add_executable(pp-trace IMPORTED)

# Create imported target clangPseudoCLI
add_library(clangPseudoCLI STATIC IMPORTED)

set_target_properties(clangPseudoCLI PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangPseudoGrammar;clangPseudoCXX;LLVM"
)

# Create imported target clangPseudoCXX
add_library(clangPseudoCXX STATIC IMPORTED)

set_target_properties(clangPseudoCXX PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;clangPseudo;clangPseudoGrammar;LLVM"
)

# Create imported target clangPseudoGrammar
add_library(clangPseudoGrammar STATIC IMPORTED)

set_target_properties(clangPseudoGrammar PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM"
)

# Create imported target clangPseudo
add_library(clangPseudo STATIC IMPORTED)

set_target_properties(clangPseudo PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangBasic;clangLex;clangPseudoGrammar;LLVM"
)

# Create imported target clang-pseudo
add_executable(clang-pseudo IMPORTED)

# Create imported target clangdSupport
add_library(clangdSupport STATIC IMPORTED)

set_target_properties(clangdSupport PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM"
)

# Create imported target clangDaemon
add_library(clangDaemon STATIC IMPORTED)

set_target_properties(clangDaemon PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVM;\$<LINK_ONLY:clang-cpp>;\$<LINK_ONLY:clangIncludeCleaner>;\$<LINK_ONLY:clangPseudo>;\$<LINK_ONLY:clangTidy>;\$<LINK_ONLY:clangdSupport>;\$<LINK_ONLY:clangTidyAndroidModule>;\$<LINK_ONLY:clangTidyAbseilModule>;\$<LINK_ONLY:clangTidyAlteraModule>;\$<LINK_ONLY:clangTidyBoostModule>;\$<LINK_ONLY:clangTidyBugproneModule>;\$<LINK_ONLY:clangTidyCERTModule>;\$<LINK_ONLY:clangTidyConcurrencyModule>;\$<LINK_ONLY:clangTidyCppCoreGuidelinesModule>;\$<LINK_ONLY:clangTidyDarwinModule>;\$<LINK_ONLY:clangTidyFuchsiaModule>;\$<LINK_ONLY:clangTidyGoogleModule>;\$<LINK_ONLY:clangTidyHICPPModule>;\$<LINK_ONLY:clangTidyLinuxKernelModule>;\$<LINK_ONLY:clangTidyLLVMModule>;\$<LINK_ONLY:clangTidyLLVMLibcModule>;\$<LINK_ONLY:clangTidyMiscModule>;\$<LINK_ONLY:clangTidyModernizeModule>;\$<LINK_ONLY:clangTidyObjCModule>;\$<LINK_ONLY:clangTidyOpenMPModule>;\$<LINK_ONLY:clangTidyPerformanceModule>;\$<LINK_ONLY:clangTidyPortabilityModule>;\$<LINK_ONLY:clangTidyReadabilityModule>;\$<LINK_ONLY:clangTidyZirconModule>;\$<LINK_ONLY:clangTidyMPIModule>"
)

# Create imported target clangDaemonTweaks
add_library(clangDaemonTweaks STATIC IMPORTED)

set_target_properties(clangDaemonTweaks PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangDaemon;clangdSupport;clangFormat;clangLex;clangSema;clangToolingCore;clangToolingRefactoring;clangToolingSyntax;LLVM"
)

# Create imported target clangd
add_executable(clangd IMPORTED)

# Create imported target clangdRemoteIndex
add_library(clangdRemoteIndex STATIC IMPORTED)

set_target_properties(clangdRemoteIndex PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangdSupport;LLVM"
)

# Create imported target libclang
add_library(libclang SHARED IMPORTED)

set_target_properties(libclang PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "CINDEX_NO_EXPORTS"
)

# Create imported target libclang_static
add_library(libclang_static STATIC IMPORTED)

set_target_properties(libclang_static PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "CINDEX_NO_EXPORTS"
  INTERFACE_LINK_LIBRARIES "clangAST;clangBasic;clangDriver;clangExtractAPI;clangFrontend;clangIndex;clangLex;clangRewrite;clangSema;clangSerialization;clangTooling;clangARCMigrate;LLVM;\$<LINK_ONLY:\$<TARGET_PROPERTY:libclang,LINK_LIBRARIES>>"
)

# Create imported target amdgpu-arch
add_executable(amdgpu-arch IMPORTED)

# Create imported target nvptx-arch
add_executable(nvptx-arch IMPORTED)

if(CMAKE_VERSION VERSION_LESS 2.8.12)
  message(FATAL_ERROR "This file relies on consumers using CMake 2.8.12 or greater.")
endif()

# Load information for each installed configuration.
file(GLOB _cmake_config_files "${CMAKE_CURRENT_LIST_DIR}/ClangTargets-*.cmake")
foreach(_cmake_config_file IN LISTS _cmake_config_files)
  include("${_cmake_config_file}")
endforeach()
unset(_cmake_config_file)
unset(_cmake_config_files)

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(_cmake_target IN LISTS _cmake_import_check_targets)
  foreach(_cmake_file IN LISTS "_cmake_import_check_files_for_${_cmake_target}")
    if(NOT EXISTS "${_cmake_file}")
      message(FATAL_ERROR "The imported target \"${_cmake_target}\" references the file
   \"${_cmake_file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_cmake_file)
  unset("_cmake_import_check_files_for_${_cmake_target}")
endforeach()
unset(_cmake_target)
unset(_cmake_import_check_targets)

# Make sure the targets which have been exported in some other
# export set exist.
unset(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets)
foreach(_target "LLVM" )
  if(NOT TARGET "${_target}" )
    set(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets "${${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets} ${_target}")
  endif()
endforeach()

if(DEFINED ${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets)
  if(CMAKE_FIND_PACKAGE_NAME)
    set( ${CMAKE_FIND_PACKAGE_NAME}_FOUND FALSE)
    set( ${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE "The following imported targets are referenced, but are missing: ${${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets}")
  else()
    message(FATAL_ERROR "The following imported targets are referenced, but are missing: ${${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets}")
  endif()
endif()
unset(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets)

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
