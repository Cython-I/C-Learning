# Makefile

# Compiler and flags
CC = clang
CFLAGS = -Wall -g
LDFLAGS = -lcheck -lm

# Directories # change to src_for_user if testing your own code!
INCLUDE_DIR = include
SRC_DIR =  src
TEST_DIR =  test

# Source files and object files

SRCS = $(TEST_DIR)/test.c $(wildcard $(SRC_DIR)/*.c) 
OBJS = $(SRCS:.c=.o)
$(info SRC_DIR = $(SRC_DIR))
$(info SRCS = $(SRCS))

# Executable name
EXEC = chapter2_test

# Default target
all: $(EXEC)

# Rule to link object files
$(EXEC): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

# Rule to compile source files
%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Clean target to remove compiled files
clean:
	rm -f $(OBJS) $(EXEC) 

.PHONY: all clean

