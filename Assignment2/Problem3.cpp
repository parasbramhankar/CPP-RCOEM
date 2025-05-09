#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int div1[20], div2[20], div3[20];
    int n = 20;

    // input scores for Div. 1
    cout << "Enter scores for Div. 1: ";
    for (int i = 0; i < n; i++) {
        cin >> div1[i];
    }

    // input scores for Div. 2
    cout << "Enter scores for Div. 2: ";
    for (int i = 0; i < n; i++) {
        cin >> div2[i];
    }

    // input scores for Div. 3
    cout << "Enter scores for Div. 3: ";
    for (int i = 0; i < n; i++) {
        cin >> div3[i];
    }

    //average
    double avg1 = 0, avg2 = 0, avg3 = 0;

    for (int i = 0; i < n; i++) {
        avg1 += div1[i];
        avg2 += div2[i];
        avg3 += div3[i];
    }

    avg1 /= n;
    avg2 /= n;
    avg3 /= n;

    //standard deviation 
    double sd1 = 0, sd2 = 0, sd3 = 0;

    for (int i = 0; i < n; i++) {
        sd1 += pow(div1[i] - avg1, 2);
        sd2 += pow(div2[i] - avg2, 2);
        sd3 += pow(div3[i] - avg3, 2);
    }

    sd1 = sqrt(sd1 / n);
    sd2 = sqrt(sd2 / n);
    sd3 = sqrt(sd3 / n);

    //coefficient of variation
    double cv1 = sd1 / avg1 * 100;
    double cv2 = sd2 / avg2 * 100;
    double cv3 = sd3 / avg3 * 100;

    //minimum coefficient of variation
    int minCv = cv1;
    int minDiv = 1;

    if (cv2 < minCv) {
        minCv = cv2;
        minDiv = 2;
    }

    if (cv3 < minCv) {
        minCv = cv3;
        minDiv = 3;
    }

    // print the results
    cout<<"Average marks of Div.1: "<<avg1<<endl;
    cout<<"Standard deviation of Div.1: "<<sd1<<endl;
    cout<<"Coefficient of variation of Div.1: "<<cv1<<endl;
    cout<<endl;

    cout<<"Average marks of Div.2: "<<avg2<<endl;
    cout<<"Standard deviation of Div.2: "<<sd2<<endl;
    cout<<"Coefficient of variation of Div.2: "<<cv2<<endl;
    cout<<endl;

    cout<<"Average marks of Div.3: "<<avg3<<endl;
    cout<<"Standard deviation of Div.3: "<<sd3<<endl;
    cout<<"Coefficient of variation of Div.3: "<<cv3<<endl;

    cout<<endl<<endl;
    cout << "Division with the minimum coefficient of variation: Div." << minDiv << endl;

    return 0;
}
