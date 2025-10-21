cmake_minimum_required(VERSION 3.20)
project(c_project)

# 严格编译器设置
set(CMAKE_C_STANDARD 17)          # 使用 C17 标准
set(CMAKE_C_STANDARD_REQUIRED ON) # 强制编译器严格支持指定的 C 标准
set(CMAKE_C_EXTENSIONS OFF)       # 禁用编译器扩展

# 启用编译数据库生成.配合 clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 强制启用所有警告
add_compile_options(
    -Wall     # 开启所有警告
    -Wextra   # 启用额外警告
    -Werror   # 将警告视为错误
    -pedantic # 严格遵循标准
)

# 添加可执行文件(推荐显式列出文件)
set(MAIN_SOURCES
    main.c
)

set(SRC_SOURCES
    src/print_expr.c
)

add_executable(
    ${PROJECT_NAME}
    ${MAIN_SOURCES}
    ${SRC_SOURCES}
)

# 设置包含目录
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)
