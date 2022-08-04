/*
 * PROJECT NAME : Electrical Engineering-Scientific Calculator
 * CREATED BY:    ABDURRAHMAN ZAIM (031018090) abdo.medo1000@gmail.com
                  BATIKAN YILDIZ    (031018026) btknn.tr.99@gmail.com
 ********ISTANBUL SABAHATTIN ZAIM UNIVERSITY********
 * Purpose: TO MAKE ALL THE BASIC MATHEMATICAL OPERATION
            AND TO CALCULATE THE TRIGONOMETRY CALCULATIONS
            ALSO TO HELP ELECTRICAL ENGINEERING BY GIVING MORE THAN ONE OPERATION FOR THEM.
 * Language:  C
 */
#include <string.h> //contains macro definitions, constants and declarations of functions and types

#include <stdio.h> // is a header file,that stands for standard input output header.

#include <math.h> // library of the C programming language designed for basic mathematical operations

#include <stdlib.h> // this library used for color of the program .

// HERE IS THE MAIN FUNCTION THAT IS INCLUDES THE WELCOME SCREEN AND THE MENU OF THE CALCULATOR
int main() {
    system("COLOR FC");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO OUR ELECTRICAL ENGINEERING-SCIENTIFIC CALCULATOR \xB2\xB2\xB2\xB2\xB2\xB2\xB2");

  while (1) {
    printf("\n\n\t\t\t\t\t\xB2 choose your operation \xB2");
    printf("\n\n\n\t\t\t\ 1 -> Basic Operations \n\n\n\t\t\t\ 2 -> Trigometry Calculator \n\n\n\t\t\t\ 3 -> Electronical Calculator \n\n\n\t\t\t\ 4 -> exit\n->");
    // FUNCTION OF TAKING THE CHOISES.
    int choice;
    // GETING THE CHOISE
    scanf("\n\n\n\t\t\t\ %d", & choice);
    // ENTIRING TO THE CHOISES .
    switch (choice) {
    case 1:
      basicOperation();
      break;
    case 2:
      trigometryCalculator();
      break;
    case 3:
      electronicalCalculator();
      break;
    case 4:
      exit(0);
    default:
      printf("unknown input");
      break;
    }
  }
}
// HERE IS THE FIRST FUNCTION THAT CALCULATE BY ADDING , SUBTRACTING ,MULTIPLICATION AND DIVISION .
void basicOperation() {
  // FUNCTIONS OF BASIC CALCULATING .
  int num1, num2;
  float result;
  char ch; //to store operator choice
  // TAKING THE FIRST AND SECOND NUMBER TO CALCULAT THEM .
  printf("\n\n\n\t\t\t\ Enter first number: ");
  scanf("%d", & num1);
  printf("\n\t\t\t\ Enter second number: ");
  scanf("%d", & num2);
  // CHOISE THE OPRATION MENU .
  printf("Choose operation to perform (+,-,*,/,%): ");
  scanf(" %c", & ch);

  result = 0;
  // BASIC MATH OPERATION METHODS
  switch (ch) {
  case '+':
    result = num1 + num2;
    break;

  case '-':
    result = num1 - num2;
    break;

  case '*':
    result = num1 * num2;
    break;

  case '/':
    result = (float) num1 / (float) num2;
    break;

  case '%':
    result = num1 % num2;
    break;
  default:
    printf("Invalid operation.\n");
  }

  printf("Result: %d %c %d = %.2f\n", num1, ch, num2, result);
  return 0;
}
// HERE IS THE FUNCTION WHICH INCLUDED THE BASIC VALUES FOR TRIGONOMETRY THAT CONNECTED TO <math.h> LIBRARY .
float calculate(float x, char trig) {
  float value;
  switch (trig) {
  case 's':
    value = sin(x);
    break;

  case 'c':
    value = cos(x);
    break;

  case 't':
    value = tan(x);
    break;

  case 'k':
    value = sinh(x);
    break;

  case 'l':
    value = cosh(x);
    break;

  case 'o':
    value = tanh(x);
    break;

  default:
    value = 0;
  }

  return value;
}
// HERE IS THE SECOND FUNCTION THAT IS CALCULATE THE TRIGONOMETRIC CALCULATION  sin,cos,tan,sinh,cosh,tanh .
void trigometryCalculator() {
  // FUNCTIONS OF TRIGOMETRY CALCULATING .
  float x;
  char trig;
  //  CALLING THE FUNCTIONS OF TRIGOMETRY CALCULATING .
  while (1) {
    printf("\n\n\n\t\t\t WHICH TRIGONOMETRIC YOU WANT TO CALCULATE");
    printf("\n\n\t\t\t Type the choises in lowercase letters only, NO CAPS.\n");
    printf("\n\t\t\t Enter your choice\n");
    printf("\n\t\t\t   s -> sin \t c -> cos \n\t\t\t   t -> tan \t k -> sinh \n\t\t\t   l -> cosh \t o -> tanh\n\t\t\t   r -> return\n->");
    scanf(" %c", & trig);

    if (trig == 'r')
      break;

    printf("enter the value\n->");
    scanf(" %f", & x);
    float y = calculate((x * M_PI) / 180, trig);

    printf("The value for (%f) is : %f \n", x, y);
  }
}
// HERE IS THE THIRD FUNCTION MENU THAT INCLUDES ELECTRONIC CALCULATING CHOICES.
void electronicalCalculator() {
  while (1) {
    // TAKING THE OPERRATION .
    printf("\n\n\n\t\t\t choose your operation");
    printf("\n\n\t\t\t 1 -> Rresistor Calculator \n\n\t\t\t 2 -> Ohm Lows Calculator \n\n\t\t\t 3 -> Resistor Color Calculator \n\n\t\t\t 4 -> return\n->");
    // FUNCTION THAT USED /
    int choice;
    scanf(" %d", & choice);
    // CHOICES MENU OF THE THIRD OPERATION .
    switch (choice) {
    case 1:
      resistorCalculator();
      break;
    case 2:
      ohmLowsCalculator();
      break;
    case 3:
      resistorColorCalculator();
      break;
    case 4:
      return;
    default:
      printf("unknown input");
      break;
    }
  }
}
// HERE IS THE FIRST BRANCH OF THE ELECTRONIC CALCULATOR TYPE THAT IT CALCULATE THE PARALLEL AND SERIES RESISTANCE VALUES .
void resistorCalculator() {
  // FUNCTIONS OF OPRATION CHOISES.
  char opration;
  int count;
  float res = 0;
  printf("\n\n\n\t\t\t Chose your opration");
  printf("\n\t\t\t   p -> paralel adding \n\t\t\t   s -> serial adding\n->");
  scanf(" %c", & opration);
  // TAKING THE ORDER.
  printf("\n\n\n\t\t\t please enter the number of resistors\n->");
  scanf(" %d", & count);
  // RESISTORS ADDING OPERATION .
  for (int i = 0; i < count; i++) {
    float v;
    printf("R %d -> ", i + 1);
    scanf(" %f", & v);

    switch (opration) {
    case 'p':
      res = res + (1 / v);
      break;
    case 's':
      res = res + v;
      break;
    }
  }

  if (opration == 'p')
    res = 1 / res;

  printf("\n result %f ohm \n", res);

  return (0);
}
// HERE IS THE SECOND BRANCH OF THE ELECTRONIC CALCULATOR TYPE THAT IT Calculate Power, Current, Voltage or Resistance BY OHM'S LAW .
void ohmLowsCalculator() {
  // FUNCTIONS OF OHM'S LOW .
  float I, V, R;
  float Value_of_Current;
  float Value_of_Voltage;
  float Value_of_Resistance;
  int option;
  // CHOISE THE NEDEED VALUE .
  printf("\n\n\n\t\t\t Enter 1 for Current 2 for Voltage: 3 for Resistance\n->");
  scanf("%d", & option);
  // ENTERING THE AVAILABLE VALUES .
  if (option == 1) {
    printf("Enter the value of Voltage\n");
    scanf("%f", & V);
    printf("Enter the value of Resitance\n");
    scanf("%f", & R);

    Value_of_Current = (V / R);

    printf("Value_of_Current\n%f Amper\n", Value_of_Current);
  } else if (option == 2) {
    printf("Enter the value of Current\n");
    scanf("%f", & I);
    printf("Enter the value of Resistance\n");
    scanf("%f", & R);

    Value_of_Voltage = (I * R);

    printf("Value of Voltage\n%f Volt", Value_of_Voltage);
  } else if (option == 3) {
    printf("Enter the value of Voltage\n");
    scanf("%f", & V);
    printf("Enter the value of Current\n");
    scanf("%f", & I);

    Value_of_Resistance = V / I;

    printf("Value of    Resistance\n%f Ohm", Value_of_Resistance);
  }
  return;
}
// HERE THE DEFINED MENU OF RESISTORS BAND ITEM .
enum resistor_band_items {
  BLACK,
  BROWN,
  RED,
  ORANGE,
  YELLOW,
  GREEN,
  BLUE,
  VIOLET,
  GRAY,
  WHITE
};
// HERE IS THE FUNCTION POINTER WHICH ALLOWED STORING DATA OF RESISTORS COLORS TOGETHER.
struct items {
  // THE FUNCTION THAT USED TO SAVE THE COLOR
  char name;
  int value;
  enum resistor_band_items id;
}
item_list[] = {
  {
    'b',
    0,
    BLACK
  },
  {
    'n',
    1,
    BROWN
  },
  {
    'r',
    2,
    RED
  },
  {
    'o',
    3,
    ORANGE
  },
  {
    'y',
    4,
    YELLOW
  },
  {
    'g',
    5,
    GREEN
  },
  {
    'u',
    6,
    BLUE
  },
  {
    'v',
    7,
    VIOLET
  },
  {
    'a',
    8,
    GRAY
  },
  {
    'w',
    9,
    WHITE
  }
};
// HERE IS THE THIRD BRANCH OF THE ELECTRONIC CALCULATOR THAT IT CALCULATE THE VALUE OF ANY RESISTOR BY WRITING THE COLORS ON IT .
void resistorColorCalculator() {
  //THE FUNCTION THAT SAVE AND GIVE THE VALUE OF RESISITORS.
  char answer;
  int colour[3];
  int result = 0;
  // THE GUIDE OF CALCULATING THE RESRISTORS .
  printf("\n\n\t\t\t Enter the colours of the resistor's three bands");
  printf("\n\n\t\t\t Beginning with the band nearest to the end.");
  printf("\n\n\t\t\t Type the coloues in lowercase letters only, NO CAPS.\n\n\n\t\t\t\t");
  printf("\n\n\t\t\t   b -> BLACK \t n -> BROWN  \n\t\t\t   r -> RED  \t o -> ORANGE  \n\t\t\t   y -> YELLOW \t g -> GREEN  \n\t\t\t   u -> BLUE \t g -> VIOLET \n\t\t\t   a -> GRAY  \t w -> WHITE\n\n");
  // RESISITOR COLOR OPRATION .
  for (int j = 0; j < 3; j++) {
    printf("Band %d => ", j + 1);
    scanf(" %c", & answer);

    for (int i = 0; i < 10; ++i) {
      if (answer == item_list[i].name) {
        if (j < 2) {
          result = result * 10 + item_list[i].value;
        } else {
          for (int l = 0; l < item_list[i].value; l++)
            result = result * 10;
        }

        break;
      }
    }
  }

  printf(" your resistor value is %d ohm\n", result);
}
