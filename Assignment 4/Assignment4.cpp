
#include <iostream>
using namespace std;

class CrossTheBridge
{
public:
    int boxWeight[50];
    int numOfBoxes;
    int carryCapacity;
    int maxWeight;

    void sort(int boxWeight[])
    {
        for (int i = 0; i < numOfBoxes - 1; ++i)
        {
            for (int j = i + 1; j < numOfBoxes; ++j)
            {
                if (boxWeight[i] < boxWeight[j])
                {
                    int temp = boxWeight[i];
                    boxWeight[i] = boxWeight[j];
                    boxWeight[j] = temp;
                }
            }
        }
    }

    CrossTheBridge() //Constructor
    {
        numOfBoxes = 0;
        carryCapacity = 0;
        maxWeight = 0;
    }

    int leastNumber(int boxWeight[] )
    {
        sort(boxWeight); // Sort boxes in descending order of weight

        int trips = 0;
        int remaining = numOfBoxes;
        int index = 0;

        while (remaining > 0)
        {
            int currentWeight = 0;
            int boxesTaken = 0;

            while (index < numOfBoxes && boxesTaken < carryCapacity && currentWeight + boxWeight[index] <= maxWeight)
            {
                currentWeight += boxWeight[index];
                boxesTaken++;
                remaining--;
                index++;
            }

            trips++;
        }

        return trips;
    }
};

int main()
{
    int EmpNo;
    cout << "Enter the Number of Workers: ";
    cin >> EmpNo;

    for (int i = 1; i <= EmpNo; ++i)
    {
        CrossTheBridge obj;
        cout << "\nWorker " << i << ": " << endl;

        cout << "Enter the number of boxes: ";
        cin >> obj.numOfBoxes;

        int boxWeight[obj.numOfBoxes];

        cout << "Enter the weights of boxes: ";
        for (int i = 0; i < obj.numOfBoxes; ++i)
        {
            cin >> boxWeight[i];
        }

        cout << "Enter the carry capacity: ";
        cin >> obj.carryCapacity;

        cout << "Enter the maximum weight: ";
        cin >> obj.maxWeight;

        int result = obj.leastNumber(boxWeight);

        cout << "Minimum number of trips required: " << result << endl;
    }

    return 0;
}
