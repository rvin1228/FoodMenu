#include<iostream>
#include<cctype>
#include <string>
using namespace std;
static void titleScreen()
{
    cout << "\t__________                   _____                        __                         __          " << endl;
    cout << "\t\\______   \\ ____   ____     /  _  \\ ______ ______   _____/  |________   ____ _____ _/  |_  ______" << endl;
    cout << "\t |    |  _//  _ \\ /    \\   /  /_\\  \\\\____ \\\\____ \\_/ __ \\   __\\_  __ \\_/ __ \\\\__  \\\\   __\\/  ___/" << endl;
    cout << "\t |    |   (  <_> )   |  \\ /    |    \\  |_> >  |_> >  ___/|  |  |  | \\/\\  ___/ / __ \\|  |  \\___ \\ " << endl;
    cout << "\t |______  /\\____/|___|  / \\____|__  /   __/|   __/ \\___  >__|  |__|    \\___  >____  /__| /____  >" << endl;
    cout << "\t        \\/            \\/          \\/|__|   |__|        \\/                  \\/     \\/          \\/ " << endl;
    cout << "\t--------------------------------------------------------------------------------------------------" << endl;
}

static void menuScreen()
{
    cout << "\n\t\t ___  _                        ___                   __ __                " << endl;
    cout << "\t\t|  _>| |_  ___  ___  ___ ___  | | '_ _  ___ ._ _ _  |  \\  \\ ___ ._ _  _ _ " << endl;
    cout << "\t\t| <__| . |/ . \\/ . \\<_-</ ._> | |-| '_>/ . \\| ' ' | |     |/ ._>| ' || | |" << endl;
    cout << "\t\t`___/|_|_|\\___/\\___//__/\\___. |_| |_|  \\___/|_|_|_| |_|_|_|\\___.|_|_|`___|" << endl;
    cout << "\t\t                                                                          " << endl;
}

static void burgerScreen()
{
    cout << "\n\t--------------------------------------------------------------------------------------------------" << endl;
    cout << "\n\t\t\t\t           _....----\"\"\"----...._" << endl;
    cout << "\t\t\t\t        .-'  o    o    o    o   '-." << endl;
    cout << "\t\t\t\t       /  o    o    o         o    \\" << endl;
    cout << "\t\t\t\t    __/__o___o_ _ o___ _ o_ o_ _ _o_\\__" << endl;
    cout << "\t\t\t\t   /                                   \\" << endl;
    cout << "\t\t\t\t   \\___________________________________/" << endl;
    cout << "\t\t\t\t     \\~`-`.__.`-~`._.~`-`~.-~.__.~`-`/" << endl;
    cout << "\t\t\t\t      \\                             /" << endl;
    cout << "\t\t\t\t       `-._______________________.-'" << endl;
}

static void beverageScreen()
{
    cout << "\n\t--------------------------------------------------------------------------------------------------" << endl;
    cout << "\n\t\t\t\t            __" << endl;
    cout << "\t\t\t\t        .-\"`` _``\"-." << endl;
    cout << "\t\t\t\t       /'.   '.(##)'\\" << endl;
    cout << "\t\t\t\t       |  `'----'`  |" << endl;
    cout << "\t\t\t\t       |        ----|" << endl;
    cout << "\t\t\t\t       |        . .-|" << endl;
    cout << "\t\t\t\t       | .::::.     |" << endl;
    cout << "\t\t\t\t       |::::''':.-. |" << endl;
    cout << "\t\t\t\t       |;,,;;;;;    |" << endl;
    cout << "\t\t\t\t       | ';;;;' . . |" << endl;
    cout << "\t\t\t\t       |            |" << endl;
    cout << "\t\t\t\t       |        .-. |" << endl;
    cout << "\t\t\t\t       \\            /" << endl;
    cout << "\t\t\t\t        `.________.'" << endl;
}

static void addOnsScreen()
{
    cout << "\n\t--------------------------------------------------------------------------------------------------" << endl;
    cout << "\n\t\t\t\t\t       __" << endl;
    cout << "\t\t\t\t\t      /" << endl;
    cout << "\t\t\t\t\t   .-/-." << endl;
    cout << "\t\t\t\t\t   |'-'|" << endl;
    cout << "\t\t\t\t\t   |   |" << endl;
    cout << "\t\t\t\t\t   |   |   .-\"\"\"\"-." << endl;
    cout << "\t\t\t\t\t   \\___/  /' .  '. \\   \\|/\\//" << endl;
    cout << "\t\t\t\t\t         (`-..:...-')  |`\"\"`|" << endl;
    cout << "\t\t\t\t\t          ;-......-;   |    |" << endl;
    cout << "\t\t\t\t\t           '------'    \\____/" << endl;
}

static void confirmScreen()
{
    cout << "\n\t\t\t ___            ___  _                    _    _           " << endl;
    cout << "\t\t\t|  _> ___ ._ _ | | '<_> _ _ ._ _ _  ___ _| |_ <_> ___ ._ _ " << endl;
    cout << "\t\t\t| <__/ . \\| ' || |- | || '_>| ' ' |<_> | | |  | |/ . \\| ' |" << endl;
    cout << "\t\t\t`___/\\___/|_|_||_|  |_||_|  |_|_|_|<___| |_|  |_|\\___/|_|_|" << endl;
    cout << "                                                           " << endl;
}

static void detailsScreen()
{
    cout << "\n\t\t\t ___         _             ___        _        _  _     " << endl;
    cout << "\t\t\t| . | _ _  _| | ___  _ _  | . \\ ___ _| |_ ___ <_>| | ___" << endl;
    cout << "\t\t\t| | || '_>/ . |/ ._>| '_> | | |/ ._> | | <_> || || |<_-<" << endl;
    cout << "\t\t\t`___'|_|  \\___|\\___.|_|   |___/\\___. |_| <___||_||_|/__/" << endl;
    cout << "                                                        " << endl;
    cout << "\n\t--------------------------------------------------------------------------------------------------" << endl;
}

static void paymentScreen()
{
    cout << "\n\t\t\t __ __         _             ___   ___                              _   " << endl;
    cout << "\t\t\t|  \\  \\ ___  _| | ___   ___ | | ' | . \\ ___  _ _ ._ _ _  ___ ._ _ _| |_ " << endl;
    cout << "\t\t\t|     |/ . \\/ . |/ ._> / . \\| |-  |  _/<_> || | || ' ' |/ ._>| ' | | |  " << endl;
    cout << "\t\t\t|_|_|_|\\___/\\___|\\___. \\___/|_|   |_|  <___|`_. ||_|_|_|\\___.|_|_| |_|  " << endl;
    cout << "\t\t\t                                            <___'                       " << endl;
}

static void cancelledScreen()
{
    cout << "\n\t\t\t ___         _             ___                      _  _         _ " << endl;
    cout << "\t\t\t| . | _ _  _| | ___  _ _  |  _> ___ ._ _  ___  ___ | || | ___  _| |" << endl;
    cout << "\t\t\t| | || '_>/ . |/ ._>| '_> | <__<_> || ' |/ | '/ ._>| || |/ ._>/ . |" << endl;
    cout << "\t\t\t`___'|_|  \\___|\\___.|_|   `___/<___||_|_|\\_|_.\\___.|_||_|\\___.\\___|" << endl;
    cout << "                                                                   " << endl;
}

static void thankyouScreen()
{
    cout << "\n\t\t ___  _              _     _ _               ___                                   _       _ " << endl;
    cout << "\t\t|_ _|| |_  ___ ._ _ | |__ | | | ___  _ _    |  _> ___ ._ _ _  ___   ___  ___  ___ <_>._ _ | |" << endl;
    cout << "\t\t | | | . |<_> || ' || / / \\   // . \\| | | _ | <__/ . \\| ' ' |/ ._> <_> |/ . |<_> || || ' ||_/" << endl;
    cout << "\t\t |_| |_|_|<___||_|_||_\\_\\  |_| \\___/`___||/ `___/\\___/|_|_|_|\\___. <___|\\_. |<___||_||_|_|<_>" << endl;
    cout << "\t\t                                                                        <___'                " << endl;
}

int main()
{
    int ctr1, ctr2, num, repeat, total = 0, item = 0, orderStatus = 1, pay, cash, change, al = 0, cb = 0, wp = 0, bm = 0, dc = 0, qp = 0, sd1 = 0, sd2 = 0, sd3 = 0, mt1 = 0, mt2 = 0, mt3 = 0, fs1 = 0, fs2 = 0, fs3 = 0, f = 0, mj = 0, nc = 0, ng = 0, aloha = 150, cheesyBacon = 150, whooper = 180, bigMac = 180, doubleCheese = 180, quarterPounder = 200, soda = 60, milktea = 100, fruitShake = 120, fries = 50, mojos = 70, nachos = 70, nuggets = 70;
    string inp, credit, order, inpsoda; char choice, ans = 'Y', ans2; float x, y, z, small, sum, diff, quot, prod;
    titleScreen();
    cout << "\n\t\t\t\t   WOULD YOU LIKE TO \"DINE-IN\" OR \"TAKE-OUT\"? " << endl;
    while (true) {
        cout << "Response:> ";
        cin >> order;
        if (order == "DINE-IN" || order == "TAKE-OUT") {
            break;
        }
        cout << "Error: Incorrect Response, please try again." << endl;
    }
    do
    {
        do
        {
            cout << "\n\n==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==o==" << endl;
            menuScreen();
            cout << "\t\t\t\t  ======================================" << endl;
            cout << "\n\t\t\t\t\t  [1] BURGER/SANDWICHES" << endl;
            cout << "\t\t\t\t\t  [2] BEVERAGES" << endl;
            cout << "\t\t\t\t\t  [3] ADD ONS" << endl;
            cout << "\t\t\t\t\t  [4] CANCEL ORDER" << endl;
            cout << "\n\t\t\t\t  ======================================" << endl;
            cout << "\t\t\t\t\tEnter Choice:> ";
            cin >> choice;
            if (choice == '1') {
                burgerScreen();
                cout << "\n\t\t\t\t\t  BURGER/SANDWICHES:" << endl;
                cout << "\t\t\t\t  ======================================" << endl;
                cout << "\n\t\t\t\t\t  [1] ALOHA - P150" << endl;
                cout << "\t\t\t\t\t  [2] CHEESY BACON - P150" << endl;
                cout << "\t\t\t\t\t  [3] WHOOPER - P180" << endl;
                cout << "\t\t\t\t\t  [4] BIG MAC - P180" << endl;
                cout << "\t\t\t\t\t  [5] DOUBLE CHEESEBURGER - P180" << endl;
                cout << "\t\t\t\t\t  [6] QUARTER POUNDER - P200" << endl;
                cout << "\n\t\t\t\t  ======================================" << endl;
                cout << "\t\t\t\t   Type \"DONE\" when finished ordering." << endl;
                cout << "\t\t\t\t   INPUT ORDER: ";
                cin >> inp;
                while (inp != "DONE") {
                    if (inp == "1") {
                        total += aloha; al += 1;
                    }
                    else if (inp == "2") {
                        total += cheesyBacon; cb += 1;
                    }
                    else if (inp == "3") {
                        total += whooper; wp += 1;
                    }
                    else if (inp == "4") {
                        total += bigMac; bm += 1;
                    }
                    else if (inp == "5") {
                        total += doubleCheese; dc += 1;
                    }
                    else if (inp == "6") {
                        total += quarterPounder; qp += 1;
                    }
                    item += 1;
                    cout << "\t\t\t\t   INPUT ORDER: ";
                    cin >> inp;
                }
                cout << "\t\t\t\tWOULD YOU LIKE TO ADD MORE ITEMS? [Y/N]: ";
                cin >> ans;
                ans = toupper(ans);
            }
            else if (choice == '2') {
                beverageScreen();
                cout << "\n\t\t\t\t\t  BEVERAGES:" << endl;
                cout << "\t\t\t\t  ======================================" << endl;
                cout << "\n\t\t\t\t[1] SODA IN-CAN (COKE, SPRITE, ROYAL) - P60" << endl;
                cout << "\t\t\t\t[2] MILKTEA (WINTERMELON, CHOCOLATE, TARO) - P100" << endl;
                cout << "\t\t\t\t[3] FRUIT SHAKE (MANGO, STRAWBERRY, AVOCADO) - P120" << endl;
                cout << "\n\t\t\t\t  ======================================" << endl;
                cout << "\t\t\t\t   Type \"DONE\" when finished ordering." << endl;
                cout << "\t\t\t\t   INPUT ORDER: ";
                cin >> inp;
                while (inp != "DONE") {
                    if (inp == "1") {
                        total += soda;
                        cout << "\n\t\t\t\t\t  [SELECT SODA IN-CAN]" << endl;
                        cout << "\t\t\t\t  ======================================" << endl;
                        cout << "\n\t\t\t\t\t  [1] COKE" << endl;
                        cout << "\t\t\t\t\t  [2] SPRITE" << endl;
                        cout << "\t\t\t\t\t  [3] ROYAL" << endl;
                        cout << "\t\t\t\t  ======================================" << endl;
                        cout << "\t\t\t\t   INPUT SODA: ";
                        cin >> inp;
                        if (inp == "1") {
                            sd1 += 1;
                        }
                        else if (inp == "2") {
                            sd2 += 1;
                        }
                        else if (inp == "3") {
                            sd3 += 1;
                        }
                    }
                    else if (inp == "2") {
                        total += milktea;
                        cout << "\n\t\t\t\t\t  [SELECT MILKTEA]" << endl;
                        cout << "\t\t\t\t  ======================================" << endl;
                        cout << "\n\t\t\t\t\t  [1] WINTERMELON" << endl;
                        cout << "\t\t\t\t\t  [2] CHOCOLATE" << endl;
                        cout << "\t\t\t\t\t  [3] TARO" << endl;
                        cout << "\t\t\t\t  ======================================" << endl;
                        cout << "\t\t\t\t   INPUT MILKTEA: "; cin >> inp;
                        if (inp == "1") {
                            mt1 += 1;
                        }
                        else if (inp == "2") {
                            mt2 += 1;
                        }
                        else if (inp == "3") {
                            mt3 += 1;
                        }
                    }
                    else if (inp == "3") {
                        total += fruitShake;
                        cout << "\n\t\t\t\t\t  [SELECT FRUIT SHAKE]" << endl;
                        cout << "\t\t\t\t  ======================================" << endl;
                        cout << "\n\t\t\t\t\t  [1] MANGO" << endl;
                        cout << "\t\t\t\t\t  [2] STRAWBERRY" << endl;
                        cout << "\t\t\t\t\t  [3] AVOCADO" << endl;
                        cout << "\t\t\t\t  ======================================" << endl;
                        cout << "\t\t\t\t   INPUT FRUIT SHAKE: "; cin >> inp;
                        if (inp == "1") {
                            fs1 += 1;
                        }
                        else if (inp == "2") {
                            fs2 += 1;
                        }
                        else if (inp == "3") {
                            fs3 += 1;
                        }
                    }
                    item += 1;
                    cout << "\t\t\t\t   INPUT ORDER: "; cin >> inp;
                }
                cout << "\t\t\t\tWOULD YOU LIKE TO ADD MORE ITEMS? [Y/N]: ";
                cin >> ans;
                ans = toupper(ans);
            }
            else if (choice == '3') {
                addOnsScreen();
                cout << "\n\t\t\t\t\t  ADD ONS (GOOD FOR 1 PAX):" << endl;
                cout << "\t\t\t\t  ======================================" << endl;
                cout << "\n\t\t\t\t\t  [1] FRIES - P50" << endl;
                cout << "\t\t\t\t\t  [2] MOJOS - P70" << endl;
                cout << "\t\t\t\t\t  [3] NACHOS - P70" << endl;
                cout << "\t\t\t\t\t  [4] NUGGETS - P80" << endl;
                cout << "\n\t\t\t\t  ======================================" << endl;
                cout << "\t\t\t\t   Type \"DONE\" when finished ordering." << endl;
                cout << "\t\t\t\t   INPUT ORDER: "; cin >> inp;
                while (inp != "DONE") {
                    if (inp == "1") {
                        total += fries;
                        f += 1;
                    }
                    else if (inp == "2") {
                        total += mojos;
                        mj += 1;
                    }
                    else if (inp == "3") {
                        total += nachos;
                        nc += 1;
                    }
                    else if (inp == "4") {
                        total += nuggets;
                        ng += 1;
                    }
                    item += 1;
                    cout << "\t\t\t\t   INPUT ORDER: "; cin >> inp;
                }
                cout << "\t\t\t\tWOULD YOU LIKE TO ADD MORE ITEMS? [Y/N]: ";
                cin >> ans;
                ans = toupper(ans);
            }
            else if (choice == '4') {
                orderStatus = 0;
                ans = 'N';
                ans2 = 'c';
            }
        } while (ans == 'Y');
        if (orderStatus == 1) {
            confirmScreen();
            cout << "\n\t\t\t\t  ======================================" << endl;
            cout << "\n\t\t\t\tWOULD YOU LIKE TO PROCEED WITH YOUR ORDER?" << endl;
            cout << "\t\t\t\t\t  [1] YES" << endl;
            cout << "\t\t\t\t\t  [2] BACK TO MENU" << endl;
            cout << "\t\t\t\t\t  [3] CANCEL ORDER" << endl;
            cout << "\n\t\t\t\t  ======================================" << endl;
            cout << "\t\t\t\t   Enter Choice:> "; cin >> inp;
            if (inp == "1") {
                detailsScreen();
                cout << "\t\t\t\t\t  TYPE OF ORDER: " << order << endl;
                cout << "=====================================================================================================================" << endl;
                cout << "\tITEM\t\t     QUANTITY\t\tTOTAL" << endl;
                cout << "=====================================================================================================================" << endl;
                if (!(al == 0)) {
                    cout << "\tAloha\t\t\t" << al << "\t\t " << (al * aloha) << endl;
                }
                if (!(cb == 0)) {
                    cout << "\tCheesy Bacon\t\t" << cb << "\t\t " << (cb * cheesyBacon) << endl;
                }
                if (!(wp == 0)) {
                    cout << "\tWhooper\t\t\t" << wp << "\t\t " << (wp * whooper) << endl;
                }
                if (!(bm == 0)) {
                    cout << "\tBig Mac\t\t\t" << bm << "\t\t " << (bm * bigMac) << endl;
                }
                if (!(dc == 0)) {
                    cout << "\tDouble Cheeseburger\t" << dc << "\t\t " << (dc * doubleCheese) << endl;
                }
                if (!(qp == 0)) {
                    cout << "\tQuarter Pounder\t\t" << qp << "\t\t " << (qp * quarterPounder) << endl;
                }
                if (!(sd1 == 0)) {
                    cout << "\tCoke\t\t\t" << sd1 << "\t\t " << (sd1 * soda) << endl;
                }
                if (!(sd2 == 0)) {
                    cout << "\tSprite\t\t\t" << sd2 << "\t\t " << (sd2 * soda) << endl;
                }
                if (!(sd3 == 0)) {
                    cout << "\tRoyal\t\t\t" << sd3 << "\t\t " << (sd3 * soda) << endl;
                }
                if (!(mt1 == 0)) {
                    cout << "\tWintermelon Milktea\t" << mt1 << "\t\t " << (mt1 * milktea) << endl;
                }
                if (!(mt2 == 0)) {
                    cout << "\tChocolate Milktea\t" << mt2 << "\t\t " << (mt2 * milktea) << endl;
                }
                if (!(mt3 == 0)) {
                    cout << "\tTaro Milktea\t\t" << mt3 << "\t\t " << (mt3 * milktea) << endl;
                }
                if (!(fs1 == 0)) {
                    cout << "\tMango Fruitshake\t" << fs1 << "\t\t " << (fs1 * fruitShake) << endl;
                }
                if (!(fs2 == 0)) {
                    cout << "\tStrawberry Fruitshake\t" << fs2 << "\t\t " << (fs2 * fruitShake) << endl;
                }
                if (!(fs3 == 0)) {
                    cout << "\tAvocado Fruitshake\t" << fs3 << "\t\t " << (fs3 * fruitShake) << endl;
                }
                if (!(f == 0)) {
                    cout << "\tFries\t\t\t" << f << "\t\t " << (f * fries) << endl;
                }
                if (!(mj == 0)) {
                    cout << "\tMojos\t\t\t" << mj << "\t\t " << (mj * mojos) << endl;
                }
                if (!(nc == 0)) {
                    cout << "\tNachos\t\t\t" << nc << "\t\t " << (nc * nachos) << endl;
                }
                if (!(ng == 0)) {
                    cout << "\tNuggets\t\t\t" << ng << "\t\t " << (ng * nuggets) << endl;
                }
                cout << "=====================================================================================================================" << endl;
                cout << "\tTotal Items Ordered: " << item << endl;
                cout << "\tTotal Amount: P" << total << endl;
                cout << "=====================================================================================================================" << endl;
                system("pause");
                paymentScreen();
                cout << "\n\t\t\t\t  ======================================" << endl;
                cout << "\t\t\t\t\t  [1] PAY WITH CASH" << endl;
                cout << "\t\t\t\t\t  [2] ONLINE PAYMENT" << endl;
                cout << "\t\t\t\t\t  [3] CREDIT CARD" << endl;
                cout << "\t\t\t\t  ======================================" << endl;
                cout << "\t\t\t\t   Enter Choice:> "; cin >> pay;
                if (pay == 1) {
                    cout << "\n\t\t\t\t  ======================================" << endl;
                    cout << "\t\t\t\t  Total Amount to be Paid: P" << total << endl;
                    cout << "\t\t\t\t  Enter Amount of Cash: P"; cin >> cash;
                    while (total > cash) {
                        cout << "\t\t\t   Error: Insufficient amount, please try again." << endl;
                        cout << "\t\t\t\t   Enter Amount of Cash: P";
                        cin >> cash;
                    }
                    change = cash - total;
                    cout << "\n\t\t\t\t  ======================================" << endl;
                    cout << "\n\t\t\t\t   Your change is P" << change << endl;
                    total = 0;
                }
                else if (pay == 2) {
                    cout << "\n\t\t\t\t  ======================================" << endl;
                    cout << "\t\t\t\t   Total Amount to be Paid: P" << total << endl;
                    cout << "\t\t\t\t   Enter Exact Amount: P"; cin >> cash;
                    while (total > cash) {
                        cout << "\n\t\t\t\t  ======================================" << endl;
                        cout << "\t\t\t   Error: Incorrect amount, please try again." << endl;
                        cout << "\t\t\t\t   Enter Exact Amount: P";
                        cin >> cash;
                    }
                    total = 0;
                }
                else if (pay == 3) {
                    cout << "\n\t\t\t\t  ======================================" << endl;
                    cout << "\t\t\t\t   Total Amount to be Paid: P" << total << endl;
                    cout << "\t\t\t\t   Enter Credit Card Number: "; cin >> credit;
                    cout << "\n\t\t\t\t  Verifying : " << credit << ", Please wait..." << endl;
                    cout << "\t\t\t\t  Payment has been processed." << endl;
                    total = 0;
                }
            }
            else if (inp == "3") {
                cancelledScreen();
            }
        }
    } while (inp == "2");
    thankyouScreen();

    system("pause");
    return 0;
}
