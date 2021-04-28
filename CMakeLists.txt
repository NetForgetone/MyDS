cmake_minimum_required (VERSION 2.6)
project (TEST)
set( CMAKE_CXX_FLAGS "-std=c99" )
set (PROJECT_ROOT_PATH "${PROJECT_SOURCE_DIR}/")  

#头文件目录
include_directories(${PROJECT_SOURCE_DIR}/include)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/Vecter source_list)
#设置可执行文件的输出目录
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/Bin)
#设置生成库文件的输出目录
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

#设置了Debug版本和Release版本可执行文件的输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/Bin)   
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${PROJECT_SOURCE_DIR}/Bin)
#设置了Debug版本和Release版本下可执行文件的后缀名
set_target_properties(${TARGET_NAME} PROPERTIES DEBUG_POSTFIX "_d")
set_target_properties(${TARGET_NAME} PROPERTIES RELEASE_POSTFIX "_r")

#设置了Debug版本和Release版本库文件的输出目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE  ${PROJECT_SOURCE_DIR}/lib)

#设置了Debug版本和Release版本下库文件的后缀名
set(CMAKE_DEBUG_POSTFIX "_d")
set(CMAKE_RELEASE_POSTFIX "_r")


#链接库文件路径
link_directories(${PROJECT_SOURCE_DIR}/lib)
add_subdirectory(src)

# 指定可执行文件名及源码
add_executable(LIST ${source_list}) 
#链接库文件
target_link_libraries(vecter )