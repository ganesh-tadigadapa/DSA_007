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
// }
