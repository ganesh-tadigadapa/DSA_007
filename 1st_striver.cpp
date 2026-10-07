//largest
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5]={2,3,4,130,33};
//     int largest=arr[0];
//     for(int i=0;i<5;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     cout<<largest;
//     return 0;
// }



//smallest

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5]={2,3,4,130,33};
//     int smallest=arr[0];
//     for(int i=0;i<5;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }
//     cout<<smallest;
//     return 0;
// }


//second largest

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[]={2,3,4,5,1,22,44,33};
//     int largest=-1,slargest=-1;
//     for(int i=0;i<8;i++){
//         if(arr[i]>largest){
//             slargest=largest;
//             largest=arr[i];
//         }
//         else if(arr[i]<largest && arr[i]>slargest){
//             slargest=arr[i];
//         }
//     }
//     cout<<slargest;
//     return 0;
// }


//array is sorted or not

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[]={1,2,1,4,5,6};
//     for(int i=1;i<6;i++){
//         if(arr[i]>=arr[i-1]){
//         cout<<"array is sorted";
//         }
//         else{
//             cout<<" array is not sorted";
//         }
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 1, 4, 5, 6};
//     bool isSorted = true;

//     for (int i = 1; i < 6; i++) {
//         if (arr[i] < arr[i - 1]) {
//             isSorted = false;
//             break;
//         }
//     }

//     if (isSorted) {
//         cout << "Array is sorted";
//     }
//     else {
//         cout << "Array is not sorted";
//     }

//     return 0;

//(bruteforce of removing duplicate)

// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 2, 3, 4, 4, 5};
//     int n = 7;

//     set<int> s;

//     for (int i = 0; i < n; i++) {
//         s.insert(arr[i]);
//     }

//     for (int x : s) {
//         cout << x << " ";
//     }

//     return 0;


//optimized()

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
//     int n = 8;
//  int j = 0;

//     for (int i = 1; i < n; i++) {
//         if (arr[i] != arr[j]) {
//             j++;
//             arr[j] = arr[i];
//         } }
//  for (int i = 0; i <= j; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
// }


//left rotate  by 1 element

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[]={1,2,3,4,5,6};
//     int n=6;
//     int temp=arr[0];
//     for(int i=0;i<n;i++){
//         arr[i-1]=arr[i];

//     }
//     arr[n-1]=temp;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//left rotate by d places

// #include <iostream>
// using namespace std;
// void reverse(int arr[],int st,int end){
//     while(st<=end){
//         int temp=arr[st];
//         arr[st]=arr[end];
//         arr[end]=temp;
//         st++;
//         end--;
//     }

// }
// void rotatelements(int arr[],int k,int n){
//     k=k%n;
   
//     // Reverse first n-k elements
//     reverse(arr,0,n-k-1);
//     reverse(arr,n-k,n-1);
//     reverse(arr,0,n-1);
// }
// int main() {
//     int arr[]={1,2,3,4,5,6,7};
//     int n=7;
//     int k=3;
//     rotatelements(arr,k,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int arr[]={1,0,2,3,0,0,4,5,0,0};
//     int j=-1;
//     int n=10;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             j=i;
//             break;
//         }
//     }
//     for(int i=j+1;i<n;i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[j]);
//             j++;
//         }

//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// }
