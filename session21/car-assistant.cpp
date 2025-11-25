#include <iostream>
using namespace std;

class CarAssistant
{
private:
    string driverName;
    float preferredTemperature;
    string favouriteSong;

public:
    // Constructor
    CarAssistant(string name, float temp, string song)
    {
        driverName = name;
        preferredTemperature = temp;
        favouriteSong = song;
    }

    // Greet the driver
    void greetDriver()
    {
        cout << "Hello, " << driverName << "! Welcome back!" << endl;
    }

    // Set temperature
    void adjustTemperature()
    {
        cout << "Setting cabin temperature to " << preferredTemperature << " degrees Celsius." << endl;
    }

    // Play favourite song
    void suggestSong()
    {
        cout << "Playing your favourite song: " << favouriteSong << endl;
    }

    // Destructor
    ~CarAssistant()
    {
        cout << "Car Assistant shutting down for driver: " << driverName << endl;
    }
};

int main()
{
    CarAssistant assistant("John", 22.5, "Imagine by John Lennon");

    assistant.greetDriver();
    assistant.adjustTemperature();
    assistant.suggestSong();

    return 0;
}