#include <iostream>
#include <string>

class HotelRoom {
public:
    // Function prototypes
    void searchHotels(string location);
    void viewHotelDetails(int hotelID);
    void bookRoom(int roomID, string date);
    void manageRoomAvailability(int roomID, string date, bool available);
    bool processPayment(double amount, string paymentMethod);

    // Other functions and data members can be added as needed
};
void searchHotels(string location, string date) {
        // Implement search logic
        cout << "Searching for hotels in " << location << " on " << date << std::endl;
       
    }
