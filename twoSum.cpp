//Given a sorted array(sorted in a ascending order)and a target,find if there exists any pair of elements(arr[i],arr[j])such that their sum is equal to their target.
#include <iostream>
#include <vector>
using namespace std;
bool twoSum(vector<int> &arr,int target){
int n = arr.size();
int left = 0, right = n-1;
while(left < right){
int sum = arr[left] + arr[right];
if(sum == target){
cout << arr[left] << " " << arr[right] <<endl;
return true;
}
else if(sum < target) left++;
else right--;
}
return false;
}

int main(){
int n;
cout << "Enter the size of the array: ";
cin >> n;
cout << "Enter the array: ";
vector<int> arr(n);
for(int i=0;i<n;i++){
cin >> arr[i];
}
int target;
cout << "Enter your Target: ";
cin >> target;
if(twoSum(arr,target))
  cout << "true" << endl;
else 
  cout << "false" << endl;
return 0;
}

