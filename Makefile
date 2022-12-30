BDIR = bin
IDIR = include
ODIR = obj
SDIR = src

CC = gcc
CFLAGS = -g -Wall -std=gnu17 -I$(IDIR)
LDFLAGS = -lm -g -Wall -std=gnu17

PROG = $(BDIR)/monappli

_DEPS = tools.h db.h form.h elmlist.h list.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = tools.o elmlist.o form.o list.o db.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

.PHONY run clean delete

run : $(PROG)
	./$(PROG)

$(PROG): dirs $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

dirs :
	@mkdir -p $(BDIR)
	@mkdir -p $(ODIR)

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(ODIR) $(SDIR)/*~ core $(IDIR)/*~

delete: clean
	rm $(BDIR)
