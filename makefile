#Tyler Forrester
#Makefile for Lab D Makes copy, encryption, InputValid, OrderedOutpout, ToUpper, Transformer, WriteFile
#July 17, 2016
CXX = g++ 
OBJSL2 = main.o
SRCSL2 = main.cpp

OBJSL3 = InputValid.o
SRCSL3 = InputValid.cpp
HEAD3 = InputValid.hpp

OBJSL4 = Transformer.o
SRCSL4 = Transformer.cpp
HEAD4 = Transformer.hpp

OBJSL5 = WriteFile.o
SRCSL5 = WriteFile.cpp
HEAD5 = WriteFile.hpp

OBJSL6 = ToUpper.o
SRCSL6 = ToUpper.cpp
HEAD6 = ToUpper.hpp

OBJSL7 = encryption.o
SRCSL7 = encryption.cpp
HEAD7 = encryption.hpp

OBJSL8 = OrderedOutput.o
SRCSL8 = OrderedOutput.cpp
HEAD8 = OrderedOutput.hpp

OBJSL9 = copy.o
SRCSL9 = copy.cpp
HEAD9 = copy.hpp

#OBJSL3 = InputValid.o
#SRCSL3 = InputValid.cpp
#HEAD3 = InputValid.hpp

PROG = LabD
#PROGT = Test

all: $(PROG) 

$(PROG): $(OBJSL2) $(OBJSL3)  $(OBJSL4) $(OBJSL5) $(OBJSL6) $(OBJSL7) $(OBJSL8) $(OBJSL9) $(HEAD3) $(HEAD4) $(HEAD5) $(HEAD6) $(HEAD7) $(HEAD8) $(HEAD9)
	$(CXX) $(OBJSL2) $(OBJSL3) $(OBJSL4) $(OBJSL5) $(OBJSL6) $(OBJSL7) $(OBJSL8) $(OBJSL9) -o $(PROG)
$(OBJSL2): $(SRCSL2)
	$(CXX) -c $(SRCSL2)
$(OBJSL3): $(SRCSL3) $(HEAD3)
	$(CXX) -c $(SRCSL3)
$(OBJSL4): $(SRCSL4) $(HEAD4)
	$(CXX) -c $(SRCSL4)
$(OBJSL5): $(SRCSL5) $(HEAD5)
	$(CXX) -c $(SRCSL5)
$(OBJSL6): $(SRCSL6) $(HEAD6)
	$(CXX) -c $(SRCSL6)
$(OBJSL7): $(SRCSL7) $(HEAD7)
	$(CXX) -c $(SRCSL7)
$(OBJSL8): $(SRCSL8) $(HEAD8)
	$(CXX) -c $(SRCSL8)
$(OBJSL9): $(SRCSL9) $(HEAD9)
	$(CXX) -c $(SRCSL9)

clean:
	rm -rf $(PROG) *.o *~
