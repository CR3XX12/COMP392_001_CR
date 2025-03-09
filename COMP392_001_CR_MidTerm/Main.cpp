#include "ComercialPlane.h"
#include "FighterJet.h"

int main() {
    // Array of Aircraft pointers
    Aircraft* fleet[4];

    // Create CommercialPlanes and FighterJets dynamically
    fleet[0] = new ComercialPlane("Airbus A380", 560, 32000);
    fleet[1] = new FighterJet("F-22 Raptor", 1500, 18000);
    fleet[2] = new ComercialPlane("Boeing 737", 540, 26000);
    fleet[3] = new FighterJet("F-16 Falcon", 1500, 7000);

    // Loop through array and call fly() (Polymorphism in action)
    for (int i = 0; i < 4; i++) {
        fleet[i]->fly();
    }

    // Cleanup
    for (int i = 0; i < 4; i++) {
        delete fleet[i];
    }

    return 0;
}
