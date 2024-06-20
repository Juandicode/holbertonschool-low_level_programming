#include <stdio.h>

int main(){

	int age;

	printf("\nEnter your age: ");
	scanf("%d" , &age);

	if(age >= 90){
		printf("You are too old for this shii!");
	}
	else if(age == 0){
		printf("you cant sign up! You were just born!");
	}
	else if(age < 0){
		printf("you havent been born yet!");
	}
	else if(age >= 18){
		printf("you can sign up!");
	}
	else{
		printf("You are too young to sign up!");
	}
}
