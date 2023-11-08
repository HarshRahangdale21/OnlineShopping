#include <iostream>
using namespace std;

int main()
{
    char starValue;
    char choiceAgain;
    float onlineShopping(void);
startLevel:
    cout << " Please press s to start Shopping " << endl;
start:
    cin >> starValue;
    if (starValue == 's' || starValue == 'S')
    {
        float totalAmount = onlineShopping();
        cout << "Total billAmount is " << totalAmount << endl;
    shopAgain:
        cout << " Do you  want shopping again, y or n " << endl;
        cin >> choiceAgain;
        if (choiceAgain == 'y' || choiceAgain == 'Y')
        {
            goto startLevel;
        }
        else if (starValue == 'n' || starValue == 'N')
        {
            cout << " Thanks for Shopping " << endl;
        }
        else
        {
            cout << " You have entered wrong option, please type again " << endl;
            goto shopAgain;
        }
    }
    else
    {
        cout << " You have entered wrong option , please s" << endl;
        goto start;
    }
}
float onlineShopping()
{
    char choice;
    char item;
    float billAmount = 0;
    int quantity;
itemLevel:
    cout << "*************Welcome To Online Shopping ****************" << endl;
    cout << "**************Please follow the intruction**************" << endl;
    cout << "(1) Please enter m to order mobile phone " << endl;
    cout << "(2) Please enter l to order laptops " << endl;
    cout << "(3) Please enter d to order  Dekstop " << endl;
    cout << "(4) Please enter s to order Speaker " << endl;
    cout << "(5) Please enter h to order Head phones" << endl;
    cin >> choice;
    //****************************MOBILE****************************************************//
    if (choice == 'm' || choice == 'M')
    {
    mobileLevel:
        cout << "Mobile Details" << endl;
        cout << "(1) Apple   =>     Price : 40000" << endl;
        cout << "(2) Vivo    =>     Price : 30000" << endl;
        cout << "(3) Samsung =>     Price : 35000" << endl;
        cout << "(4) Nokia   =>     Price : 20000" << endl;
        cout << "(5) Oppo    =>     Price : 28000" << endl;
        cout << "(6) Redmi   =>     price :  25000" << endl;
        cout << "Please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 40000;
        }
        else if (item == '2')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 30000;
        }
        else if (item == '3')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 35000;
        }
        else if (item == '4')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 20000;
        }
        else if (item == '5')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 28000;
        }
        else if (item == '6')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 25000;
        }
        else
        {
            cout << " You have enter wrong option, please type again " << endl;
            goto mobileLevel;
        }
        return billAmount;
    }

    //****************************Laptops****************************************************//
    if (choice == 'l' || choice == 'L')
    {
    leptopLevel:
        cout << "Leptop Details" << endl;
        cout << "(1) Hp       =>     Price : 60000" << endl;
        cout << "(2) Asus     =>     Price : 75000" << endl;
        cout << "(3) Lenevo   =>     Price : 55000" << endl;
        cout << "(4) redmibook =>     Price : 45000" << endl;
        cout << "(5) Dell      =>     Price : 65000" << endl;
        cout << "(6) macbook   =>     price :  90000" << endl;
        cout << "Please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 60000;
        }
        else if (item == '2')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 75000;
        }
        else if (item == '3')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 55000;
        }
        else if (item == '4')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 45000;
        }
        else if (item == '5')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 65000;
        }
        else if (item == '6')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 90000;
        }
        else
        {
            cout << " You have enter wrong option, please type again " << endl;
            goto leptopLevel;
        }
        return billAmount;
    }

    //****************************Dekstop****************************************************//
    if (choice == 'd' || choice == 'D')
    {
    dekstopLevel:
        cout << "Dekstop Details" << endl;
        cout << "(1) Acer   =>     Price : 40000" << endl;
        cout << "(2) Lenovo    =>     Price : 30000" << endl;
        cout << "(3) Samsung =>     Price : 35000" << endl;
        cout << "(4) Dell   =>     Price : 20000" << endl;
        cout << "(5) Razer    =>     Price : 28000" << endl;
        cout << "(6) Zotac   =>     price :  25000" << endl;
        cout << "Please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 40000;
        }
        else if (item == '2')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 30000;
        }
        else if (item == '3')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 35000;
        }
        else if (item == '4')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 20000;
        }
        else if (item == '5')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 28000;
        }
        else if (item == '6')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 25000;
        }
        else
        {
            cout << " You have enter wrong option, please type again " << endl;
            goto dekstopLevel;
        }
        return billAmount;
    }

    //****************************Speaker****************************************************//
    if (choice == 's' || choice == 'S')
    {
    speakerLevel:
        cout << "Speaker Details" << endl;
        cout << "(1) Govo   =>     Price : 70000" << endl;
        cout << "(2) Boat    =>     Price : 30000" << endl;
        cout << "(3) JBL =>     Price : 35000" << endl;
        cout << "(4) Sony   =>     Price : 40000" << endl;
        cout << "(5) Bose    =>     Price : 28000" << endl;
        cout << "(6) Dobly   =>     price :  85000" << endl;
        cout << "Please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 70000;
        }
        else if (item == '2')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 30000;
        }
        else if (item == '3')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 35000;
        }
        else if (item == '4')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 40000;
        }
        else if (item == '5')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 28000;
        }
        else if (item == '6')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 85000;
        }
        else
        {
            cout << " You have enter wrong option, please type again " << endl;
            goto speakerLevel;
        }
        return billAmount;
    }

    //****************************HeadPhones***************************************************//
    if (choice == 'h' || choice == 'H')
    {
    headphoneLevel:
        cout << "Mobile Details" << endl;
        cout << "(1) AKG   =>     Price : 4000" << endl;
        cout << "(2) Grado    =>     Price : 3300" << endl;
        cout << "(3) Bose =>     Price : 5000" << endl;
        cout << "(4) JBL   =>     Price : 2200" << endl;
        cout << "(5) Audeze    =>     Price : 2800" << endl;
        cout << "(6) V-Moda   =>     price :  2500" << endl;
        cout << "Please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 4000;
        }
        else if (item == '2')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 3300;
        }
        else if (item == '3')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 5000;
        }
        else if (item == '4')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 2200;
        }
        else if (item == '5')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 2800;
        }
        else if (item == '6')
        {
            cout << " Enter quantity" << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 2500;
        }
        else
        {
            cout << " You have enter wrong option, please type again " << endl;
            goto headphoneLevel;
        }
    }
    else
    {
        cout << " You have enter wrong option, please type again " << endl;
        goto itemLevel;
    }
    return billAmount;
}