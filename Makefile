output: KnockKnock.o
	g++ KnockKnock.o -o KnockKnock

KnockKnock.o: KnockKnock.cpp
	g++ -c KnockKnock.cpp

clean:
	rm KnockKnock.o
	rm KnockKnock
