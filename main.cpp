#include <iostream>
#include <array>
#include <vector>
using namespace std;

struct card {
	int amount, fill, color, shape;
	void c_init() {
		cout << "Enter the amount of elements on the card >>" << endl;
		cin >> amount;
		cout << "Enter the fill on the card: '1'- none, '2'- lines, '3'- full >>" << endl;
		cin >> fill;
		cout << "Enter the color of the card: '1' - red, '2' - green, '3' - blue >>" << endl;
		cin >> color;
		cout << "Enter the form of the figure on the card: '1' - circle, '2' - wave shape, '3' - dimond shape >>" << endl;
		cin >> shape;
		cout << "=================" << endl;
	}
};

array<vector<bool>, 81> cards;
vector<card> v_cards;

void search() {
	for (int i = 0; i < v_cards.size() - 1; ++i) {
		for (int t = 1; t < v_cards.size(); ++t) {
			card a_card = v_cards[i];
			card b_card = v_cards[t];
			int amount = 0, fill = 0, color = 0, shape = 0;
			
			if (a_card.amount == b_card.amount) amount = a_card.amount;
			else if (abs(a_card.amount - b_card.amount) == 1) {
				if (max(a_card.amount, b_card.amount) == 2) amount = 3;
				else amount = 1;
			} 
			else {
				amount = 2;
			}

			if (a_card.fill == b_card.fill) fill = a_card.fill;
			else if (abs(a_card.fill - b_card.fill) == 1) {
				if (max(a_card.fill, b_card.fill) == 2) fill = 3;
				else fill = 1;
			}
			else {
				fill = 2;
			}

			if (a_card.color == b_card.color) color = a_card.color;
			else if (abs(a_card.color - b_card.color) == 1) {
				if (max(a_card.color, b_card.color) == 2) color = 3;
				else color = 1;
			}
			else {
				color = 2;
			}

			if (a_card.shape == b_card.shape) shape = a_card.shape;
			else if (abs(a_card.shape - b_card.shape) == 1) {
				if (max(a_card.shape, b_card.shape) == 2) shape = 3;
				else shape = 1;
			}
			else {
				shape = 2;
			}

			int c_index = 0;
			switch (shape) {
			case 1:
				break;
			case 2:
				c_index += 3;
				break;
			case 3:
				c_index += 6;
				break;
			}
			switch (amount) {
			case 1:
				break;
			case 2:
				c_index += 1;
				break;
			case 3:
				c_index += 2;
				break;
			}
			switch (fill) {
			case 1:
				break;
			case 2:
				c_index += 9;
				break;
			case 3:
				c_index += 18;
				break;
			}
			switch (color) {
			case 1:
				break;
			case 2:
				c_index += 27;
				break;
			case 3:
				c_index += 54;
				break;
			}
			if (cards[c_index].size() == 0) cards[c_index].push_back(0);
			if (cards[c_index][0] == 1) {
				cout << "SET" << endl;
				cout << "card 1: " << endl;
				switch (a_card.shape) {
				case 1:
					cout << "circle" << ' ';
					break;
				case 2:
					cout << "wave shape" << ' ';
					break;
				case 3:
					cout << "dimond shape" << ' ';
					break;
				}
				switch (a_card.amount) {
				case 1:
					cout << "1" << ' ';
					break;
				case 2:
					cout << "2" << ' ';
					break;
				case 3:
					cout << "3" << ' ';
					break;
				}
				switch (a_card.fill) {
				case 1:
					cout << "no_fill" << ' ';
					break;
				case 2:
					cout << "lines_fill" << ' ';
					break;
				case 3:
					cout << "full_fill" << ' ';
					break;
				}
				switch (a_card.color) {
				case 1:
					cout << "red" << ' ';
					break;
				case 2:
					cout << "green" << ' ';
					break;
				case 3:
					cout << "blue" << ' ';
					break;
				}
				cout << endl;
				switch (b_card.shape) {
				case 1:
					cout << "circle" << ' ';
					break;
				case 2:
					cout << "wave shape" << ' ';
					break;
				case 3:
					cout << "dimond shape" << ' ';
					break;
				}
				switch (b_card.amount) {
				case 1:
					cout << "1" << ' ';
					break;
				case 2:
					cout << "2" << ' ';
					break;
				case 3:
					cout << "3" << ' ';
					break;
				}
				switch (b_card.fill) {
				case 1:
					cout << "no_fill" << ' ';
					break;
				case 2:
					cout << "lines_fill" << ' ';
					break;
				case 3:
					cout << "full_fill" << ' ';
					break;
				}
				switch (b_card.color) {
				case 1:
					cout << "red" << ' ';
					break;
				case 2:
					cout << "green" << ' ';
					break;
				case 3:
					cout << "blue" << ' ';
					break;
				}
				cout << endl;
				switch (shape) {
				case 1:
					cout << "circle" << ' ';
					break;
				case 2:
					cout << "wave shape" << ' ';
					break;
				case 3:
					cout << "dimond shape" << ' ';
					break;
				}
				switch (amount) {
				case 1:
					cout << "1" << ' ';
					break;
				case 2:
					cout << "2" << ' ';
					break;
				case 3:
					cout << "3" << ' ';
					break;
				}
				switch (fill) {
				case 1:
					cout << "no_fill" << ' ';
					break;
				case 2:
					cout << "lines_fill" << ' ';
					break;
				case 3:
					cout << "full_fill" << ' ';
					break;
				}
				switch (color) {
				case 1:
					cout << "red" << ' ';
					break;
				case 2:
					cout << "green" << ' ';
					break;
				case 3:
					cout << "blue" << ' ';
					break;
				}
				cout << endl;
				if (cards[c_index].size() == 1) cards[c_index][0] = 0;
				else cards[c_index].pop_back();

			}

			int a_index = 0;
			switch (a_card.shape) {
			case 1:
				break;
			case 2:
				a_index += 3;
				break;
			case 3:
				a_index += 6;
				break;
			}
			switch (a_card.amount) {
			case 1:
				break;
			case 2:
				a_index += 1;
				break;
			case 3:
				a_index += 2;
				break;
			}
			switch (a_card.fill) {
			case 1:
				break;
			case 2:
				a_index += 9;
				break;
			case 3:
				a_index += 18;
				break;
			}
			switch (a_card.color) {
			case 1:
				break;
			case 2:
				a_index += 27;
				break;
			case 3:
				a_index += 54;
				break;
			}
			if (cards[a_index].size() == 1) cards[a_index][0] = 0;
			else cards[a_index].pop_back();

			int b_index = 0;
			switch (b_card.shape) {
			case 1:
				break;
			case 2:
				b_index += 3;
				break;
			case 3:
				b_index += 6;
				break;
			}
			switch (b_card.amount) {
			case 1:
				break;
			case 2:
				b_index += 1;
				break;
			case 3:
				b_index += 2;
				break;
			}
			switch (b_card.fill) {
			case 1:
				break;
			case 2:
				b_index += 9;
				break;
			case 3:
				b_index += 18;
				break;
			}
			switch (b_card.color) {
			case 1:
				break;
			case 2:
				b_index += 27;
				break;
			case 3:
				b_index += 54;
				break;
			}
			if (cards[b_index].size() == 1) cards[b_index][0] = 0;
			else cards[b_index].pop_back();
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cout << "enter the number of cards on the table >>" << endl;
	cin >> n;

	//init cards
	for (int i = 0; i < n; ++i) {
		card a{};
		a.c_init();
		int index = 0;
		switch (a.shape) {
		case 1:
			break;
		case 2:
			index += 3;
			break;
		case 3:
			index += 6;
			break;
		}
		switch (a.amount) {
		case 1:
			break;
		case 2:
			index += 1;
			break;
		case 3:
			index += 2;
			break;
		}
		switch (a.fill) {
		case 1:
			break;
		case 2:
			index += 9;
			break;
		case 3:
			index += 18;
			break;
		}
		switch (a.color) {
		case 1:
			break;
		case 2:
			index += 27;
			break;
		case 3:
			index += 54;
			break;
		}
		cards[index].push_back(1);
		v_cards.push_back(a);
	}

	search();
}
