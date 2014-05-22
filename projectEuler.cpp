// projectEuler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
using namespace std;

using namespace std;


/*
//this is linked list stuff
////////////////////////////////////////////////////////////////////////////////////
typedef struct nodeT                                                
	{                                                               
      int data;               // will store information
      nodeT *next;             // the reference to the next node
	} node;




void printtt(node sadf)
{
		cout<<sadf->data<<endl;
		//return sadf;
} 
*/

void SumOf(int hg[][19])//
{
	int dig, rev=0;

		cout<<"we have it " <<endl;
		//return true;


}

bool palin(int t)//is this a palindrome or not
{
	int dig, rev=0;
	int orig = t;
	while (t > 0)
	{
      dig = t % 10;
      rev = rev * 10 + dig;
      t = t / 10;
	}
	if(orig==rev)
	{
		cout<<"we have it " <<t<<endl;
		return true;
	}
	else return false;
}



bool isPrime(int t)//is this a prime or not
{
	for(int b = 2; b<(t/2); b++)
	{
		if((fmod(t, b))==0)
		{
			return false;
		}
	}
	return true;
}

int findF(int t)//is this a prime or not
{
	int div=0;
	for(int g = 1;g<400000; g++)
	{
		if((fmod(t, g))==0)
			div++;
	}
	if(div>499)
	{
		cout<<" div is "<<div<<endl;
	}
	return div;

}



int main(int argc, char* argv[])
{
	using namespace std;


short nM =6;
	nM %= 12;
cout<<nM<<endl;


int temp = 0;
	int fg[3][3];
	int x=0, y=0, count=0;
	for(x=0;x<4; x++)
	{	
		cout<<" x" <<x<<" y "<<y<<endl;
		temp =x;
		for(y=0; y<4; y++)
		{
			
			for(; temp<=3; temp ++)
			{

			}
		}
		if(y==4&&temp==4) count++;
		cout<<count<<endl;
	}

		


//project euler problem 14
	/*int g = 0, max = 0, high = 0;
	for(g = 837799; g<1000000; g++)
	{
		int inx = g, count = 0;
		while(inx!=1)
		{
			if(inx%2==0) inx=inx/2;
			else inx=(inx*3)+1;
			count++;
			
			//if(inx>1000000) 
				//inx=1;
			else high = inx;
			//cout<<"   "<<count<<" number is "<<inx<<endl;
		}
		if(count>max)
		{
			max = count;
			high = g;
			
		}
		cout<<"count: "<<count<<" number is "<<g<<endl;
	}
	cout<<max;*/
	
	//char asdf[51] = 
	//"37107287533902102798797998220837590246510135740250";
	//char sdf = asdf[39];


	/*PE problem 12
	double total=0, div = 0;
	for(int x=0;x<400000000;x++)
	{
		total += x;
		if(total>600)
		{
			if((findF(total))>=499)
			{
				printf("total: = %f",  total);
			}
		}
	}
	//cout<<total<<endl;
	for(int g = 1;g<400000000; g++)
	{
		if((fmod(total, g))==0)
			div++;
	}
	cout<<div<<endl;*/

		/* project euler problem 11
		char* numg = "08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08 "
					"49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00 "
					"81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65 "
					"52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91 "
					"22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80 "
					"24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50 "
					"32 98 81 28 64 23 67 10 26 38 40 67 59 54 70 66 18 38 64 70 "
					"67 26 20 68 02 62 12 20 95 63 94 39 63 08 40 91 66 49 94 21 "
					"24 55 58 05 66 73 99 26 97 17 78 78 96 83 14 88 34 89 63 72 "
					"21 36 23 09 75 00 76 44 20 45 35 14 00 61 33 97 34 31 33 95 "
					"78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92 "
					"16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57 "
					"86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58 "
					"19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40 "
					"04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66 "
					"88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69 "
					"04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36 "
					"20 69 36 41 72 30 23 88 34 62 99 69 82 67 59 85 74 04 36 16 "
					"20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54 "
					"01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48 ";
	char g = numg[0];//just a test here
	char fg;//use this varible to get the char character one at a time
	int tot = 0, m =0, p=0, z = 0, x=0, y=0;
	int pp[400];
	int gt[20][20];
	while(numg[m] != NULL)
	{
		for(; numg[m]!=' '; m++)
		{
			fg = numg[m];//get each character, one at a time
			int testg = fg-48; //convert to INT
			if(z==0&&testg!=0) //if it's the first number in the set, multiply by 10
				testg = testg*10; 
			tot += testg; //add 7 + 80 = 87
			z++;
		}
		z=0;//reset z to zero, so we can *10 to the second digit only. 
		pp[p]=tot; //set the number in the int array
		gt[x][y] = tot;
		x++;
		cout<<" x "<<x<<" y "<<y<<" total: "<<gt[x][y]<<endl;
		if(x==20)
		{
			x = 0;
			y++;
		}
		p++;
		m +=1;
		tot = 0;
	}
	int h = 0;
	x=0, y=0;
	cout<<gt[1][1]<<endl;



	int er = fg;
	//so now we have an int array of 400 numbers
	double highestT = 0, ttot = 0;
	for(y=0; y<20; y++)
	{
		for(int x=0; x<20; x++)
		{
			int asdf = gt[x][y], sdfsdddf = gt[x+1][y], bbvbv= gt[x+2][y], sdfsdf= gt[x+3][y];
			if(x<16)
			ttot = (gt[x][y])*(gt[x+1][y])*(gt[x+2][y])*(gt[x+3][y]);
			if(ttot == 51267216)
			{
				int sf = 34;
			}
			if(ttot>highestT) highestT = ttot;
			if(y<17)
			ttot = (gt[x][y])*(gt[x][y+1])*(gt[x][y+2])*(gt[x][y+3]);
			if(ttot == 51267216)
			{
				int sf = 34;
			}
			if(ttot>highestT) highestT = ttot;
			if(x<18&&y<18)
			ttot = (gt[x][y])*(gt[x+1][y+1])*(gt[x+2][y+2])*(gt[x+3][y+3]);
			if(ttot == 51267216)
			{
				int sf = 34;
			}
			if(ttot>highestT) highestT = ttot;
			if((x>3)&&(y>3))
			{
			ttot = (gt[x][y])*(gt[x-1][y-1])*(gt[x-2][y-2])*(gt[x-3][y-3]);
			}
			if(ttot < 51267216)
			{
				int sf = 34;
			}
			if(ttot>highestT) highestT = ttot;
			if((x>3)&&(y>3))
			{
			ttot = (gt[x][y])*(gt[x-1][y+1])*(gt[x-2][y+2])*(gt[x-3][y+3]);
			}
			if(ttot>highestT) highestT = ttot;
		}
	}
	cout<<highestT<<endl;*/

	
	
	
	//initial rankinds
	
	//week 1
	//rank += sos win  = (team rank-120)/10 ex. rankied 50, beat 60th team = +6 points 
	//loss -= sos loss = team rank/10 ex. ranked 70th, loss to #1 team = -.1 points
	//tagibles = .8 if qb out, .5 rb, .4 wr
	//HOMEROAD = road loss, nothing. road win +.1, home win +.08
	//
				





	//week


	
	/*Project Euler problem 10
	double total=0, count = 0;
	for(double g=0; g<2000000; g++)
	{
		if(isPrime(g)) 
		{
			total+=g;
			count ++;
		}
	}
	printf("total: = %f",  total);
	*/
	
	
	/*Project Euler problem 9
	for(int a =1; a<1000; a++)
	{
		for(int b = 1; b<1000; b++)
		{
			for(int c = 1; c<1000; c++)
			{
				int gf = (a^2) + (b^2);
					if(((a*a) + (b*b) == (c*c)) &&(a<b)&&(b<c)&&(a+b+c==1000))
					cout<<a*b*c<<endl;
			}
		}
	}*/












	/*Euler problem # 8, highest product of 5 consectutive numbers from this:
	char* num = "73167176531330624919225119674426574742355349194934"
				"96983520312774506326239578318016984801869478851843"
				"85861560789112949495459501737958331952853208805511"
				"12540698747158523863050715693290963295227443043557"
				"66896648950445244523161731856403098711121722383113"
				"62229893423380308135336276614282806444486645238749"
				"30358907296290491560440772390713810515859307960866"
				"70172427121883998797908792274921901699720888093776"
				"65727333001053367881220235421809751254540594752243"
				"52584907711670556013604839586446706324415722155397"
				"53697817977846174064955149290862569321978468622482"
				"83972241375657056057490261407972968652414535100474"
				"82166370484403199890008895243450658541227588666881"
				"16427171479924442928230863465674813919123162824586"
				"17866458359124566529476545682848912883142607690042"
				"24219022671055626321111109370544217506941658960408"
				"07198403850962455444362981230987879927244284909188"
				"84580156166097919133875499200524063689912560717606"
				"05886116467109405077541002256983155200055935729725"
				"71636269561882670428252483600823257530420752963450";

	//int r = sizeof(num[]);
	char asdf = num[10];
	//cout<<asdf<<endl;
	int r[4];
	double dMax = 0;
	for(int y =1; num[y]!=NULL; y++)
	{
		int bb = y-1;
		for(int g = 0; g<5; g++)
		{
			char t = num[bb];
			int testg = t-48;
			//cout<<"number is "<<testg<<endl;
			r[g] = testg;
			bb++;
		}
		double dTemp = (r[0]*r[1]*r[2]*r[3]*r[4]);
		if(dTemp>dMax) dMax = dTemp;
		cout<<"current max is "<<dMax<<endl;
	
	}*/
	
	/*Euler problem # 7, what is the 10,001 prime number!
	int cntPrimes=0;
	for(double gt = 2; gt<106001; gt++)
	{
		if(isPrime(gt)==true)
		{
			cntPrimes++;
			cout<<"count : "<<cntPrimes<<endl;
			if(cntPrimes==10002)
			{
				cout<<"gt is "<<gt<<endl;
			}
		}
	}*/
		

/*

	//Euler problem, computer sum of squares times square of sums
	double SumofSq=0, SqOfSum, tota =0;

	for(int r = 0; r<=100; r++)
	{
		tota += r;
		cout<<tota<<endl;
	}

	for(int rr = 0; rr<=100; rr++)
	{
		SumofSq += (rr*rr);
		cout<<SumofSq<<endl;
	}
	
	SqOfSum =tota*tota;
	printf("SqOfSum: = %f",  SqOfSum);

	cout<<endl<<SumofSq-SqOfSum<<endl;
	printf("SumofSq: = %f",  SumofSq-SqOfSum);
	//cout<<"SqOfSum: "<<SqOfSum<<endl;*/
	
			//project euler problem 3
/*
	double h;
	for(double g=232792560; g<232792561; g++)
	{
		//printf("ttttttt = %f",  g);
		//cout<<endl;
		for(h=1;h<21; h++)
		{
			if(((fmod(g, h))==0)&&h==20)
			{
				 printf("SDF = %f",  g);  
			}
		}
	}*/
	






		//project euler problem 3
/*
	
	int largest;
	cout << "Hello world!" << endl;
	for(int x=100; x<1000; x++)
	{
		for(int y=100; y<1000; y++)
		{
			//cout<<"x "<<x<<endl;
			//cout<<"y "<<y<<endl;
			int pror = x*y;
			//int pror = 99999;

			//cout<<"proid "<<pror<<endl;
			if(palin(pror) == true)
			{
				if(largest == 0)
				 largest = pror;
				else if(pror>largest) largest = pror;
				cout<<"we have it " <<largest<<endl;
			}

		}
	}
	*/





	//project euler problem 3
/*
       double fac = 600851475143;
       for(double b=143; b<475143; b++)
       {
           //cout<<b<<endl;
           if(fmod(fac, b)==0)
           {
               
			   cout<<endl;
			   cout<<b<<endl;
			cout<<endl<<"Ok, NEXT NUMBER: ";
			   printf("SDF = %f",  b);
			   for(double gt = 2; gt<(b/2); gt++)
			   {
				   if((fmod(b, gt))==0)
				   {
					cout<<"we have a non-prime :-("<<endl;	 
					   printf("SDF = %f",  b);
						 cout<<endl;
						 printf("the divisor = %f",  gt);
						 cout<<endl;
				   }

			   }
			   		cout<<endl<<"DONE, ready for next"<<endl;


               printf("SDF = %f",  b);
           }

       }////////////////////////////////////////////////////////////////////////////////////8*/
	   	return 0;
}
	  
	/*
	//linked list practice
	typedef struct nodeT                                                
	{                                                               
      int data;               // will store information
      nodeT *next;             // the reference to the next node
	} node;

	node gtgt;
	node * d1;
	d1 = new node;
	d1-> data = 11;
	
	node * d2 = new node;
	d2-> data = 22;
	cout<<d2->data<<endl;

		node * d3 = new node;
	d3-> data = 33;
	cout<<d3->data<<endl;
		
		node * d4 = new node;
	d4-> data = 44;
	cout<<d4->data<<endl;
		
		node * d5 = new node;
	d5-> data = 55;
	cout<<d5->data<<endl;
		
		node * d6 = new node;
	d6-> data = 66;
	cout<<d6->data<<endl;
		
		node * d7 = new node;
	d7-> data = 77;
	cout<<d7->data<<endl;
		
		node * d8 = new node;
	d8-> data = 88;
	cout<<d8->data<<endl;
		
		node * d9 = new node;
	d9-> data = 99;
	cout<<d9->data<<endl;
		
		node * d10 = new node;
	d10-> data = 100;
	cout<<d10->data<<endl;
		
		node * d11= new node;
	d11-> data = 111;
	cout<<d11->data<<endl;
		
		node * d12 = new node;
	d12-> data = 112;
	cout<<d12->data<<endl;

	d1->next = d2;
	d2->next = d3;
	d3->next = d4;
	d4->next = d5;
	d5->next = d6;
	d6->next = d7;
	d7->next = d8;
	d8->next = d9;
	d9->next = d10;
	d10->next = d11;
	d12->next = NULL;

//	printtt(d1);
	printf("Hello World!\n");
	return 0;
}*/
	

////////////////////////////////////////////////////////////////////////////////////
	



	/*/////////////////////////////////////////////////////////////////////
	//this is project euler problem. first number to be triangular, pentagonal and hexa

	for(double x=0; x<=99999; x++)
	{
		double g = ((x*(x+1))/2);
		//cout<<g<<endl;
		for(double y=0; y<=99999; y++)
		{
			double r = ((y*((3*y)-1))/2);
			if(g==r)
			{
				for(double s=0; s<=99999; s++)
				{
					double t = (s*((2*s)-1));
					if(t==g) cout<<"got here"<<t<<endl;
				}
			}
		}

	}

	




	
	
	/*/////////////////////////////////////////////////////////////////////
	//this is project euler problem. Sum of ficonacci even numbers below 4 million
	  //long summ = 2;
	/*long cur = 0;
	long curp = 2;
	long curpp = 1;
	for(long i = 0; cur<4000000; i++)
	{
		
		cur = curp + curpp;
		if(cur%2==0) summ += cur;
		curpp = curp;
		curp = cur;
		cout<<cur<<endl;
		cout<<"sum: "<<summ<<endl;
		//else cout<<summ<<endl;
	}*/
	//cout<<summ<<endl;	



  	/*/////////////////////////////////////////////////////////////////////
	/*/////////////////////////////////////////////////////////////////////
	/*for(int i = 0; i<=1000; i++)
	{
		if(i%3==0&&i%5==0)
			cout<<"fizzbuzz"<<endl;
		else if(i%5==0)
			cout<<"buzz"<<endl;
		else if(i%3==0)
			cout<<"fizz"<<endl;
		else cout<<i<<endl;
	}*/

	
	
	/*//////////////////////////////////////////////////////////////////////
	//this is practice for comparing magazine with random charact4erse
	

/*ransomNote[];

int n = 0
char test;
for(n=0, n>ransomNote.size; n++)
{
	test = ransomNote[];
	bool pass = 0;
	for(i=0; i<=magazine.size; i++)
	{
		if(test == magazine[i];
			break;
	}
	if(pass == 0 )
		break;//a character in the rasom note is not in the magazine
}
*/

	
/*let's make a hash table
map<std::string, std::string> hashtable1;
map<int, char> hashtable2;
hashtable2[2] = 'f';
hashtable1["e"] = "G";*/

	







	/*//////////////////////////////////////////////////////////////////////
	//array of inteters
	//do we know the max and min?
	//can there be duplicates?
	int ages[100] = {91, 101, 111, 121, 131, 141, 11, 21, 31, 41, 51, 61, 71, 81, 9, 10, 11, 12, 13, 14, 1, 2, 3, 4, 5, 6, 7, 8, 34, 45, 45,
	45, 345, 78, 89, 34, 56, 43, 5, 23, 123, 56, 54, 34, 23, 12, 21, 41, 51, 61, 65, 63, 73, 44};
	
	int sorteda[100];




	/*//////////////////////////////////////////////////////////////////////
	//array has been rotated, fine the min element in array
	
	/*
	int atra[14] = {9, 10, 11, 12, 13, 14, 1, 2, 3, 4, 5, 6, 7, 8 };
	//int atra[8] = {2, 3, 4, 5, 6, 7, 1 };
	//int atra[8] = {5, 6, 7, 1, 2, 3, 4 };
	//int atra[8] = {6, 7, 1, 2, 3, 4, 5 };
	//we know the size and mid point of array!
	int imax = 14;
	int imid = imax/2, imin = 0, minn;
	while((imin!=imid)||(imid!=imax))
	{
		if(atra[imin]>atra[imax/2])
			imax=imax/2;
		else if(atra[imin]<atra[imax/2])
		{
			imin = imid;
			imid = imax;
		}
		else if(imin==imax)
			minn = atra[imin];//if first is greater than mid, this means the min is to the left
	
		//the array has been rotated forward
		
	}*/

	/*min = first;
	if(first>mid)
	{
		mid = mid/2;
	}
	else if(first<mid)
	{
		mid = max
		first = mid;
	}



	int min = atra[0];
	for(int sz = 0; sz<7; sz++)
	{
		
		if(atra[sz]<min)
			min = atra[sz];

	}*/
	//std::cout<<"MIN IS " <<minn<<std::endl;
	
	
	//////////////////////////////////////////////////////////////////////*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//////////////////////////////////////////////////////////////////////
	//min element in array
	/*
	
	int atra[8] = {3, 4, 5, 6, 7, 1, 2 };
	int min = atra[0];
	for(int sz = 0; sz<7; sz++)
	{
		
		if(atra[sz]<min)
			min = atra[sz];

	}
	std::cout<<"MIN IS " <<min<<std::endl;
	*/













	///////////////////////////////////////////////////////////////////////
	//clock degrees practice
	/*
	char* hour, *minute;
	char resw;
	hour = "6";
	minute = "23";
	int ihour= ::atoi(hour);
	int iminute = ::atoi(minute);
	int result;
	if((ihour*30)>(iminute*6))
	{
		result = ((ihour*30)-(iminute*6));
		std::cout<<result<<std::endl;
	}		
	else if((ihour*30)<(iminute*6))
	{
		result = (iminute*6)-(ihour*30);
		std::cout<<result<<std::endl;
	}
	else if((ihour*30)==(iminute*6))
	{
		std::cout<<"zero"<<std::endl;
	}
	else
		std::cout<<"error"<<std::endl;



	int degrees = (ihour*30)+(iminute*6);
	//std::cout<<degrees;
	*/




