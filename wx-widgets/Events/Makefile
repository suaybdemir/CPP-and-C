build: unset ofile run 

unset:
	unset GTK_PATH

ofile:
	g++ main2.cpp -o output `wx-config --cxxflags` `wx-config --libs`

run:
	./output 