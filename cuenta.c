#include <iostream>
#include <fstream>
#include <string>
#include <time.h>


using namespace std;

int main(int argc, char ** argv)
{

clock_t t;
t = clock();

string line;
int one_c=0;
int two_c=0;
int thr_c=0;
int fou_c=0;
int fif_c=0;
ifstream f_count (argv[1]);
if (f_count.is_open())
{
	while ( getline (f_count,line) )
    	{
		int s = line.length();
      		for (int i=0;i<s;i++)
		{ 
		if(line[i] == '1'){one_c = one_c+1; 
		if(line[i+1] == '2' && i<(s-1)){two_c= two_c+1; 
		if(line[i+2] == '3' && i<(s-2)){thr_c= thr_c+1; 
		if(line[i+3] == '4' && i<(s-3)){fou_c= fou_c+1;
		if(line[i+4] == '5' && i<(s-4)){fif_c= fif_c+1;}
		}}}}}}
    	f_count.close();
}

ofstream f_w;
f_w.open (argv[2]);
f_w <<(one_c) << endl << (two_c) <<endl << (thr_c) << endl << (fou_c) << endl << (fif_c) << endl ;
f_w.close();

double seconds = ( clock() - t ) * 1.0 / double(CLOCKS_PER_SEC);
ofstream f_t;
f_t.open (argv[3]);
f_t << seconds << endl ;
f_t.close();


return 0;
}


