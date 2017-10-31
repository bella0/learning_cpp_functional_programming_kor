/* labyrinth.cpp */
#include <iostream>
#include <vector>

using namespace std;

const int rows = 8;
const int cols = 8;

vector<vector<char>> createLabyrinth()
{
	// ������ ���� labyrinth�� �ʱ�ȭ�Ѵ�.
	// #�� ����� �� ���� ���̴�.
	// S�� ��� ����, E�� ���� �����̴�.
	vector<vector<char>> labyrinth =
	{
		{ '#', '#', '#', '#', '#', '#', '#', '#' },
		{ '#', 'S', ' ', ' ', ' ', ' ', ' ', '#' },
		{ '#', '#', '#', ' ', '#', '#', '#', '#' },
		{ '#', ' ', '#', ' ', '#', '#', '#', '#' },
		{ '#', ' ', ' ', ' ', ' ', ' ', ' ', '#' },
		{ '#', ' ', '#', '#', '#', '#', '#', '#' },
		{ '#', ' ', ' ', ' ', ' ', ' ', 'F', '#' },
		{ '#', '#', '#', '#', '#', '#', '#', '#' }
	};

	return labyrinth;
}

void displayLabyrinth(vector<vector<char>> labyrinth)
{
	cout << endl;
	cout << "====================" << endl;
	cout << "The Labyrinth" << endl;
	cout << "====================" << endl;

	// ���� labyrinth�� ����Ѵ�.
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << labyrinth[i][j] << " ";
		}
		cout << endl;
	}
	cout << "====================" << endl << endl;
}

auto main() -> int
{
	vector<vector<char>> labyrinth = createLabyrinth();
	displayLabyrinth(labyrinth);

	string line;
	cout << endl << "Press enter to continue..." << endl;
	getline(cin, line);

	return 0;
}

