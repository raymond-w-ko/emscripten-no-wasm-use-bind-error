all:
	em++ --version
	em++ --bind -s WASM=0 -o dummy.js dummy.cpp -v
