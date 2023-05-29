class ParkingSystem {
    private: int big,med,small;
public:
   
   
    ParkingSystem(int big, int medium, int small) {
        this->big=big;
        this->med=medium;
        this->small=small;
    }
    
    bool addCar(int carType) {
        if(carType==1&&big>=1)
        {
            big-=1;
            return true;
        }
       else if(carType==2&&med>=1)
        {
            med-=1;
            return true;
        }
        else if(carType==3&&small>=1)
        {
            small-=1;
            return true;
        }
        else
            return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */