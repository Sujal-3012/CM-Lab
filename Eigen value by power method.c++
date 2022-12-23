#include <iostream>
#include <cstdlib>
using namespace std;
int AX[3];
void ax(int A[3][3] , int X[3]){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            AX[i] += A[i][j] * X[j];
        }
    }
    
} 

void displayAX(){
    for(int i = 0 ; i<3 ; i++){
        cout<<AX[i]<<"\n";
    }
}

int lambda(){
    int max = 0;
    for(int i = 0 ; i<3 ; i++){
        if (AX[i] > max){
            max = AX[i];
        }
    }
    return max;
}

void lambdaAX(){
    int n = lambda();
    for(int i = 0 ; i<3 ; i++){
        AX[i] = AX[i] / n;
    }
}

int main() {
    int matrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<"Enter the value of matrix["<<i<<"]"<<"["<<j<<"]"<<"\n";
            cin>>matrix[i][j];
        }
    }
    int x[3] = {1 , 1 , 1};
    int l1 = 0;
    int l2 = 0;
    do{
        
    }while ();
    while (abs(l1 - l2) < 0.01){
        ax(matrix , x);
        int l1 = lambda();
        ax(matrix , AX);
        l2 = lambda();
    }
    cout<<l2;
	return 0;
}
