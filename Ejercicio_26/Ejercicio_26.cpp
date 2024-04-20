#include <iostream>
using namespace std;

int main(){
    int n, numMenor = 0;
    while(n!=0){
        cout<<"Ingrese un numero: "<<endl;
        cin>>n;
        if(n>=-16 && n<=27) {
            if(numMenor==0){
                numMenor=n;
            }
            else if(n<numMenor){
                numMenor=n;
            }
        }
    }
    cout<<"El menor numero es: "<<numMenor<<endl; 

    system("pause");
    return 0;
}