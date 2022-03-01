#include <bits/stdc++.h>
#include <time.h>
#include <chrono>
#include <ctime>


using namespace std;
/*
    this function creates a random using the srand() as
    its seed time
    @return random number
*/
int random(){
   return 50 + (rand()%50);
}

void timetaken(){
    auto givemetime = chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout << ctime(&givemetime)<<endl;
}
/*  calculate the average marks of the student

    @param number of course taken
    @param total marks

    @return average marks of the student
*/
int average(int course, int total ){
    return total/course;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
// time taken to start the program
    timetaken();

    int testcases;
    cin >> testcases;
    int course = 50;
    //this will use the current time to seed the random value
    srand(time(0));

    int scoreArray[testcases][course];
    
    /*  this loop:
    1:enters the marks of the students
    
    */
    for(int t=0; t < testcases;t++){
        for(int j=0; j <course;j++){
            int randomNumber = random();
            scoreArray[t][j]=randomNumber;
        }
        //calculate the sum and average total mark for the students
        int sum =0;
        for(int j=0; j <course;j++){
            sum += scoreArray[t][j];
        }
        int averageMark= average(course,sum);
        cout << "Reg No."<< t+1 << " " << averageMark << "\n";
    }
    // the time taken to end the program
    timetaken();
}