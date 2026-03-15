#include <iostream>
#include <algorithm>
// why is this always printing 9 numbers even if the array is 9? is there something in the memory?
// The problem was that I was printing the size of a pointer. I have to explicitly state the length.
// I am getting some weird notes and warnings for some reason, I should check those out.
// I think I'm returning the wrong thing

// Returning an array from a function using pointers in C++ sometimes gives unexpected results because the memory allocated within the
// function is then deallocated, so there can be some abnormal behavior.

// There is another way to do this where we don't return the reversed array but instead just change the array we are given
// using a void function.
void reverseArray(int* array, int length){
	int reversed[length];
	// Make a reversed array
	for (int i = 0; i<length; i++){
		reversed[i] = array[length -1 -i];
	}
	// Print the array
	/*
	for (int i = 0; i<length; i++){
		std::cout<< reversed[i]<< std::endl;
	}
	*/
	// If I set array to equal reversed before hand, std::copy doesn't work
	//array = reversed;	
	std::copy(reversed, reversed+length, array);
	//std::cout<< array << " " << reversed<< std::endl;
}

int main(){
	int length;
	std::cout<< "Enter number of values: "; std::cin >> length;
	int array[length]; 
	for (int i = 0; i < length; i++){
		std::cout<< "Enter number "<< i+1<<": "; std::cin >> array[i];
	}
	reverseArray(array, length);
	for (int i = 0; i<length; i++){
		std::cout<<array[i]<<std::endl;
	}
	return 0;
}
