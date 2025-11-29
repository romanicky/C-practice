#include <iostream>
using namespace std;

class CoffeeMachine
{
public:
    void makeEspresso()
    {
        boilWater(); // Internal steps (hidden from users)
        grindBeans();
        brew();
        cout << "Finished: Espresso ready!" << endl;
    }

    void makeLatte()
    {
        boilWater(); // Internal steps (hidden from users)
        grindBeans();
        brew();
        steamMilk(); // extra step for latte
        cout << "Finished: Latte ready!" << endl;
    }

private:
    void boilWater()
    {
        cout << "Boiling water..." << endl;
    }

    void grindBeans()
    {
        cout << "Grinding coffee beans..." << endl;
    }

    void brew()
    {
        cout << "Brewing coffee..." << endl;
    }

    void steamMilk()
    {
        cout << "Steaming milk..." << endl;
    }
};

int main()
{
    CoffeeMachine cm;

    // The user only intteracts with the simple piblic interface
    cm.makeEspresso();
    cm.makeLatte();

    return 0;
}
