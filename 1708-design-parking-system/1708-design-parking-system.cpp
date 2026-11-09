class ParkingSystem {
public:
    unordered_map<int,int> ma;
    ParkingSystem(int big, int medium, int small) {
        ma[1]=big;
        ma[2] = medium;
        ma[3] = small;
        
    }
    
    bool addCar(int carType) {
        if (ma[carType]>0){
            ma[carType]--;
            return true;}
        else
            return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */