#include <iostream>

using namespace std;

int main() {



        for (int i = 0; i < 100; i++)
        {
            int k=i+1;
            if((k%3==0)&&(k%5==0)){
                cout<<k<<  "- BuzzFuzz"<<std::endl;}
            else if(k%3==0){
                cout<<k<<  "- Buzz"<<std::endl;}
            else if(k%5==0){
                cout<<k<<  "- Fuzz"<<std::endl;}

            else
            {cout<< k<<std::endl;
            }

        }}