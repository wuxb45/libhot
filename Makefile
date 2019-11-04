main.out : main.cc Makefile
	g++ -std=gnu++17 -O3 -march=native -Iinclude -o $@ $<
cstrbench.out : cstrbench.cc Makefile
	g++ -std=gnu++17 -O3 -march=native -Iinclude -o $@ $< -ltbb
