CC      := gcc
CCFLAGS :=
LDFLAGS :=

TARGETS := main
MAINS   := $(addsuffix .o, $(TARGETS) )
OBJ     := max.o $(MAINS)
DEPS    := max.h

.PHONY: all clean

all: $(TARGETS)

clean:
	rm -f $(TARGETS) $(OBJ)

$(OBJ): %.o : %.c $(DEPS)
	$(CC) -c -o $@ $< $(CCFLAGS)

$(TARGETS): % : $(filter-out $(MAINS), $(OBJ)) %.o
	$(CC) -o $@ $(LIBS) $^ $(CCFLAGS) $(LDFLAGS)



