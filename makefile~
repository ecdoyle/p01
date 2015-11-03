# file: GNUMakefile
#

# define a target for the application
#
all: foo  
#defines the target for the program is called foo, foo is the name of the executable

# define a target to link the application
#
foo: foo.o foo_00.o  
#within the executable program foo, multiple items need to be linked including the output of the main function foo and the other functions in foo_00	
	g++ foo.o foo_00.o -o foo 
#these will be linked through the use of the C++ complier g++. the -o flag is used to name the targets as object code files and link them to the aforementioned foo

# define a target to compile the application
#
foo.o: foo.cc foo.h
#this section is used to define how this object code file is compiled in the application

	g++ -O2 -c foo.cc -o foo.o
#again we use the g++ compiler, the -O2 refers to the version of g++ and it was mentioned that -O2 is the best one to use for our uses. the -c flag is used to compile just foo.cc, and uses the -o flag to name the object code file

foo_00.o: foo_00.cc foo.h
#very similar to the section above, just pertains to the auxiliary function script

	g++ -02 -c foo_00.cc -o foo_00.o
#this also uses the g++ C++ compiler version -O2 and denotes that the foo_00.cc file should be compuled and foo_00.o it to be used as the object code file

# define a target to clean the directory
#
clean:
#this is used to clean the directory by removing the file references we created and would free up the memory

	rm -f foo.o foo_00.o
#this removes the object code files
	rm -f foo
#this removes the target/executable of the program

#
# end of file


