cmake_minimum_required(VERSION 3.23)

set(HANGMAN_SOURCES "main.c" "curl.c" "gen.c")

add_executable(hangman ${HANGMAN_SOURCES})

target_include_directories(hangman PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(hangman PUBLIC ncurses curl)
