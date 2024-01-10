CC := cc

CFLAGS := -Wall -Wextra -Werror

SRCS := main.c file1.c file2.c

OBJS := $(SRCS:.c=.o)

TARGET := push_swap

# Default target
all: $(TARGET)

# Compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Link object files into executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Clean up object files and executable
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean
