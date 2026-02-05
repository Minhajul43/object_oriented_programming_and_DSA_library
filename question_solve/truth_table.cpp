// #include<iostream>
// using namespace std;
// int main()
// {
//   int X ,Y , Z;
//   printf("X \t Y \t Z \t  XY+Z \n");
//   for(X=0;X<=1;X++){
//     for(Y=0;Y<=1;Y++){
//       for(Z=0;Z<=1;Z++){
//         if((X&&Y)||Z){
//           cout <<("%d \t %d \t %d \t  1\n",X,Y,Z);
//         }
//         else{
//           cout <<("%d \t %d \t %d \t  0\n",X,Y,Z);
//         }
//       }
//     }
//   }
//   return 0;
// }

#include<iostream>
using namespace std;

int main()
{
	int X, Y, Z;
	cout<< ("X \t Y \t \Z \t XY+Z\n");
	
	//X value range 0 to 1
	for(X=0; X<=1; X++)
	{	
		//Y value range 0 to1
		for(Y=0;Y<=1; Y++)
		{
			//Z value range 0 to1
			for(Z=0;Z<=1;Z++)
			{
				//check for the XY+Z True values
				if((X &&Y) || Z)
				{
					//print 1 for the true value
					cout<<("%d \t %d \t %d \t 1\n", X,Y, Z );
				}
				else
				{
					//print 0 for the false value
					cout<<("%d \t %d \t %d \t 0\n", X,Y, Z );
				}
			}
		}
	}

    return 0;
}