#include<iostream>
#include<cctype>
#include <string>
using namespace std;
int main()
{
    int ctr1, ctr2, num, repeat, total = 0, item = 0, orderStatus = 1, pay, cash, change, al = 0, cb = 0, wp = 0, bm = 0, dc = 0, qp = 0, sd1 = 0, sd2 = 0, sd3 = 0, mt1 = 0, mt2 = 0, mt3 = 0, fs1 = 0, fs2 = 0, fs3 = 0, f = 0, mj = 0, nc = 0, ng = 0, aloha = 150, cheesyBacon = 150, whooper = 180, bigMac = 180, doubleCheese = 180, quarterPounder = 200, soda = 60, milktea = 100, fruitShake = 120, fries = 50, mojos = 70, nachos = 70, nuggets = 70;
    string inp, credit, order, inpsoda; char choice, ans = 'Y', ans2; float x, y, z, small, sum, diff, quot, prod;
    cout << "\t\t\tFOOD RESTAURANT" << endl;
    cout << "\t     WOULD YOU LIKE TO \"DINE-IN\" OR \"TAKE-OUT\"? " << endl;
    while (true){
        cout << "Response:> ";
        cin >> order;
        if (order == "DINE-IN" || order == "TAKE-OUT"){
            break;
        }
        cout << "Error: Incorrect Response, please try again." << endl;
    }
    do
    {
        do
        {
            system("cls");
            cout << "CHOOSE FROM MENU:" << endl;
            cout << "[1] BURGER/SANDWICHES" << endl;
            cout << "[2] BEVERAGES" << endl;
            cout << "[3] ADD ONS" << endl;
            cout << "[4] CANCEL ORDER" << endl;
            cout << "Enter Choice:> ";
            cin >> choice;
            if (choice == '1'){
                system("cls");
                cout << "BURGER/SANDWICHES:" << endl;
                cout << "[1] ALOHA - P150" << endl;
                cout << "[2] CHEESY BACON - P150" << endl;
                cout << "[3] WHOOPER - P180" << endl;
                cout << "[4] BIG MAC - P180" << endl;
                cout << "[5] DOUBLE CHEESEBURGER - P180" << endl;
                cout << "[6] QUARTER POUNDER - P200" << endl;
                cout << "Type \"DONE\" when finished ordering." << endl;
                cout << "INPUT ORDER: ";
                cin >> inp;
                while (inp != "DONE"){
                    if (inp == "1"){
                        total += aloha; al += 1;
                    }
                    else if (inp == "2"){
                        total += cheesyBacon; cb += 1;
                    }
                    else if (inp == "3"){
                        total += whooper; wp += 1;
                    }
                    else if (inp == "4"){
                        total += bigMac; bm += 1;
                    }
                    else if (inp == "5"){
                        total += doubleCheese; dc += 1;
                    }
                    else if (inp == "6"){
                        total += quarterPounder; qp += 1;
                    }
                    item += 1;
                    cout << "INPUT ORDER: ";
                    cin >> inp;
                }
                cout << "WOULD YOU LIKE TO ADD MORE ITEMS? [Y/N]: ";
                cin >> ans;
                ans = toupper(ans);
                system("cls");
            }
            else if (choice == '2'){
                system("cls");
                cout << "BEVERAGES:" << endl;
                cout << "[1] SODA IN-CAN (COKE, SPRITE, ROYAL) - P60" << endl;
                cout << "[2] MILKTEA (WINTERMELON, CHOCOLATE, TARO) - P100" << endl;
                cout << "[3] FRUIT SHAKE (MANGO, STRAWBERRY, AVOCADO) - P120" << endl;
                cout << "Type \"DONE\" when finished ordering." << endl;
                cout << "INPUT ORDER: ";
                cin >> inp;
                while (inp != "DONE"){
                    if (inp == "1"){
                        total += soda;
                        cout << "SELECT SODA IN-CAN" << endl;
                        cout << "[1] COKE" << endl;
                        cout << "[2] SPRITE" << endl;
                        cout << "[3] ROYAL" << endl;
                        cout << "INPUT SODA: ";
                        cin >> inp;
                        if (inp == "1"){
                            sd1 += 1;
                        }
                        else if (inp == "2"){
                            sd2 += 1;
                        }
                        else if (inp == "3"){
                            sd3 += 1;
                        }
                    }
                    else if (inp == "2"){
                        total += milktea;
                        cout << "SELECT MILKTEA" << endl;
                        cout << "[1] WINTERMELON" << endl;
                        cout << "[2] CHOCOLATE" << endl;
                        cout << "[3] TARO" << endl;
                        cout << "INPUT MILKTEA: "; cin >> inp;
                        if (inp == "1"){
                            mt1 += 1;
                        }
                        else if (inp == "2"){
                            mt2 += 1;
                        }
                        else if (inp == "3"){
                            mt3 += 1;
                        }
                    }
                    else if (inp == "3"){
                        total += fruitShake;
                        cout << "SELECT FRUIT SHAKE" << endl;
                        cout << "[1] MANGO" << endl;
                        cout << "[2] STRAWBERRY" << endl;
                        cout << "[3] AVOCADO" << endl;
                        cout << "INPUT FRUIT SHAKE: "; cin >> inp;
                        if (inp == "1"){
                            fs1 += 1;
                        }
                        else if (inp == "2"){
                            fs2 += 1;
                        }
                        else if (inp == "3"){
                            fs3 += 1;
                        }
                    }
                    item += 1;
                    cout << "INPUT ORDER: "; cin >> inp;
                }
                cout << "WOULD YOU LIKE TO ADD MORE ITEMS? [Y/N]: "; cin >> ans;
                ans = toupper(ans);
                system("cls");
            }
            else if (choice == '3'){
                system("cls");
                cout << "ADD ONS (GOOD FOR 1 PAX):" << endl;
                cout << "[1] FRIES - P50" << endl;
                cout << "[2] MOJOS - P70" << endl;
                cout << "[3] NACHOS - P70" << endl;
                cout << "[4] NUGGETS - P80" << endl;
                cout << "Type \"DONE\" when finished ordering." << endl;
                cout << "INPUT ORDER: "; cin >> inp;
                while (inp != "DONE"){
                    if (inp == "1"){
                        total += fries;
                        f += 1;
                    }
                    else if (inp == "2"){
                        total += mojos;
                        mj += 1;
                    }
                    else if (inp == "3"){
                        total += nachos;
                        nc += 1;
                    }
                    else if (inp == "4"){
                        total += nuggets;
                        ng += 1;
                    }
                    item += 1;
                    cout << "INPUT ORDER: "; cin >> inp;
                }
                cout << "WOULD YOU LIKE TO ADD MORE ITEMS? [Y/N]: "; cin >> ans;
                ans = toupper(ans);
                system("cls");
            }
            else if (choice == '4'){
                orderStatus = 0;
                ans = 'N';
                ans2 = 'c';
            }
        } while (ans == 'Y');
        if (orderStatus == 1){
            cout << "========================================================" << endl;
            cout << "\nWOULD YOU LIKE TO PROCEED WITH YOUR ORDER?" << endl;
            cout << "[1] YES" << endl;
            cout << "[2] BACK TO MENU" << endl;
            cout << "[3] CANCEL ORDER" << endl;
            cout << "Enter Choice:> "; cin >> inp;
            if (inp == "1"){
                system("cls");
                cout << "[ORDER DETAILS]" << endl;
                cout << "TYPE OF ORDER: " << order << endl;
                cout << "ITEM\t\t     QUANTITY\t\tTOTAL" << endl;
                cout << "========================================================" << endl;
                if (!(al == 0)){
                    cout << "Aloha\t\t\t" << al << "\t\t " << (al * aloha) << endl;
                }
                if (!(cb == 0)){
                    cout << "Cheesy Bacon\t\t" << cb << "\t\t " << (cb * cheesyBacon) << endl;
                }
                if (!(wp == 0)){
                    cout << "Whooper\t\t\t" << wp << "\t\t " << (wp * whooper) << endl;
                }
                if (!(bm == 0)){
                    cout << "Big Mac\t\t\t" << bm << "\t\t " << (bm * bigMac) << endl;
                }
                if (!(dc == 0)){
                    cout << "Double Cheeseburger\t" << dc << "\t\t " << (dc * doubleCheese) << endl;
                }
                if (!(qp == 0)){
                    cout << "Quarter Pounder\t\t" << qp << "\t\t " << (qp * quarterPounder) << endl;
                }
                if (!(sd1 == 0)){
                    cout << "Coke\t\t\t" << sd1 << "\t\t " << (sd1 * soda) << endl;
                }
                if (!(sd2 == 0)){
                    cout << "Sprite\t\t\t" << sd2 << "\t\t " << (sd2 * soda) << endl;
                }
                if (!(sd3 == 0)){
                    cout << "Royal\t\t\t" << sd3 << "\t\t " << (sd3 * soda) << endl;
                }
                if (!(mt1 == 0)){
                    cout << "Wintermelon Milktea\t" << mt1 << "\t\t " << (mt1 * milktea) << endl;
                }
                if (!(mt2 == 0)){
                    cout << "Chocolate Milktea\t" << mt2 << "\t\t " << (mt2 * milktea) << endl;
                }
                if (!(mt3 == 0)){
                    cout << "Taro Milktea\t\t" << mt3 << "\t\t " << (mt3 * milktea) << endl;
                }
                if (!(fs1 == 0)){
                    cout << "Mango Fruitshake\t" << fs1 << "\t\t " << (fs1 * fruitShake) << endl;
                }
                if (!(fs2 == 0)){
                    cout << "Strawberry Fruitshake\t" << fs2 << "\t\t " << (fs2 * fruitShake) << endl;
                }
                if (!(fs3 == 0)){
                    cout << "Avocado Fruitshake\t" << fs3 << "\t\t " << (fs3 * fruitShake) << endl;
                }
                if (!(f == 0)){
                    cout << "Fries\t\t\t" << f << "\t\t " << (f * fries) << endl;
                }
                if (!(mj == 0)){
                    cout << "Mojos\t\t\t" << mj << "\t\t " << (mj * mojos) << endl;
                }
                if (!(nc == 0)){
                    cout << "Nachos\t\t\t" << nc << "\t\t " << (nc * nachos) << endl;
                }
                if (!(ng == 0)){
                    cout << "Nuggets\t\t\t" << ng << "\t\t " << (ng * nuggets) << endl;
                }
                cout << "========================================================" << endl;
                cout << "\n" << endl;
                cout << "Total Items Ordered: " << item << endl;
                cout << "Total Amount: P" << total << endl;
                cout << "========================================================" << endl;
                system("pause");
                system("cls");
                cout << "\nMODE OF PAYMENT" << endl;
                cout << "[1] PAY WITH CASH" << endl;
                cout << "[2] ONLINE PAYMENT" << endl;
                cout << "[3] CREDIT CARD" << endl;
                cout << "Enter Choice:> "; cin >> pay;
                if (pay == 1){
                    cout << "Total Amount to be Paid: P" << total << endl;
                    cout << "Enter Amount of Cash: P"; cin >> cash;
                    while (total > cash){
                        cout << "Error: Insufficient amount, please try again." << endl;
                        cout << "Enter Amount of Cash: P";
                        cin >> cash;
                    }
                    change = cash - total;
                    cout << endl << "[Your change is P" << change << "]" << endl;
                    total = 0;
                }
                else if (pay == 2){
                    cout << "Total Amount to be Paid: P" << total << endl;
                    cout << "Enter Exact Amount: P"; cin >> cash;
                    while (total != cash){
                        cout << "Error: Incorrect amount, please try again." << endl;
                        cout << "Enter Exact Amount: P";
                        cin >> cash;
                    }
                    total = 0;
                }
                else if (pay == 3){
                    cout << "Total Amount to be Paid: P" << total << endl;
                    cout << "Enter Credit Card Number: "; cin >> credit;
                    cout << endl << "Verifying: " << credit << ", Please wait..." << endl;
                    cout << "Payment has been processed." << endl;
                    total = 0;
                }
            }
            else if (inp == "3"){
                cout << "END" << endl;
            }
        }
    } while (inp == "2");
    cout << endl << "[Thank you for your purchase. Please come again!]" << endl;

    system("pause"); 
    return 0;
}