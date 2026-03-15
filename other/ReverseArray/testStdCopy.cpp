#include <algorithm>
#include <iostream>
int main(){
	// define two arrays
	int arr1[3] = {1, 4, 3};
	int arr2[3] = {30, 40, 10};
	// I can't do this for some reason?
	arr1 = arr2;
	//Now arr2 has the value of arr1, so if we print it out, we see we have the same values as arr1
	std::copy(arr1, arr1+3, arr2);
	for (int i = 0; i < 3; i++){
		std::cout<<arr2[i]<<std::endl;
	}
	return 0;
}
