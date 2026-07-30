// write a progoram in which you will insert in the middle of an array
#include<iostream>
using namespace std;
int main(){
    int name[6] = {3, 2, 1, 4, 5};
    int index;
    int value;

//    This code is for the addition of new element in the list

    cout<<"Enter the index at which you want to insert the element:";
    cin>>index;
    cout<<"Enter the element you want to insert:";
    cin>>value;
    for(int i=(sizeof(name)/4);i>index;i--){
        name[i] = name[i-1];
    }
    name[index] = value;
    cout<<"The new array is: ";
    for(int i=0;i<6;i++){
        cout<<name[i]<<" ";
    }


// This code is for the deletion of element in the list

    cout<<endl<<"Enter the index at which you want to delete the element:";
    cin>>index;
    for(int i=index;i<=(sizeof(name)/4);i++){
        name[i]=name[i+1];
}
    cout<<"The new array is: ";
    for(int i=0;i<(sizeof(name)/4-1);i++){
        cout<<name[i]<<" ";
    }


// This code is for the Search of any element in the list 
cout<<endl<<"Enter the value that you want to search in the list: ";
cin>>value;
for(int i=0;i<=(sizeof(name)/4);i++){
    if (name[i]==value){
        cout<<"Value is present at the index "<<i<<endl;
        break;
    }
    else if(i==(sizeof(name)/4)){
        cout<<"Value is not present in the list"<<endl;
    }
}

}
