#include <iostream>
using namespace std;
class Array
{
	int size;
	int* arr;
	int num;
	void Create_Array(int* arr, int num);
	void Get_Array(int* arr, int num);
	void Get_Array_Element(int* arr, int num, int x);
	void Update(int* ary, int num, int x, int y);
	void Length(int *ary,int num);
	void Add(int *ary, int num,int sizz,int val);
	void Remove(int *ary,int num,int val);
	void back(int *ary,int num,int val);
	void next(int* ary, int num, int val);
	void start(int*ary,int num);

public:
	Array()
	{
		size = 0;
		num = 0;
		arr = NULL;
	}

	void Display();
};
void Array::Create_Array(int* arr, int num)
{

	for (int i = 0; i < num; i++)
	{
		cin >> *(arr+i);
	}
}
void Array::Get_Array(int* arr, int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << *(arr + i);
		cout << " ";
	}

}
void Array::Get_Array_Element(int* arr, int num, int x)
{
	int* temp = NULL;
	temp = &x;
	int count = 0;
	int found = 0;
	for (int i = 0; i < num; i++)
	{
		if (arr[i] == *temp)
		{
			found = 1;
			break;
		}
		count++;

	}
	if (found == 1)
	{
		cout << "Element  " << x << "  is present at the position  " << count;

	}
	else
		cout << "Error element not found :/ \n";


}
void Array::Update(int*ary, int num, int x, int y)
{
	
	//cout << **temp3 << endl;
	for (int i = 0; i < num; i++)
	{
		if (ary[i] == x)
		{
			
			*(ary + i) = NULL;
			*(ary + i) = y;
			
			return;
		}
		

	}
	

}
void Array::Length(int* ary, int num)
{
	int length = 0;
	for (int i = 0; i < ary[i] != -1; i++)
	{
		length++;
	}
	cout << length << endl;
}
void Array::Add(int* ary, int num, int sizz, int val)
{
	
	if (num == sizz)
	{
		cout << "Array is out of space \n";
	}
	else 
		for (int i = 0; i < num+1; i++)
		{
			if (i == num + 1)
			{
				*(ary + i+1) = val;
				return;
			}
			
		}
	
}
void Array::Remove(int* ary, int num, int val)
{
	int** temp = &ary;
	for (int i = 0; i < num; i++)
	{
		if (ary[i] = val) {
			*(ary + i) = NULL;
			for (int j = *(ary+i); j < num - 1; j++)
			{
				*(ary + i) = *(ary + i + 1);
				if (**temp == num - 1)
					**temp = NULL;

				**temp++;
			}

		   
		}
			
		**temp++;
	}

}
void Array::back(int* ary, int num, int val)
{
	int** temp = &ary;
	if (val == *ary)
		cout << "This is the first value of the array you can't do back \n";
	else 
		for (int i = 0; i < num; i++)
		{
			if(ary[i] == val)
			{
				
				cout << **temp-- << endl;
				return;
			}
			**temp++;
		}
}
void Array::next(int* ary, int num, int val)
{
	int** temp = &ary;
	if (val ==num-1)
		cout << "This is the last value of the array you can't go further  \n";
	else
		for (int i = 0; i < num; i++)
		{
			if (ary[i] == val)
			{
				cout << **temp++ << endl;
				return;
			}
			**temp++;
		}
}
void Array::start(int *ary,int num)
{
	int** temp = &ary;
	cout << **temp << endl;
}
void Array::Display()
{
	Array obj;
	int* Arr = NULL;
	int update = 0;
	int old = 0;
	int size = 0;
	int number = 0;
	int del = 0;
	int newww=0;
	int any = 0;
	int ok = 0;
	Arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		Arr[i] = INT_MIN;
	}
	cout << "Enter size of your list \n";
	cin >> size;
	cout << "Enter the number of elements you want to add inside the array \n";
	cin >> number;
	if (number > size)
	{
		cout << "Error your exceeding the size of the array \n";
		return;
	}
	if (number <= size)
	{
		cout << "Enter elements inside your array \n";
		obj.Create_Array(Arr, number);
		cout << "Elements inside your entered list are \n";
		obj.Get_Array(Arr, number);
		cout << endl;
		cout << endl;
		cout << "Enter the element you want to get inside the array \n";
		int bingo;
		cin >> bingo;
		obj.Get_Array_Element(Arr, number, bingo);
		cout << endl;
		cout << endl;
		cout << "Enter the number you want to replace inside the array \n";
		cin >> old;
		cout << "Enter the new element inside the array \n";
		cin >> update;
		obj.Update(Arr, number, old, update);
		cout << "Updated array is \n";
		Get_Array(Arr, number);
		cout << endl;
		cout << endl;
		cout << "The length of array is \n";
		obj.Length(Arr,number);
		cout << "Enter the new element inside the array \n";
		cin >> newww;
		obj.Add(Arr, number, size, newww);
		cout << "New array is \n";
		cout << endl;
		cout << endl;
		obj.Get_Array(Arr,number);
		cout << "Enter the element you want to delete \n";
		cin >> del;
	    obj.Remove(Arr, number, del);
		cout << endl;
		cout << endl;
		cout << "Enter any value from the array \n";
		cin >> any;
		cout << "Value previous to " << any << " is \n";
		obj.back(Arr, number, any);
		cout << endl;
		cout << endl;
		cout << "Enter any value from array \n";
		cin >> ok;
		cout << "Value next to " << ok << " is \n";
		obj.next(Arr, number, ok);
		cout << endl;
		cout << endl;
		cout << "Starting element of the array is \n";
		obj.start(Arr, number);

	}


	return;
}
int  main()
{
	Array arrobj;
	arrobj.Display();

	return 0;
}