#include <iostream>
#include <string> // Add this for string usage
using namespace std;

class PassengerDetails {
private:
    int num_passengers;
    struct Passenger {
        string name;
        int age;
    } *passenger_details;

public:
    PassengerDetails(int num_passengers) {
        this->num_passengers = num_passengers;
        passenger_details = new Passenger[num_passengers];
    }

    void collect_passenger_details() {
        for (int i = 0; i < num_passengers; ++i) {
            cout << "Enter passenger " << (i + 1) << " details (Name Age): ";
            cin >> passenger_details[i].name >> passenger_details[i].age;
        }
    }

    void display_passenger_details() {
        cout << num_passengers << "\n";
        for (int i = 0; i < num_passengers; ++i) {
            cout << passenger_details[i].name << " " << passenger_details[i].age << "\n";
        }
    }

    ~PassengerDetails() {
        delete[] passenger_details;
    }
};

class SeatBooking : public PassengerDetails {
private:
    int seat_availability;

public:
    SeatBooking(int num_passengers, int seat_availability = 5)
        : PassengerDetails(num_passengers), seat_availability(seat_availability) {}

    void display_seat_availability() {
        cout << "Available seats: " << seat_availability << "\n";
    }

    void book_ticket() {
        if (num_passengers <= seat_availability) {
            cout << "Confirmed\n";
            int payment_amount;
            cout << "Enter payment amount: ";
            cin >> payment_amount;
            if (payment_amount >= 200) {
                cout << "Successful\n";
                seat_availability -= num_passengers; // Decrement available seats
            } else {
                cout << "Payment amount is less than 200. Booking failed.\n";
            }
        } else {
            cout << "Not available\n";
        }
    }

    ~SeatBooking() {
        // No dynamic memory in SeatBooking, so no explicit destructor needed
    }
};

int main() {
    int num_passengers;
    cout << "Enter the number of passengers: ";
    cin >> num_passengers;

    PassengerDetails passenger(num_passengers);
    passenger.collect_passenger_details();
    passenger.display_passenger_details();

    SeatBooking booking(num_passengers);
    booking.display_seat_availability();
    booking.book_ticket();

    return 0;
}
