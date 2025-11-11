#include<iostream>
using namespace std;
class Train{
private:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    string trainTime;

    static int trainCount;

public:

    Train(){
        trainNumber = 0;
        trainName = "";
        source = "";
        destination = "";
        trainTime = "";
        trainCount++;
    }

    Train(int trainNumber, string trainName, string source, string destination, string trainTime){
        this->trainNumber=trainNumber;
        this->trainName=trainName;
        this->source=source;
        this->destination=destination;
        this->trainTime=trainTime;
    }

    ~Train(){
        trainCount--;
    }

    void inputTrainDetails(){
        cout<<"Enter Train Number:";
        cin>>trainNumber;
        cout<<"Enter Train Name:";
        cin>>trainName;
        cout<<"Enter Source:";
        cin>>source;
        cout<<"Enter Destination:";
        cin>>destination;
        cout<<"Enter Train Time:";
        cin>>trainTime;
        cout<<endl;
    }

    void displayTrainDetails(){
        cout<<"Train Number:"<<this->trainNumber<<endl;
        cout<<"Train Name:"<<this->trainName<<endl;
        cout<<"Source:"<<this->source<<endl;
        cout<<"Destination:"<<this->destination<<endl;
        cout<<"Train Time:"<<this->trainTime<<endl;
    }

    static int getTrainCount() {
        return trainCount;
    }
};

int Train :: trainCount=0;

int main(){
    cout<<"Train Count: "<<Train::getTrainCount()<<endl;

    Train t1;
    t1.inputTrainDetails();

    Train t2;
    t2.inputTrainDetails();

    Train t3(102, "Rajdhani Express", "Delhi", "Mumbai", "08:00 AM");

    cout<<"\nTrain 1 Details:";
    t1.displayTrainDetails();

    cout<<"\nTrain 2 Details:";
    t2.displayTrainDetails();

    cout<<"\nTrain 3 Details:";
    t3.displayTrainDetails();

    cout<<"\nTotal Train Count: "<<Train::getTrainCount()<<endl;

    return 0;
}