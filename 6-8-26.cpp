#include<iostream>
using namespace std;
void create(int a[]){
    int i=0;
    cout<<"Enter the values in the array that you want to store and in the last enter -1 to create the end mark"<<endl;
    while(a[i]!=-1){
        cin>>a[i];
        if(a[i]==-1){
            break;
        }
        i++;
    }
}


void display(int a[]){
    int i=0;
    cout<<"Values of your array are:"<<endl;
    while(a[i]!=-1){
        cout<<a[i]<<" ";
        i++;
    }
    cout<<endl;
}
int sizeofarray(int a[]){
    int count=0;
    while(a[count]!=-1){
        count++;
    }
    return count;
}


int search(int a[]){
    int v;
    cout<<"Enter the value that you want to search inside the list\n";
    cin>>v;
    for(int i=0;a[i]!=-1;i++){
        if(a[i]==v){
            return i;
        }
    }
    return -1;
    return 0;
}



void insert(int a[]){
    
    int value;
    int index;
    int x=0;
    do{
    cout<<"Enter 1 to insert the value at the index\n";
    cout<<"Enter 2 to insert the value before the selected value\n";
    cout<<"Enter 3 to insert the value after desired value\n";
    cout<<"Enter -1 to exit the loop\n";
    cin>>x;
        switch (x)
        {
        case 1:
        {
            cout<<"Enter the index at which you want to insert the value\n";
            cin>>index;
            cout<<"Enter the value that you want to insert at the index\n";
            cin>>value;
        for(int i=sizeofarray(a);i>=index;i--){
            a[i+1]=a[i];
        }
        a[index]=value;
        display(a);
         break;
    }
     case 2:
     {
      cout<<"Enter the value before which you want to insert the new value\n";
        cin>>value;
        int i=0;
    while(a[i]!=-1){
        if(a[i]==value){
            index=i;
        }
        i++;
    }
       cout<<"Enter the value that you want to insert\n";
    cin>>value;
      for(int i=sizeofarray(a);i>=index;i--){
            a[i+1]=a[i];
        }
         a[index]=value;
         display(a);
         break;
     }
      case 3:
     {
      cout<<"Enter the value after which you want to insert the new value\n";
        cin>>value;
        int i=0;
    while(a[i]!=-1){
        if(a[i]==value){
            index=i+1;
        }
        i++;
    }
    cout<<"Enter the value that you want to insert:\n";
    cin>>value;
      for(int i=sizeofarray(a);i>=index;i--){
            a[i+1]=a[i];
        }
         a[index]=value;
         display(a);
        break;
     }
     default:
   break;
    }
    } while(x!=-1);
} 


void remove(int a[]){
int value=0;
int index=0;
cout<<"Enter the value that you want to delete from the list\n";
cin>>value;
 int i=0;
    while(a[i]!=-1){
        if(a[i]==value){
            index=i;
        }
        i++;
    }
        for(int i=index;i<sizeofarray(a);i++){
            a[i]=a[i+1];
        }
}


int main(){
    int a[100]={};
    int x=0;
    do{
    cout<<"\nEnter 1 to create the array\n";
    cout<<"Enter 2 to display the array\n";
    cout<<"Enter 3 to search the  value in the list\n";
    cout<<"Enter 4 to insert something in the list\n";
    cout<<"Enter 5 to delete something from the list\n";
    cout<<"Enter 6 to know the size of the array\n";
    cout<<"Enter -1 to exit the program\n";
    cin>>x;
    switch (x)
    {
        case 1:
        {
            create(a);
            display(a);
             break;
        }
        case 2:
        {
            display(a);
             break;
        }
        case 3:
        {
           int n= search(a);
           cout<<"Index of the Value is\n"<<n<<endl;
            break;
        }
        case 4:
        {
            insert(a);
            
             break;
        }
        case 5:
        {
            remove(a);
            break;
        }
        case 6:
        {
            int m=0;
            m=sizeofarray(a);
            cout<<"Size of the array is:"<<m<<endl;
        }
        default:
        {
   break;
        }
    } 
}while(x!=-1);