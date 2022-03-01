#include <iostream>
#include <time.h>

using namespace std;

int random(){
    return 50 + (rand()%50);
}


class Marks{
public:
int num;
    int regNO = 0;
    int size=50;
    int *container;

    Marks(int *c)
    {
        container= new int[size];
        regNO++;
    }
    
    ~Marks (){
        delete[] container;
    }
};


int main(){
    srand (time(0));
    int n;
    int marksNum=50;
    int course[marksNum];
    cout << "enter the number of students \n";
    cin >> n;

    for (int i=0;i<n;i++){
    
        for (int j=0;j<marksNum;j++){
            cin >> course[j];
            cout << course[j];
        }
    marks Marks1();

    }

    
}