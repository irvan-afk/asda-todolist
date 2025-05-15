CC = gcc
CFLAGS = -I./raylib/include
LDFLAGS = -L./raylib/lib -lraylib -lopengl32 -lgdi32 -lwinmm

SRC = main.c
TARGET = raylib_test.exe

all:
	$(CC) $(SRC) $(CFLAGS) $(LDFLAGS) -o $(TARGET)

clean:
	del $(TARGET)
