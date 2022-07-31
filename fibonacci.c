//Desenvolvido por Rafael Humann Petry (rhpetry@inf.ufrgs.br)
#define SIZE 50

int sequence_number(int num_index) {
	int current = 1;
	int last = 0;
	int temp = 0;
	while (num_index-- > 0) {
		temp = current + last;
		last = current;
		current = temp;
	}
	return current;
}

int main(int argc, char *argv[]) {
	sequence_number(SIZE);
}
