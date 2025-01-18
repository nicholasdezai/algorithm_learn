# 定义编译器
CC = gcc

# 定义编译选项
CFLAGS = -Wall -O2

# 默认目标
all: build

# 目标规则：编译指定的文件并将输出写入output.txt
build:
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS) > $(OUTPUT) 2>&1

# 从命令行获取源文件和目标文件
SRCS := $(filter %.c,$(MAKECMDGOALS))
TARGET := $(patsubst %.c,%,$(SRCS))
OUTPUT := output.txt

# 清理目标
clean:
	rm -f $(TARGET) $(OUTPUT)

# 防止make误将文件名解释为make目标
.PHONY: all build clean
