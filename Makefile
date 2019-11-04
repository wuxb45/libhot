main.out : main.cc
	g++ -std=gnu++17 -O3 -march=native -Iinclude -o $@ $<
