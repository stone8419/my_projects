cmake_minimum_required(VERSION 3.16)
set(PROJECT_NAME server_frame)
project(${PROJECT_NAME})
# 设置运行平台
set(PLATFORM "LINUX")
if (${PLATFORM} STREQUAL "WIN")
    set(HOME_NAME D:/workspace/${PROJECT_NAME})
elseif(${PLATFORM} STREQUAL "LINUX")
    set(HOME_NAME /mnt/d/workspace/${PROJECT_NAME})
elseif(${PLATFORM} STREQUAL "MacOS")
    set(HOME_NAME /Users/stone/workspace/${PROJECT_NAME})
else()
    message(STATUS "Not support other platform")
endif()
message(${HOME_NAME})
add_definitions(-fstack-protector-all -fPIC -D_FORTIFY_SOURCE=2 -O2 -Wmissing-declarations 
    -D_GNU_SOURCE -D__USE_XOPEN)
set(CMAKE_PROJECT_TYPE "Debug")
set(CMAKE_BUILD_TYPE "Debug")
if(${CMAKE_PROJECT_TYPE} STREQUAL ${CMAKE_BUILD_TYPE})
    set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
    set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
endif()

# ----------cmaketools automatic generate------------
# include(CTest)
# enable_testing()
# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
# ----------cmaketools automatic generate------------

set(SRC_DIR ${HOME_NAME}/src)
set(MAIN_DIR ${SRC_DIR}/main)
set(TEST_DIR ${SRC_DIR}/test)

include_directories(
    ${TEST_DIR}
)
aux_source_directory(${MAIN_DIR} MAIN)
aux_source_directory(${TEST_DIR} TEST)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

list(APPEND ALL_CODE_LIST ${MAIN} ${TEST})
add_executable(${PROJECT_NAME} ${ALL_CODE_LIST})
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})