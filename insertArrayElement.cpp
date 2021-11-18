#include<iostream>
using namespace std;
int* insertElement(int n, int arr[], int insertedElement, int position)
{
  //Increase array size by 1:
  n++;

  //Shift elements by an index of 1:
  for (int i=n-1; i>=position; i--)
  {
    arr[i] = arr[i-1];
  }
  arr[position-1] = insertedElement;
  return arr;
}

int main()
{
  int arr[50], n, insertedElement, position;
  cout << "You want an array of size n, please input n: "<<endl;
  cin >> n; 
  cout << "What should be in your original array: "<<endl;
  for (int i = 0; i<n; i++) //Initialize the original array
  {
    cin >> arr[i];
  }
  cout << "What element do you want to insert into the array? "<<endl;
  cin >> insertedElement; 
  cout << "At which position do you want your modification to take place? "<<endl;
  cin >> position;
  if (position > n || position < 1)
  {
    cout << "Invalid position";  
  }
  else
  {
    //insert element
    insertElement(n, arr, insertedElement, position);
    //print out the modified array:
    cout<<"Modified array: "<<endl;
    for (int i = 0; i <= n; i++)
    {
      cout << arr[i] << " ";
    }
  }
}