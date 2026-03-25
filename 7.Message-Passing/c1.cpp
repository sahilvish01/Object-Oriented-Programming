// Message Passing 

#include<iostream>
using namespace std;

class Gun
{
    // string name;

    public : 

    // Gun(const string &n)
    // {
    //     name = n;
    // }

    void shoot(int ammo)
    {
        cout << ammo << " bullets are fired" << endl;
    }

};

class Player
{
    public :

    void Trigger(const string &name, int ammo ,Gun &weapon)
    {
        cout << name << " pushed the trigger..." << endl;

        weapon.shoot(ammo);
    }

};

int main()
{

    Gun ak47;

    Player p;

    p.Trigger("Virat",18,ak47);
    
}