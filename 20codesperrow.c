// write a programme to input mass and valocity of a moving object,calculate its kinetic energy.

// C Program To Calculate Kinetic Energy
#include <stdio.h>
int main(){
    float mass, velocity, KE;
    
    // Asking for Input
    printf("Enter the mass of the object(in Kg): ");
    scanf("%f", &mass);
    printf("Enter the velocity of the object(in m/s): ");
    scanf("%f", &velocity);
    
    // Calculating Kinetic Energy
    if (mass > 0){
        KE = (0.5 * mass * velocity * velocity);
        printf("The Kinetic Energy of the object is %.2lf J.", KE);
    }
    else{
        printf("Mass cannot be Negative.");
    }
    return 0;
}
