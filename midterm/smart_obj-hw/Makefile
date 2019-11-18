.SUFFIXES: .cpp .o

OBJECTS = human.o shared_ref.o smart_obj.o student.o test.o weak_pointer.o

CXX = g++
CPPFLAGS = -c

TARGET = test

$(TARGET) : $(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS)

clean : 
	rm -rf $(OBJECTS) $(TARGET)

human.o : human.cpp
shared_ref.o : shared_ref.cpp
smart_obj.o : smart_obj.cpp
student.o : student.cpp
test.o : test.cpp
weak_pointer.o : weak_pointer.cpp
