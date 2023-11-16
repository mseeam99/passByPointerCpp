/*
clear && g++ -o exe passByPointer.cpp && ./exe
*/

#include <iostream>
#include <vector>

using namespace std;

void changeVectorElement(vector<int>* myVect){
   (*myVect)[2]=0;
}

int main() {
    
    vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);
    
    for(int i=0;i<myVector.size();i++){
        cout<<"Elements: "<<myVector.at(i)<< " Address: "<<&myVector.at(i)<<endl;
    }

    changeVectorElement(&myVector);
    cout<<endl;
    
    for(int i=0;i<myVector.size();i++){
       cout<<"Elements: "<<myVector.at(i)<< " Address: "<<&myVector.at(i)<<endl;
    }
    
    return 0;
}

/*
Elements: 1 Address: 0x150606910
Elements: 2 Address: 0x150606914
Elements: 3 Address: 0x150606918
Elements: 4 Address: 0x15060691c
Elements: 5 Address: 0x150606920

Elements: 1 Address: 0x150606910
Elements: 2 Address: 0x150606914
Elements: 0 Address: 0x150606918
Elements: 4 Address: 0x15060691c
Elements: 5 Address: 0x150606920
*/