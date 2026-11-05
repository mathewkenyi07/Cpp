
// smart home control as the parent class
// datafields roomNo, alerttype
// security system 
// temperature control

#include <iostream>
using namespace std;



class Security {
    private:
    int roomNo;

    public:
    //setter function for room number
    void setRoomNo(int newNO){
        roomNo = newNO;
    }

    //getter function for room number

    int getRoomNo(){
        return roomNo;
    }   
};

class Temperature {
    private:
    double current;
    double maximum;

    public:
    //setter function for current temperature
    void setCurrent(double newCurrent){
        current = newCurrent;
    }

    //getter function for current temperature
    double getCurrent(){
        return current;
    }

    //setter function for maximum temperature
    void setMaximum(double newMax){
        maximum = newMax;
    }

    //getter function for maximum temperature
    double getMaximum(){
        return maximum;
    }
};


class SmartController: public Security, public Temperature {
    private:
    string goodAlert;
    string badAlert;

    public:

    //setter function for alertType 
    void setGoodAlert(string newAlert){
        goodAlert = newAlert;
    }

    //getter for alertType
    string getGoodAlert(){
        return goodAlert;
    }

    //setter function for alertType 
    void setBadAlert(string newAlert){
        badAlert = newAlert;
    }

    //getter for alertType
    string getBadAlert(){
        return badAlert;
    }
};


int main(){
    double max,cur;
    string good,bad;


    SmartController house1;
    house1.setRoomNo(2);
    house1.setCurrent(30);
    house1.setMaximum(32);
    cur = house1.getCurrent();
    max = house1.getMaximum();


    house1.setGoodAlert("emergency");
    house1.setBadAlert("Normal");
    bad = house1.getBadAlert();
    good = house1.getGoodAlert();
     

    cout << "Room number: " << house1.getRoomNo() << endl;
    cout << "Current Temperature: " << cur << endl;
    cout << "Maximum Temperature: " << max << endl;

    if (cur >= max){
        cout << "Alert" << bad << endl;
    }
    else {
        cout << "Alert: " << good << endl;
    }

    return 0;
}