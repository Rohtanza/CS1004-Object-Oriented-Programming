cmake_minimum_required(VERSION 3.25)
project(deckOFcards)

set(CMAKE_CXX_STANDARD 23)

add_executable(deckOFcards main.cpp Card.cpp Card.h DeckOfCards.cpp DeckOfCards.h)
