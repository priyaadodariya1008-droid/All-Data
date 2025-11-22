#include <iostream>
using namespace std;

class Vehicle {
public:
    int vehicleID;
    string manufacturer;
    string model;
    int year;

    static int totalVehicles;

    Vehicle() {
        vehicleID = 0;
        manufacturer = "";
        model = "";
        year = 0;
        totalVehicles++;
    }

    ~Vehicle() {}

    void setData(int id, string man, string mod, int yr) {
        vehicleID = id;
        manufacturer = man;
        model = mod;
        year = yr;
    }

    int getID() {
        return vehicleID;
    }

    virtual void display() {
        cout << "Vehicle ID: " << vehicleID << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int Vehicle::totalVehicles = 0;

class Car : public Vehicle {
public:
    string fuelType;

    Car() { fuelType = ""; }

    void display() {
        Vehicle::display();
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class ElectricCar : public Car {
public:
    int batteryCapacity;

    ElectricCar() { batteryCapacity = 0; }

    void display() {
        Car::display();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

class SportsCar : public ElectricCar {
public:
    int topSpeed;

    SportsCar() { topSpeed = 0; }

    void display() {
        ElectricCar::display();
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
    }
};

class Sedan : public Car {
public:
    Sedan() {}
};

class SUV : public Car {
public:
    SUV() {}
};

class Aircraft : public Vehicle {
public:
    int flightRange;

    Aircraft() { flightRange = 0; }

    void display() {
        Vehicle::display();
        cout << "Flight Range: " << flightRange << " km" << endl;
    }
};

class FlyingCar : public Vehicle {
public:
    string mode;

    FlyingCar() { mode = ""; }

    void display() {
        Vehicle::display();
        cout << "Mode: " << mode << endl;
    }
};

class VehicleRegistry {
public:
    Vehicle* vehicles[100];
    int count;

    VehicleRegistry() { count = 0; }

    void addVehicle(Vehicle* v) {
        vehicles[count++] = v;
    }

    void displayAll() {
        if (count == 0) {
            cout << "No vehicles added yet.\n";
            return;
        }

        for (int i = 0; i < count; i++) {
            cout << "\n--- Vehicle " << (i + 1) << " ---\n";
            vehicles[i]->display();
        }
    }

    void searchByID(int id) {
        for (int i = 0; i < count; i++) {
            if (vehicles[i]->getID() == id) {
                cout << "\nVehicle Found:\n";
                vehicles[i]->display();
                return;
            }
        }
        cout << "Vehicle not found.\n";
    }
};

int main() {
    VehicleRegistry reg;
    int choice;

    while (true) {
        cout << "\n=== Vehicle Registry Menu ===\n";
        cout << "1. Add Vehicle\n";
        cout << "2. View All Vehicles\n";
        cout << "3. Search by ID\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int type;
            cout << "\nSelect Vehicle Type:\n";
            cout << "1. Car\n2. Electric Car\n3. Aircraft\n4. Flying Car\n";
            cout << "5. Sports Car\n6. Sedan\n7. SUV\n";
            cout << "Enter: ";
            cin >> type;

            int id, yr;
            string man, mod;

            cout << "Enter Vehicle ID: ";
            cin >> id;
            cout << "Manufacturer: ";
            cin >> man;
            cout << "Model: ";
            cin >> mod;
            cout << "Year: ";
            cin >> yr;

            Vehicle* v = NULL;

            if (type == 1) {
                Car* c = new Car();
                c->setData(id, man, mod, yr);
                cout << "Fuel Type: ";
                cin >> c->fuelType;
                v = c;
            }
            else if (type == 2) {
                ElectricCar* e = new ElectricCar();
                e->setData(id, man, mod, yr);
                cout << "Fuel Type: ";
                cin >> e->fuelType;
                cout << "Battery Capacity: ";
                cin >> e->batteryCapacity;
                v = e;
            }
            else if (type == 3) {
                Aircraft* a = new Aircraft();
                a->setData(id, man, mod, yr);
                cout << "Flight Range: ";
                cin >> a->flightRange;
                v = a;
            }
            else if (type == 4) {
                FlyingCar* f = new FlyingCar();
                f->setData(id, man, mod, yr);
                cout << "Mode: ";
                cin >> f->mode;
                v = f;
            }
            else if (type == 5) {
                SportsCar* s = new SportsCar();
                s->setData(id, man, mod, yr);
                cout << "Fuel Type: ";
                cin >> s->fuelType;
                cout << "Battery Capacity: ";
                cin >> s->batteryCapacity;
                cout << "Top Speed: ";
                cin >> s->topSpeed;
                v = s;
            }
            else if (type == 6) {
                Sedan* s = new Sedan();
                s->setData(id, man, mod, yr);
                cout << "Fuel Type: ";
                cin >> s->fuelType;
                v = s;
            }
            else if (type == 7) {
                SUV* u = new SUV();
                u->setData(id, man, mod, yr);
                cout << "Fuel Type: ";
                cin >> u->fuelType;
                v = u;
            }

            reg.addVehicle(v);
        }

        else if (choice == 2) {
            reg.displayAll();
        }

        else if (choice == 3) {
            int id;
            cout << "Enter ID: ";
            cin >> id;
            reg.searchByID(id);
        }

        else if (choice == 4) {
            cout << "Exiting...\n";
            break;
        }
    }

    return 0;
}







// #include <iostream>
// using namespace std;

// class Vehicle {
// public:
//     int vehicleID;
//     string manufacturer;
//     string model;
//     int year;

//     string typeName;    
//     string fuelType;     
//     int batteryCapacity; 
//     int topSpeed;        
//     int flightRange;     
//     string mode;         

//     Vehicle() {
//         vehicleID = 0;
//         manufacturer = "";
//         model = "";
//         year = 0;

//         typeName = "";
//         fuelType = "";
//         batteryCapacity = 0;
//         topSpeed = 0;
//         flightRange = 0;
//         mode = "";
//     }

//     void setBasic(int id, string man, string mod, int yr) {
//         vehicleID = id;
//         manufacturer = man;
//         model = mod;
//         year = yr;
//     }

//     void display() {
//         cout << "\nVehicle ID: " << vehicleID << endl;
//         cout << "Manufacturer: " << manufacturer << endl;
//         cout << "Model: " << model << endl;
//         cout << "Year: " << year << endl;
//         cout << "Type: " << typeName << endl;

//         if (typeName == "Car" || typeName == "Sedan" || typeName == "SUV")
//             cout << "Fuel Type: " << fuelType << endl;

//         if (typeName == "ElectricCar" || typeName == "SportsCar")
//             cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;

//         if (typeName == "SportsCar")
//             cout << "Top Speed: " << topSpeed << " km/h" << endl;

//         if (typeName == "Aircraft")
//             cout << "Flight Range: " << flightRange << " km" << endl;

//         if (typeName == "FlyingCar")
//             cout << "Mode: " << mode << endl;
//     }
// };

// class VehicleRegistry {
// public:
//     Vehicle vehicles[100];
//     int count;

//     VehicleRegistry() {
//         count = 0;
//     }

//     void addVehicle(Vehicle v) {
//         vehicles[count] = v;
//         count++;
//     }

//     void displayAll() {
//         if (count == 0) {
//             cout << "No vehicles available.\n";
//             return;
//         }

//         for (int i = 0; i < count; i++) {
//             vehicles[i].display();
//         }
//     }

//     void searchByID(int id) {
//         for (int i = 0; i < count; i++) {
//             if (vehicles[i].vehicleID == id) {
//                 cout << "\nVehicle Found:\n";
//                 vehicles[i].display();
//                 return;
//             }
//         }
//         cout << "Vehicle not found.\n";
//     }
// };

// int main() {
//     VehicleRegistry reg;
//     int choice;

//     while (true) {
//         cout << "\n=== Vehicle Registry Menu ===\n";
//         cout << "1. Add Vehicle\n";
//         cout << "2. View All\n";
//         cout << "3. Search by ID\n";
//         cout << "4. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         if (choice == 1) {
//             int type;
//             Vehicle v;

//             cout << "\nSelect Type:\n";
//             cout << "1. Car\n2. Electric Car\n3. Aircraft\n4. Flying Car\n";
//             cout << "5. Sports Car\n6. Sedan\n7. SUV\n";
//             cout << "Enter type: ";
//             cin >> type;

//             int id, yr;
//             string man, mod;

//             cout << "Vehicle ID: ";
//             cin >> id;
//             cout << "Manufacturer: ";
//             cin >> man;
//             cout << "Model: ";
//             cin >> mod;
//             cout << "Year: ";
//             cin >> yr;

//             v.setBasic(id, man, mod, yr);

//             if (type == 1) {
//                 v.typeName = "Car";
//                 cout << "Fuel Type: ";
//                 cin >> v.fuelType;
//             }
//             else if (type == 2) {
//                 v.typeName = "ElectricCar";
//                 cout << "Fuel Type: ";
//                 cin >> v.fuelType;
//                 cout << "Battery Capacity: ";
//                 cin >> v.batteryCapacity;
//             }
//             else if (type == 3) {
//                 v.typeName = "Aircraft";
//                 cout << "Flight Range: ";
//                 cin >> v.flightRange;
//             }
//             else if (type == 4) {
//                 v.typeName = "FlyingCar";
//                 cout << "Mode: ";
//                 cin >> v.mode;
//             }
//             else if (type == 5) {
//                 v.typeName = "SportsCar";
//                 cout << "Fuel Type: ";
//                 cin >> v.fuelType;
//                 cout << "Battery Capacity: ";
//                 cin >> v.batteryCapacity;
//                 cout << "Top Speed: ";
//                 cin >> v.topSpeed;
//             }
//             else if (type == 6) {
//                 v.typeName = "Sedan";
//                 cout << "Fuel Type: ";
//                 cin >> v.fuelType;
//             }
//             else if (type == 7) {
//                 v.typeName = "SUV";
//                 cout << "Fuel Type: ";
//                 cin >> v.fuelType;
//             }

//             reg.addVehicle(v);
//         }

//         else if (choice == 2) {
//             reg.displayAll();
//         }

//         else if (choice == 3) {
//             int id;
//             cout << "Enter vehicle ID: ";
//             cin >> id;
//             reg.searchByID(id);
//         }

//         else if (choice == 4) {
//             cout << "Exiting...\n";
//             break;
//         }
//     }

//     return 0;
// }