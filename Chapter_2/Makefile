# Makefile

# Compiler and flags
CC = clang
CFLAGS = -Wall -g
LDFLAGS = -lcheck

# Directories
SRC_DIR = src  # change to src_for_user if testing your own code!
INCLUDE_DIR = include
TEST_DIR = test

# Source files and object files
SRCS = $(TEST_DIR)/test.c $(SRC_DIR)/Exercise_2_4.c $(SRC_DIR)/Exercise_2_6.c $(SRC_DIR)/Exercise_2_7.c  $(SRC_DIR)/Exercise_2_8.c  #$(wildcard $(SRC_DIR)/*.c) #when done
OBJS = $(SRCS:.c=.o)

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

