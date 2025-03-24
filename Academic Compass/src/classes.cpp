#include "../include/classes.h"
#include <iostream>
#include <cstdlib>
#include <limits> // For numeric_limits
using namespace std;

void classesMenu() {
    system("cls");
    cout << "Menu is opening...." << endl;

    string answear1;
    string answear2;
    string answear3;
    string answear4;
    string answear5;
    int pointB = 0;
    int pointC = 0;
    int pointP = 0;
    int pointG = 0;
    int choice;

    do {
        cout << "\nChoose a class:\n";
        cout << "1. Biology\n";
        cout << "2. Chemistry\n";
        cout << "3. Physics\n";
        cout << "4. Geography\n";
        cout << "5. Back to the main menu\n";
        cout << "Enter the number of your class: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            system("cls");
            cout << "Menu is opening...." << endl;

            switch (choice) {
            case 1:
                cout << "Question 1 : What is the main function of mitochondria ? "; '\n';
                cout << "a) Photosynthesis\nb) Protein synthesis\nc) Energy production\nd) Water storage\n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 2 : What is the process by which plants produce oxygen called ? "; '\n';
                cout << "a) Photosynthesis\nb) Digestion\nc) Transpiration\nd) Respiration\n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 3 : What is the largest human organ ? "; '\n';
                cout << "a) Liver\nb) Brain\nc) Heart\nd) Skin\n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 4 : What kind of organisms are bacteria ? "; '\n';
                cout << "a) Eukaryotic\nb) Fungi\nc) Plants\nd) Prokaryotic\n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 5 : What is the genetic material in cells ? "; '\n';
                cout << "a) Proteins\nb) Lipids\nc) RNA (in most organisms)\nd) DNA \n";
                cout << "----------------------------------------------------------------------------------" << endl;

                cout << "Enter the answear to question 1:" << endl;
                cin >> answear1;
                if (answear1 == "c") {
                    pointB++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 2:" << endl;
                cin >> answear2;
                if (answear2 == "a") {
                    pointB++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 3:" << endl;
                cin >> answear3;
                if (answear3 == "d") {
                    pointB++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 4:" << endl;
                cin >> answear4;
                if (answear4 == "d") {
                    pointB++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 5:" << endl;
                cin >> answear5;
                if (answear5 == "d") {
                    pointB++;
                }

                cout << "__________________________________________________________________________________" << endl;
                cout << "You got : " << pointB << " points!" << endl;


                break;
            case 2:
                cout << "Question 1 : What is the chemical formula of water? "; '\n';
                cout << "a) CO₂\nb) NaCl\nc) O₂Hn\nd) H₂O \n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 2 : Which element has the chemical symbol 'O'? "; '\n';
                cout << "a) Carbon\nb) Hydrogen\nc) Oxygen\nd) Nitrogen\n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 3 : What is the pH of a neutral solution? "; '\n';
                cout << "a) 14\nb) 0\nc) 7\nd) 3\n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 4 : What type of reaction occurs when carbon burns? "; '\n';
                cout << "a) Decomposition\nb) Combustion\nc) Neutralization\nd) Precipitation\n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 5 : What is the chemical symbol for sodium ? "; '\n';
                cout << "a) So\nb) S\nc) Na\nd) K\n";
                cout << "----------------------------------------------------------------------------------" << endl;

                cout << "Enter the answear to question 1:" << endl;
                cin >> answear1;
                if (answear1 == "d") {
                    pointC++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 2:" << endl;
                cin >> answear2;
                if (answear2 == "c") {
                    pointC++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 3:" << endl;
                cin >> answear3;
                if (answear3 == "c") {
                    pointC++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 4:" << endl;
                cin >> answear4;
                if (answear4 == "d") {
                    pointC++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 5:" << endl;
                cin >> answear5;
                if (answear5 == "c") {
                    pointC++;
                }

                cout << "__________________________________________________________________________________" << endl;
                cout << "You got : " << pointC << " points!" << endl;
                break;
            case 3:
                cout << "Question 1 : What is the basic unit of measurement of mass in the SI system? "; '\n';
                cout << "a) Gram\nb) Pound\nc) Kilogram\nd) Newton \n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 2 : What phenomenon does Newton's third law describe ? "; '\n';
                cout << "a) Inertia\nb) Acceleration due to gravity\nc) Action-reaction pairs\nd) The relationship between force, mass, and acceleration\n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 3 : What is the speed of light in a vacuum ? "; '\n';
                cout << "a) 3.00 x 10⁸ km/s\nb) 3.00 x 10⁵ m/s\nc) 3.00 x 10⁸ m/s\nd) 3.00 x 10⁵ km/s \n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 4 : Which physical quantity do we measure in joules ? "; '\n';
                cout << "a) Power\nb) Force\nc) Energy\nd) Voltage\n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 5 : What is the unit of measurement for force ? "; '\n';
                cout << "a) Watt\nb) Joule\nc) Newton\nd) Pascal\n";
                cout << "----------------------------------------------------------------------------------" << endl;

                cout << "Enter the answear to question 1:" << endl;
                cin >> answear1;
                if (answear1 == "c") {
                    pointP++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 2:" << endl;
                cin >> answear2;
                if (answear2 == "c") {
                    pointP++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 3:" << endl;
                cin >> answear3;
                if (answear3 == "c") {
                    pointP++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 4:" << endl;
                cin >> answear4;
                if (answear4 == "c") {
                    pointP++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 5:" << endl;
                cin >> answear5;
                if (answear5 == "c") {
                    pointP++;
                }

                cout << "__________________________________________________________________________________" << endl;
                cout << "You got : " << pointP << " points!" << endl;
                break;
            case 4:
                cout << "Question 1 : What is the longest continent on Earth ? "; '\n';
                cout << "a) Africa\nb)  North America\nc) Asia\nd) South America\n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 2 : What is the capital of Canada ? "; '\n';
                cout << "a) Toronto\nb) Montreal\nc) Ottawa\nd) Vancouver\n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 3 :What is the name of the longest river in the world ? "; '\n';
                cout << "a) Amazon River\nb) Yangtze River\nc) Mississippi River\nd) Nile River \n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 4 : In which part of the world is the Sahara Desert located? "; '\n';
                cout << "a) South America\nb) Asia\nc) North Africa\nd) Australia\n";
                cout << "----------------------------------------------------------------------------------" << endl;
                cout << "Question 5 : What is the largest desert in the world ? "; '\n';
                cout << "a) Sahara Desert\nb) Arabian Desert\nc) Antarctic Polar Desert\nd) Gobi Desert\n";
                cout << "----------------------------------------------------------------------------------" << endl;

                cout << "Enter the answear to question 1:" << endl;
                cin >> answear1;
                if (answear1 == "a") {
                    pointG++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 2:" << endl;
                cin >> answear2;
                if (answear2 == "c") {
                    pointG++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 3:" << endl;
                cin >> answear3;
                if (answear3 == "d") {
                    pointG++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 4:" << endl;
                cin >> answear4;
                if (answear4 == "c") {
                    pointG++;
                }

                cout << "??????????????????????????????????????????????????????????????????????????????????" << endl;
                cout << "Enter the answear to question 5:" << endl;
                cin >> answear5;
                if (answear5 == "c") {
                    pointG++;
                }

                cout << "__________________________________________________________________________________" << endl;
                cout << "You got : " << pointG << " points!" << endl;
                break;
                
            case 5:
                cout << "Going back to the main menu...\n";
                break;
            }

            if (choice >= 1 && choice <= 4) {
                cout << "\nClick Enter to continue...";
                cin.ignore();
                cin.get();
            }
        }
        else {
            cout << "Unvalid input, value has to be between 1 and 5!\n";
        }

    } while (choice != 5);
}
