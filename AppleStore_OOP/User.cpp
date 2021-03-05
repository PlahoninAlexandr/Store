#include "User.h"
#include "Mac.h"
#include "iPhone.h"
#include "iPad.h"
#include "AirPods.h"
#include "Watch.h"
#include <string>
#include <iostream>


using namespace std;

User::User(){}

User::User(string name, double balance) {
	Name = name;
	Balance = balance;
}

void User::changeBalance(double Price, string nm) {
	if (Balance - Price > 0) {
		Balance -= Price;
		cout << endl << "operation successfull" << "\n" << "your balance " << Balance << endl << endl;
		basket.push_back(nm);
	}
	else {
		cout << endl << "У вас недостаточно средств на балансе." << endl;
	}
}

void User::specification(AppleStore* device, string name, double price) {
	device->specification(name, price);
}

int User::Run() {
	setlocale(LC_ALL, "ru");

	cout << "введите свое имя " << "\t";
	cin >> name;
	cout << "введите свой баланс " << "\t";
	cin >> balance;

	User user(name, balance);

	cout << endl << "Здравствуйте " << name << ", Выберите девайс: " << endl;

	while (true) {
		cout << "1 Mac" << "\n" << "2 iphone" << "\n" << "3 ipode" << "\n" << "4 earphones" << "\n" << "5 clock" << "\n" << "6 Корзина" << endl;
		cin >> devNumber;

		switch (devNumber) {
		case 1: {
			Mac mac;
			user.specification(&mac, "MacBook Air", 124990);
			cout << endl << "1 купить" << "\t" << "2 назад" << endl;
			cin >> buy;
			if (buy == 1) {
				user.changeBalance(mac.Price, mac.Name);
				continue;
			}
			else continue;
		}
		case 2: {
			iPhone iphone;
			user.specification(&iphone, "iPhone 12", 69990);
			cout << endl << "1 купить" << "\t" << "2 назад" << endl;
			cin >> buy;
			if (buy == 1) {
				user.changeBalance(iphone.Price, iphone.Name);
				continue;
			}
			else continue;
		}
		case 3: {
			iPad ipad;
			user.specification(&ipad, "iPad Air", 55900);
			cout << endl << "1 купить" << "\t" << "2 назад" << endl;
			cin >> buy;
			if (buy == 1) {
				user.changeBalance(ipad.Price, ipad.Name);
				continue;
			}
			else continue;
		}
		case 4: {
			AirPods airpods;
			user.specification(&airpods, "AirPods", 19990);
			cout << endl << "1 купить" << "\t" << "2 назад" << endl;
			cin >> buy;
			if (buy == 1) {
				user.changeBalance(airpods.Price, airpods.Name);
				continue;
			}
			else continue;
		}
		case 5: {
			Watch watch;
			user.specification(&watch, "Apple Watch Series 6", 39490);
			cout << endl << "1 купить" << "\t" << "2 назад" << endl;
			cin >> buy;
			if (buy == 1) {
				user.changeBalance(watch.Price, watch.Name);
				continue;
			}
			else continue;
		}
		case 6: {
			int tmp = 0;
			cout << endl << "Basket: ";
			for (const auto i : user.basket) {
				cout << i << "\t";
			}
			cout << endl << endl;
			continue;
		}
		default:
			while (!(cin >> buy) && (cin.peek() != '\n')) {
				cin.clear();
				while (cin.get() != '\n');
				cout << endl << "Ошибка ввода" << "\n" << "Выберите девайс: " << "\n" << "1 Mac" << "\n" << "2 iphone" << "\n"
					<< "3 ipode" << "\n" << "4 earphones" << "\n" << "5 clock" << "\n" << "6 Basket" << endl;
			}
			continue;
		}
	}
}