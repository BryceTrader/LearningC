CC=gcc
CFLAGS= -c -Wall
LDFLAGS=
SOURCES=
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=test

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
        $(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
        $(CC) $(CFLAGS) $< -o $@

# %.o : %.c
#         $(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@