#include<iostream> 
using namespace std; 

int main() 
{ 
    int m; //process 
    int n; //block

    cout<<"Enter no of process: ";
    cin>>m;
    cout<<"Enter no of block: ";
    cin>>n;
    int blockSize[n];
    int processSize[m];

    cout<<"enter Process size: ";
    for(int i=0;i<m;i++){
        cin>>processSize[i];
    }
    cout<<"enter block size: ";
    for(int i=0;i<n;i++){
        cin>>blockSize[i];
    }

	int allocation[n]; 

	for (int i = 0; i < n; i++) 
		allocation[i] = -1; 

	for (int i = 0; i < n; i++) 
	{ 
		
		int bestIdx = -1; 
		for (int j = 0; j < m; j++) 
		{ 
			if (blockSize[j] >= processSize[i]) 
			{ 
				if (bestIdx == -1) 
					bestIdx = j; 
				else if (blockSize[bestIdx] > blockSize[j]) 
					bestIdx = j; 
			} 
		} 
 
		if (bestIdx != -1) 
		{ 
	
			allocation[i] = bestIdx; 

		
			blockSize[bestIdx] -= processSize[i]; 
		} 
	} 

	cout << "\nProcess No.\tProcess Size\tBlock no.\n"; 
	for (int i = 0; i < n; i++) 
	{ 
		cout << " " << i+1 << "\t\t" << processSize[i] << "\t\t"; 
		if (allocation[i] != -1) 
			cout << allocation[i] + 1; 
		else
			cout << "Not Allocated"; 
		cout << endl; 
	}  

	return 0 ; 
}
