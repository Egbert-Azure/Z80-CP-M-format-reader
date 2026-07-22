SRC = alien.z80
OUT = alien.com

.PHONY: all build clean

all: build

build: $(OUT)

$(OUT): $(SRC)
	pasmo -d $(SRC) $(OUT)

clean:
	rm -f $(OUT)
