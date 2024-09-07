#include <iostream> // Used for cin and cout
#include <string>
using namespace std; // making life easier so that we do not need to use std::cin , std::cout, etc.


//Write the function called locateSmallest in the given interval such that 
// output : int: index of the smallest value in the array
// input : an array of int, the starting index of search, the ending point of searchspace
// function: find the location (i.e index) of the smallest value of array in the given interval
// Note that I don't want the smallest value


int locateSmallest(int array[], int start, int end){
	int small = start;
	int i = 0;
	int num = 0;
	while (array[i] >= array[end]) {
		if (array[i] < small) {
			small = array[start];
			i++;
			num = start;
			}
	else {
		i++;
	}
	}

	
	return num; // fix this!
}


//Write the function called replaceVariable in the given interval such that 
// output : you decide what is the output (here I put "void" - change this if you need to!)
// input : an array of int, the target value we are searching for, 
//     an int which is the starting index of search,
//     an int which is the ending point of searchspace
// function: Search in the array from given start to end index and replace the given target value with 1000
void replaceVariable() {
	return;
}



//write a function called printArray to print out the elements of the given array
//output: nothing
//input: the array of integers and its size
void printArray() {
	return;
}

 int myarray[] = { 16,3,75,40,21,40,44,52,40,90,22 };

int main() {
   int locateSmallest(int myarray[] = { 16,3,75,40,21,40,44,52,40,90,22 }, 2, 4);


return 0;
}