#include <stdio.h>
#include <string.h>

int main() {

float earthWeight;
int planetNumber;
float relativeGravity;

printf("Please input your earth weight.\n");
scanf("%f", &earthWeight);

printf("Please enter the number of the planet you would like to fight on.\n");
scanf("%i", &planetNumber);

char planetName[50];

switch(planetNumber){
case 1:
  relativeGravity = .38;
  char mercury[] = "Mercury";
  strcpy(planetName, mercury);
  break;
case 2:
  relativeGravity = .91;
  char venus[] = "Venus";
  strcpy(planetName, venus);
  break;
case 3:
  relativeGravity = .38;
  char mars[] = "Mars";
  strcpy(planetName, mars);
  break;
case 4:
  relativeGravity = 2.34;
  char jupiter[] = "Jupiter";
  strcpy(planetName, jupiter);
  break;
case 5:
  relativeGravity = 1.06;
  char saturn[] = "Saturn";
  strcpy(planetName, saturn);
  break;
case 6:
  relativeGravity = .92;
  char uranus[] = "Uranus";
  strcpy(planetName, uranus);
  break;
case 7:
  relativeGravity = 1.19;
  char neptune[] = "Neptune";
  strcpy(planetName, neptune);
  break;
}

float weightOnOtherPlanet = earthWeight * relativeGravity;

printf("Your weight on %s is %f kg.", planetName, weightOnOtherPlanet);

}