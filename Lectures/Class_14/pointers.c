#include<stdio.h>

int main()
    {
	int i_value = 31241;
	printf("i_value (found by identificator) =  %d\n", i_value);
	printf("sizeof(i_value) = %ld (bytes)\n", sizeof(i_value));

	int *i_pointer = &i_value;
	printf("i_pointer (adress) = %p\n", i_pointer);
	printf("i_value (found by adress) = %d\n", *i_pointer);
	printf("sizeof(i_pointer) = %ld (bytes)\n", sizeof(i_pointer));
	
	//*i_pointer = (*i_pointer)++; incr nestrādā, jo, pirmkārt, tam ir zemāka prioritāte, 
	// otrkārt, iegūtā vērtība iekš () vairs nav saistīta ne ar kādu mainīgo, kuram šo incr
	// operācija tiktu veikta.
	*i_pointer = (*i_pointer) + 1;
	printf("\ni_value (found by identificator; after increment) = %d\n", i_value);


	double d_value = 1.3e-3;
	printf("\nd_value (found by identificator) =  %f\n", d_value);
	printf("sizeof(d_value) = %ld (bytes)\n", sizeof(d_value));

	double *d_pointer = &d_value;
	printf("d_pointer (adress) = %p\n", d_pointer);
	printf("d_value (found by adress) = %f\n", *d_pointer);
	printf("sizeof(d_pointer) = %ld (bytes)\n", sizeof(d_pointer));
	
	*d_pointer = (*d_pointer) + 0.25;
	printf("\nd_value (found by identificator; after increment) = %f\n", d_value);

	return 0;
    }
