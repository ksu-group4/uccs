OBJS := main.o admin.o conference.o equipment.o guest.o room.o presentation.o session.o \
        tech.o

# link
all: $(OBJS)
	g++ $(OBJS) -o uccs

# pull in dependency info for *existing* .o files
-include $(OBJS:.o=.d)

# compile and generate dependency info
%.o: %.cpp
	g++ -c $(CFLAGS) $*.cpp -o $*.o
	g++ -MM $(CFLAGS) $*.cpp > $*.d

# remove compilation products
clean:
	rm -f uccs *.o *.d