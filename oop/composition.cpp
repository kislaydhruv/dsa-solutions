#include <iostream>
#include <vector>
#include <string>

using namespace std;

// The "Part" Class
class Room {
private:
    string name;

public:
    Room(string name) {
        this->name = name;
    }

    // A getter so we can print the name later
    string getName() {
        return name;
    }
};

// The "Whole" Class
class House {
private:
    // The House physically contains the list of rooms
    vector<Room> rooms;

public:
    House() {
        // COMPOSITION IN ACTION: 
        // The House takes full responsibility for building its own parts.
        rooms.push_back(Room("Living Room"));
        rooms.push_back(Room("Bedroom"));
        rooms.push_back(Room("Kitchen"));
    }

    void showHouse() {
        cout << "This house contains the following rooms:\n";
        for (Room r : rooms) {
            cout << "- " << r.getName() << "\n";
        }
    }
    
    // In C++, when a House object is destroyed, its 'rooms' vector 
    // and all the Room objects inside it are automatically destroyed as well.
};

int main() {
    cout << "--- Starting Construction ---\n";
    
    // 1. We ONLY create the House. 
    // Notice that we never type the word 'Room' anywhere in our main function.
    House myHouse; 
    
    // 2. We ask the house to show us what it built inside itself.
    myHouse.showHouse();

    cout << "\n--- End of Program (Demolition) ---\n";
    // 3. As the program ends, 'myHouse' is removed from memory.
    // Because of Composition, every Room inside it ceases to exist simultaneously.
    
    return 0;
}