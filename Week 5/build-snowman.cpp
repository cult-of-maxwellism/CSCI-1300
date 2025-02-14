#include<iostream>

using namespace std;

int calculateTime(int targetSize) {
    int time = 0;
    while (targetSize > 0){
        time++;
        targetSize = targetSize-time;
    }
    return (time);
}

int main () {
    int head, body, lowbody;

    cout << "Enter head size:" << endl;
    cin >> head;
    while (head <= 0) {
        cout << "Please enter a positive integer for head size:" << endl;
        cin >> head;
    }    
    head = calculateTime(head);

    cout << "Enter mid-body size:" << endl;
    cin >> body;
    while (body <= 0) {
        cout << "Please enter a positive integer for mid-body size:" << endl;
        cin >> body;
    }    
    body = calculateTime(body);

    cout << "Enter lower-body size:" << endl;
    cin >> lowbody;
    while (lowbody <= 0) {
        cout << "Please enter a positive integer for lower-body size:" << endl;
        cin >> lowbody;
    }    
    lowbody = calculateTime(lowbody);

    cout << "Time to reach head size: " << head << " seconds" << endl;
    cout << "Time to reach mid-body size: " << body << " seconds" << endl;
    cout << "Time to reach lower-body size: " << lowbody << " seconds" << endl;
    cout << "Total time to create the snowman: " << (head+body+lowbody) << " seconds" << endl;
}