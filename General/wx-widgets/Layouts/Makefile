build: ofile run unset

unset:
	unset GTK_PATH

ofile:
	g++ main3.cpp -o output `wx-config --cxxflags` `wx-config --libs`

run:
	./output 