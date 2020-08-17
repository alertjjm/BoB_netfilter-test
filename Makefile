LDLIBS=-lnetfilter_queue

all: netfilter-test

arp-spoof: main.o ip.o
	$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

clean:
	rm -f netfilter-test *.o
