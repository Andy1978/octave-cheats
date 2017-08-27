.PHONY: all run clean style

CXXFLAGS = -Wall
TARGETS = tut1.oct

all: $(TARGETS) run

run:
	octave --eval '[a, b] = tut1()'
	
%.oct: %.cc
	mkoctfile $(CXXFLAGS) $<

style:
	astyle --style=ansi -s2 *.cc

clean:
	rm -f *.o *.oct
