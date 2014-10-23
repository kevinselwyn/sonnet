NAME    := sonnet
BUILD   := build
EXEC    := $(BUILD)/$(NAME)
BIN_DIR := /usr/local/bin
TYPE    := $(shell getconf LONG_BIT)
OUTPUT  := elf32-i386

ifeq ($(TYPE),64)
	OUTPUT := elf64-x86-64
endif

all: build

build: $(NAME).c
	mkdir -p $(BUILD)
	objcopy -I binary -O $(OUTPUT) -B i386 $(NAME).txt $(NAME).o
	gcc -o $(EXEC) $< $(NAME).o -D_SHAKE_IT_UP

mac: $(NAME).c
	mkdir -p $(BUILD)
	gcc -o $(EXEC) $<

test: build
	./$(EXEC)

memcheck:
	gcc -o $(EXEC) $(NAME).c
	valgrind ./$(EXEC)

install: build
	install -m 0755 $(EXEC) $(BIN_DIR)

install_mac: install
	cp $(NAME).txt $(BIN_DIR)

uninstall:
	rm -f $(BIN_DIR)/$(NAME)

clean:
	rm -rf $(BUILD) $(NAME).o