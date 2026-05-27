#include <iostream>
#include <fstream>
using namespace std;

char M[100][4];   // Memory
char IR[4];       // Instruction
char R[4];        // Register
int IC = 0;       // Counter

ifstream fin("input.txt");
ofstream fout("output.txt");

char buffer[40];

// Initialize memory
void init()
{
    for(int i=0;i<100;i++)
        for(int j=0;j<4;j++)
            M[i][j] = ' ';
}

// Execute program
void execute()
{
    while(true)
    {
        // Load instruction
        for(int i=0;i<4;i++)
            IR[i] = M[IC][i];

        IC++;

        // GD (Read)
        if(IR[0]=='G' && IR[1]=='D')
        {
            int loc = (IR[2]-'0')*10 + (IR[3]-'0');
            fin.getline(buffer,40);

            int k=0;
            for(int i=0;i<10;i++)
                for(int j=0;j<4;j++)
                    M[loc+i][j] = (buffer[k] != '\0') ? buffer[k++] : ' ';
        }

        // PD (Print)
        else if(IR[0]=='P' && IR[1]=='D')
        {
            int loc = (IR[2]-'0')*10 + (IR[3]-'0');

            for(int i=0;i<10;i++)
                for(int j=0;j<4;j++)
                    fout << M[loc+i][j];

            fout << endl;
        }

        // LR (Load Register)
        else if(IR[0]=='L' && IR[1]=='R')
        {
            int loc = (IR[2]-'0')*10 + (IR[3]-'0');
            for(int i=0;i<4;i++)
                R[i] = M[loc][i];
        }

        // SR (Store Register)
        else if(IR[0]=='S' && IR[1]=='R')
        {
            int loc = (IR[2]-'0')*10 + (IR[3]-'0');
            for(int i=0;i<4;i++)
                M[loc][i] = R[i];
        }

        // H (Stop)
        else if(IR[0]=='H')
        {
            break;
        }
    }
}

// Load program
void load()
{
    int m = 0;

    while(fin.getline(buffer,40))
    {
        if(buffer[0] == '$' && buffer[1] == 'A')   // $AMJ
        {
            init();
            IC = 0;
            m = 0;
        }
        else if(buffer[0] == '$' && buffer[1] == 'D') // $DTA
        {
            execute();
        }
        else if(buffer[0] == '$' && buffer[1] == 'E') // $END
        {
            continue;
        }
        else
        {
            int k=0;
            for(int j=0;j<4;j++)
                M[m][j] = buffer[k++];

            m++;
        }
    }
}

// Main
int main()
{
    load();
    fin.close();
    fout.close();
    return 0;
}