#include <iostream>
#include <string>
using namespace std;

class Creature {
private:
	string Name;
	float Health;

protected:
	int NumOfLimbs;


public:
	Creature() {
		Health = 100.f;
		cout << "A creature has been created!\n";
	}

	void SetName(string name) {
		Name = name;
	}

	string getName() {
		return Name;
	}

	void setHealth(float health) {
		Health = health;
	}

	float getHealth() {
		return Health;
	}

	void takeDamage(float damage) {
		float Total = Health - damage;
		
		if (Total <= 0.f) {
			cout << getName() << " has died!\n";
			Health = 0;
		}
		else {
			Health -= damage;
		}

		cout << "Health: " << getHealth() << endl;
	}

};

class Goblin : public Creature {
public:
	Goblin() {
		NumOfLimbs = 5;
		SetName("Gobby");
	}

	int getNumOfLimbs() {
		return NumOfLimbs;
	}
};

int main() {
	Creature Halen;
	Halen.SetName("Halen");
	cout << Halen.getName() << endl;
	cout << "Health: " << Halen.getHealth() << endl;

	cout << "Halen took 35 damage!\n";
	Halen.takeDamage(35.0);

	cout << "Halen took 35 damage!\n";
	Halen.takeDamage(35.0);

	cout << "Halen took 35 damage!\n";
	Halen.takeDamage(35.0);

	Goblin goblin;
	cout << goblin.getName() << endl;
	cout << goblin.getNumOfLimbs() << endl;

	system("pause");
}