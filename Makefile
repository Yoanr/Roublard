CC = g++
#CFLAGS = -Wall -Werror -pedantic -Wextra -std=c++14
EXEC_NAME = sfml-app
INCLUDES = -lsfml-graphics -lsfml-window -lsfml-system
SRC_FILES = main.cpp  GameEngine.cpp Square.cpp Draw.cpp Fichier.cpp

all :
	$(CC) $(SRC_FILES) $(INCLUDES) -o $(EXEC_NAME)

clean :
	rm -f $(EXEC_NAME)

run :
	$(EXEC_NAME)