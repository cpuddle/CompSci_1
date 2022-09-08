// Collin Franklin
// Computer Science I - Mika Morgan
// Lab 10 - Arrays
// 04-15-22
// Making Arrays

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;


int findLargest(int arr[100]);
int findPosition(int arr[100], int largest);
int findSum(int arr[100]);
float findAverage(int sum);
void printFile(int arr[100], int largest, int sum, int position, float average);


int main()
{   
    int sum, largest;
    srand(5);
    int arr[100];
    for(int i = 0; i < 100; i++)
    {
        arr[i] = rand() % RAND_MAX;
    }
    largest = findLargest(arr);
    sum = findSum(arr);
    printFile(arr, largest, sum, findPosition(arr, largest), findAverage(sum));
    return(0);
}


int findLargest(int arr[100]) // to find the maximum
{
    int largest = arr[0];
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}


int findPosition(int arr[100], int largest) // to find the location of the max
{   
    for(int i = 0; i < 100; i++)
    {
        if(arr[i] == largest)
        return i;
    }
    
}


int findSum(int arr[100]) // to find the sum
{
    int sum;
    for (int i = 0; i < 100; i++)
    {
        sum += arr[i];
    }
    return sum;
}


float findAverage(int sum) // to find the average
{
    return sum / 100;
}


void printFile(int arr[100], int largest, int sum, int position, float average)
{
    ofstream outfile;
    outfile.open("output.txt");
    outfile << "The maximum number is: " << largest << endl;
    outfile << "The position of the maximum is: " << position << endl;
    outfile << "The sum is: " << sum << endl;
    outfile << "The average is: " << average << endl;
    return;
}