#include <stdio.h>
#include <iostream>
#include <time.h>
#include <chrono>
#include <ctime>

const int number = 4;
using namespace std;
/*
    this function creates a random using the srand() as
    its seed time
    @return random number
*/
int randomTime(){
   return 50 + (rand()%50);
}

/*  calculate the average marks of the student

    @param number of course taken
    @param total marks

    @return average marks of the student
*/
int average(int student, int course,int marks[][number] ){
        int sum=0;
        for(int j=0;j <course;j++){
            sum +=marks[student][j];
        }
    return sum/course;
}
int main() {
    clock_t tStart = clock();
    /* Do your stuff here */
        ios::sync_with_stdio(0), cin.tie(0);
// time taken to start the program
cout << "";
    int testcases;
    cin >> testcases;
    int course = 4;
    //this will use the current time to seed the random value
    srand(time(0));
    int scoreArray[testcases][number];
    /*  this loop:
    1:enters the marks of the students
    */

    for(int t=0; t < testcases;t++){
    int sum =0;
        for(int j=0; j < course;j++){
            scoreArray[t][j]=randomTime();
        }
        //prints the average of the students
    cout << "Reg No."<< t+1 << " " << average(t,course,scoreArray) << "\n";
    }
    cout << "Time taken:"<<(double)(clock() - tStart)/CLOCKS_PER_SEC;
    return 0;
}
