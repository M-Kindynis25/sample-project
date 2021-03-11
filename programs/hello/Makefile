# compiler
CC = gcc

# Αρχεία .o
OBJS = hello.o

# Το εκτελέσιμο πρόγραμμα
EXEC = hello

$(EXEC): $(OBJS)
	$(CC) $(OBJS) -o $(EXEC)

clean:
	rm -f $(OBJS) $(EXEC)

run: $(EXEC)
	./$(EXEC) $(ARGS)