#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>
#include<sys/time.h>
#define MAX_THREADS 2

int killo[1000];
int playerTurn=0;

pthread_mutex_t mutex=PTHREAD_MUTEX_INITIALIZER;

//Thread function to guess number between 1 and 1000
void* automatic_Guess(void *arg) {

	int value = *(int*) arg;        //casting void pointer to integer
	struct timeval start1, end1;    //Keep record of process start-time
	gettimeofday(&start1, NULL);


	//Implementing Binary-Search here
	int low = 0, high = 999, mid = (low + high) / 2;
		while (low <= high) {
			if (killo[mid] < value)
				low = mid + 1;
			else if (killo[mid] == value) {
				printf(" \n  thread guess matches with System Guess %d \n ", killo[mid]);
				break;
			} else
				high = mid - 1;
			mid = (low + high) / 2;
			usleep(105000);  //Encouraging threads
		}

	gettimeofday(&end1, NULL);    //Keep record of process end-time
	long seconds1 = (end1.tv_sec - start1.tv_sec);
	long micros1 = ((seconds1* 1000000) + end1.tv_usec) - (start1.tv_usec);

	printf("Time spent by thread is %ld uSeconds\n", micros1);
	return NULL;
}

int main() {
	int num;
	srand(time(0));                //Generating random number
	num = rand() % 1000 + 1;       //Between 1 and 1000

	//Initializing array
	for (int i = 0; i < 1000; i++) {
		killo[i] = i + 1;
	}

	pthread_t threads[MAX_THREADS];
	//creating 2 threads
	for (int i = 1; i <= MAX_THREADS; i++) {
		pthread_create(&threads[i], NULL, &automatic_Guess, &num);

	}

	struct timeval start, end;
	printf(" Guess the number Game \n ");



	if(playerTurn==0)  {
	printf(" Your Turn to guess \n");
	gettimeofday(&start, NULL);

	//Implementing Binary-Search here
	int low = 0, high = 999, mid = (low + high) / 2;
	while (low <= high) {
		if (killo[mid] < num)
			{ low = mid + 1;
			  if(playerTurn==1){playerTurn=2 ;}
			  usleep(10000);
			}
		else if (killo[mid] == num) {
			printf(" Your guess matches with System Guess %d \n ", killo[mid]);
			break;
		} else {
			   high = mid - 1;
		       mid = (low + high) / 2;
		       if (playerTurn==2){playerTurn=1 ;}
		       usleep(10000);
		}
	}

	gettimeofday(&end, NULL);
	long seconds = (end.tv_sec - start.tv_sec);
	long micros = ((seconds * 1000000) + end.tv_usec) - (start.tv_usec);
    printf(" Time spent by you is %ld uSeconds \n", micros);
	}

	for(int i =1; i<= MAX_THREADS; ++i)
	 {
	 pthread_join(threads[i],NULL);
	 }
	printf("Game Over");
	return EXIT_SUCCESS;
}
