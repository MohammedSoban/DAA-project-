#include<iostream>
#include<conio.h>

using namespace std;


void printEachPass(int arr[50],int n){

      int i;

      for(i=0; i<n; i++)
      {
       cout<<arr[i]<<" ";
      }

}

void bubbleSort(int arr[50],int n){

        int i,j,temp,countSwap=0;

    cout<<"Sorting array using bubble sort technique...\n";

	for(i=0; i<(n-1); i++)
	{
	    cout<<"_____________"<<endl;
	    cout<<"parse "<<i+1<<endl;


		for(j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

                printEachPass(arr,n);
                cout<<endl;

              countSwap++;//counting sawp fucntions
            }

		}

        cout<<"sorted element in this parse = "<<arr[countSwap]<<endl;
		cout<<"swap count= "<<countSwap<<endl;//print swap count after each parse
		countSwap=0;//reseting to zero for next parse
		cout<<"_____________"<<endl;

	}

	cout<<"END"<<endl;

}

void selectionSort(int arr[50] ,int n)
{

int i,j,temp,countSwap=0;

cout<<"Sorting array using selection sort...\n";

for(i=0; i<n; i++)
	{
	    cout<<"_____________"<<endl;
	    cout<<"parse "<<i+1<<endl;

		for(j=i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;

				 printEachPass(arr,n);
                cout<<endl;

              countSwap++;//counting sawp fucntions
			}
		}

        cout<<"sorted element in this parse = "<<arr[i]<<endl;
		cout<<"swap count= "<<countSwap<<endl;//print swap count after each parse
		countSwap=0;//reseting to zero for next parse
		cout<<"_____________"<<endl;
	}

	cout<<"END"<<endl;

}


int main()
{

	int n, i, arr[50],arr2[50];
	cout<<"Enter total number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" numbers :";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	for(i=0; i<n; i++)
	{
		arr2[i]=arr[i];
	}

    bubbleSort(arr,n);
    cout<<"_________________________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<"BORDER"<<endl;
    cout<<"__________________________________________________________________________________________________________________________________________________________________"<<endl;
	selectionSort(arr2,n);


}


