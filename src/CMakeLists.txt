cmake_minimum_required(VERSION 3.23)

set(HANGMAN_SOURCES "main.c")

add_executable(hangman ${HANGMAN_SOURCES})

target_link_libraries(hangman PUBLIC ncurses)
