#include<iostream>
using namespace std;
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; 
    int i = (low - 1);     
        for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++; 
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    
    return (i + 1);
}
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}
void display_array(int array_to_be_sorted[],int size)
{
    for(int i=0;i<size;i++){
        cout<<array_to_be_sorted[i]<<" ";
    }
    cout<<endl;
}
void radix_sort(int array_to_be_sorted[], int n) {
    if (n <= 1) return;

    int max_val = array_to_be_sorted[0];
    for (int i = 1; i < n; i++) {
        if (array_to_be_sorted[i] > max_val) {
            max_val = array_to_be_sorted[i];
        }
    }
    int** buckets = new int*[10];
    for (int i = 0; i < 10; i++) {
        buckets[i] = new int[n];
    }

    int bucket_counts[10] = {0};
    for (int exp = 1; max_val / exp > 0; exp *= 10) {
        
      
        for (int i = 0; i < 10; i++) {
            bucket_counts[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            int digit = (array_to_be_sorted[i] / exp) % 10;
            buckets[digit][bucket_counts[digit]] = array_to_be_sorted[i];
            bucket_counts[digit]++;
        }
        int index = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < bucket_counts[i]; j++) {
                array_to_be_sorted[index] = buckets[i][j];
                index++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        delete[] buckets[i];
    }
    delete[] buckets;
}
void merge( int array_to_be_sorted[],int low,int mid,int high){
    int j=mid+1;
    int k=low;
    int i=0;
    int *c=new int[high-low+1];
    while(k!=mid+1 and j!=high+1){
        if(array_to_be_sorted[k]<array_to_be_sorted[j]){
        c[i]=array_to_be_sorted[k];
        i++;
        k++;
        }
        else{
        c[i]=array_to_be_sorted[j];
        j++;
        i++;
        }
    }
        if(k==mid+1){
            for(int m=j;m<=high;m++){
                c[i]=array_to_be_sorted[m];
                i++;
            }
        }
        else{
            for(int m=k;m<=mid;m++){
                c[i]=array_to_be_sorted[m];
                i++;
            }
        }
        for(int i=0;i<high-low+1;i++){
            array_to_be_sorted[low+i]=c[i];
        }
        delete[] c;
 }
    void merge_sort(int array_to_be_sorted[],int low,int high){
        if(low>=high){
            return;
        }
        int mid=int((low+high)/2);
        merge_sort(array_to_be_sorted,low,mid);
        merge_sort(array_to_be_sorted,mid+1,high);
        merge(array_to_be_sorted,low,mid,high);
  }
 void tower_of_hanoi(int disks,char f,char u,char t){
    if(disks>=1){
        tower_of_hanoi(disks-1,f,t,u);
        cout<<"Move disks from" <<f<<" to "<<t<<endl;
        tower_of_hanoi(disks-1,u,f,t);
    }
 }
 int main(){
    int array_to_be_sorted[12]={4,6,4,6,9,1,3,2,7,7,8,4};
    char f='F';
    char t='T';
    char u='U';
    quick_sort(array_to_be_sorted,0,11);
    display_array(array_to_be_sorted,12);

 }