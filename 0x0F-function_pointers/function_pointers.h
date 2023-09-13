void print_name(char name, void (f)(char ));
void array_iterator(intarray, size_t size, void (action)(int));
int int_index(intarray, int size, int (cmp)(int));
int (get_op_func(char *s))(int, int);
