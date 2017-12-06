int main (int argc, char** argv){

	char **messages = NULL;
	*messages = malloc(5*sizeof(char*));
	for(int i = 0; i < 5; i++){
		messages[i] = malloc (10*sizeof(char));
	}

	return 0;
}
