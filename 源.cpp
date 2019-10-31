#include<iostream>
#include<string>
#include<conio.h>

int main()
{
	using namespace std;
	int qipan[19][20];
	int qipantwo[19][20];
	for (int h = 0; h < 20; h++)
	{
		for (int l = 0; l < 20; l++)
		{
			qipan[h][l] = 0;
		}
	}
	for(int h=0;h<19;h++)
	{
		for (int l = 0; l < 19; l++)
			qipantwo[h][l] = 0;

	}
	
	

	int x = 9; int y = 9;
	qipan[x][y] = 8;
for (int h = 0; h < 19; h++)
		{
			for (int l = 0; l < 20; l++)
			{
				switch (qipan[h][l])
				{
				case 0:if (l == 19)
					cout << endl;
					   else
                    cout << "·";
					break;
				case 8:
					cout << "＋";
					break;
				}
			}
}
int player = 1;
cout << "Player 1:";
while (true)
{
	
	char ch = _getch();
	
	switch (ch)
	{
	case'a':y = y - 1;
		qipan[x][y] = 8;
		qipan[x][y + 1] = 0;
		break;
	case'd':y = y + 1;
		qipan[x][y] = 8;
		qipan[x][y - 1] = 0;
		break;
	case'w':x = x - 1;
		qipan[x][y] = 8;
		qipan[x + 1][y] = 0;
		break;
	case's':x = x + 1;
		qipan[x][y] = 8;
		qipan[x - 1][y] = 0;
		break;
	case'z':if (qipantwo[x][y] != 0)
		      break;

		    else if (player == 1)
	  {
		qipantwo[x][y] = 1;
		for (int i = 1; i < 6; i++)
		{
			if (qipantwo[x - i][y] == 0)
			{
				qipan[x - i][y] = 8;
				qipan[x][y] = 0;
				x = x - i;
				break;
				}

			if (qipantwo[x + i][y] == 0)
			{
				qipan[x + i][y] = 8;
				qipan[x][y] = 0;
				x = x + i;
				break;
			}
			if (qipantwo[x][y + i] == 0)
			{
				qipan[x][y + i] = 8;
				qipan[x][y] = 0;
				y = y + i;
				break;
			}
			if (qipantwo[x][y - i] == 0)
			{
				qipan[x][y - i] = 8;
				qipan[x][y] = 0;
				y = y - i;
				break;
			}
	  }
          player = 2;
	}
			else 
	{
		qipantwo[x][y] = 2;
		for (int i = 1; i < 6; i++)
		{
			if (qipantwo[x - i][y] == 0)
			{
				qipan[x - i][y] = 8;
				qipan[x][y] = 0;
				x = x - i;
				break;
			}
			if (qipantwo[x + i][y] == 0)
			{
				qipan[x + i][y] = 8;
				qipan[x][y] = 0;
				x = x + i;
				break;
			}
			if (qipantwo[x][y + i] == 0)
			{
				qipan[x][y + i] = 8;
				qipan[x][y] = 0;
				y = y + i;
				break;
			}
			if (qipantwo[x][y - i] == 0)
			{
				qipan[x][y - i] = 8;
				qipan[x][y] = 0;
				y = y - i;
				break;
			}
		}
		player = 1;
		
	}
	}
	system("cls");
	for (int h = 0; h < 19; h++)
	{
		for (int l = 0; l < 20; l++)
		{
			if (l == 19)
				cout << endl;
			else if (qipan[h][l] == 8)
				cout << "＋";
			else if (qipantwo[h][l] == 0)
				cout << "·";
			else if (qipantwo[h][l] == 1)
				cout << "○";
			else if (qipantwo[h][l] == 2)
				cout << "●";
        }
	}
	if (player == 1)
		cout << "Player 1 ○:";
	else
		cout
		<< "Player 2 ●:";
	for (int h = 0; h < 19; h++)
	{
		for (int l = 0; l < 19; l++)
		{
			if (qipantwo[h][l] == 1 && qipantwo[h][l + 1] == 1 && qipantwo[h][l + 2] == 1 && qipantwo[h][l + 3] == 1 && qipantwo[h][l + 4] == 1)
			{
				cout << "THE GAME IS OVER!" << endl;

				cout << "Player1 ○win!";
			}
            if (qipantwo[h][l] == 2&& qipantwo[h][l + 1] ==2 && qipantwo[h][l + 2] == 2 && qipantwo[h][l + 3] == 2 && qipantwo[h][l + 4] == 2)
			{
						cout << "THE GAME IS OVER!" << endl;

						cout << "Player2  ●win!";
	        } 	
			if (qipantwo[h][l] == 1 && qipantwo[h+1][l] == 1 && qipantwo[h+2][l] == 1 && qipantwo[h+3][l] == 1 && qipantwo[h+4][l] == 1)
			{
				cout << "THE GAME IS OVER!" << endl;

				cout << "Player1 ○win!";
			}
			if (qipantwo[h][l] == 2 && qipantwo[h+1][l] == 2 && qipantwo[h+2][l] == 2&& qipantwo[h+3][l] == 2 && qipantwo[h+4][l] == 2)

			{
				cout << "THE GAME IS OVER!"<<endl;
				cout << "Player2 ●win!";
			}
			if (qipantwo[h][l] == 1 && qipantwo[h+1][l + 1] == 1 && qipantwo[h+2][l + 2] == 1 && qipantwo[h+3][l + 3] == 1 && qipantwo[h+4][l + 4] == 1)
			{
				cout << "THE GAME IS OVER!" << endl;

				cout << "Player1 ○win!";


			}
			if (qipantwo[h][l] == 2 && qipantwo[h + 1][l+1] == 2 && qipantwo[h + 2][l+2] == 2 && qipantwo[h + 3][l+3] == 2 && qipantwo[h + 4][l+4] == 2)

			{
				cout << "THE GAME IS OVER!" << endl;
				cout << "Player2 ●win!";
			}
			if (qipantwo[h][l] == 1 && qipantwo[h + 1][l-1] == 1 && qipantwo[h + 2][l-2] == 1 && qipantwo[h + 3][l-3] == 1 && qipantwo[h + 4][l - 4] == 1)
			{
				cout << "THE GAME IS OVER!" << endl;

				cout << "Player1 ○win!";
				

			}
			if (qipantwo[h][l] == 2&& qipantwo[h + 1][l - 1] == 2&& qipantwo[h + 2][l - 2] == 2 && qipantwo[h + 3][l - 3] == 2&& qipantwo[h + 4][l - 4] == 2)
			{
				cout << "THE GAME IS OVER!" << endl;

				cout << "Player2 ●win!";


			}
			
			
		}

	}
	

}
return 0;
	}
	