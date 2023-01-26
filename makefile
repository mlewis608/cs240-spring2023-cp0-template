# Specifiy the target
all: course

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
course: Course.o
	g++ Course.o -o course

# Specify how the object files should be created from source files
Course.o: Course.cpp
	g++ -c Course.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o course
