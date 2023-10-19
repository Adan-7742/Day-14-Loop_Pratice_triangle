//=======================================================================================================
//                                                                                                      =
//............................loop pratice using patterend..............................................=
//                                                                                                      =
//=======================================================================================================

#include <iostream>
using namespace std;
// this code is used to draw a complete triangle

/*
       *
	  * *
     * * *
	* * * *
	   
	   */
int triangle_0(int n) {

	for (int i = 1;i <= n;i++) {


		for (int k = n - i; k > 0; k--) {     //This for loop prints spaces before the letters in each row.
			//	The number of spaces printed
		   //is equal to 5 minus the current value of i
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {

		         cout << "* "; // in this line to add space to make a perfect triangle
				               //if we do not use space it will give us half paramid
							   //   

	    }

		cout << endl;
	}
	cout << "===================================================================================================" << endl;
	return 0;
}

// this sudo code is used to draw a complete triangle
//but in reverse order
/*


	* * * *
	 * * *
	  * *
	   *


*/

int triangle_1(int n) {

	for (int i = n;i >= 1;i--) {


		for (int k = n - i; k > 0; k--) {     //This for loop prints spaces before the letters in each row.
			//	The number of spaces printed
		   //is equal to 5 minus the current value of i
			cout << " ";
		}
		for (int j = i; j >0; j--) {

			cout << "* "; // in this line to add space to make a perfect triangle
			//if we do not use space it will give us half paramid
			//   

		}

		cout << endl;
	}
	cout << "===================================================================================================" << endl;
	return 0;
}
//this sudo code is used to draw a rectangle

/*



..*********
..*********
..*********
..*********
..*********








*/
int triangle_2(int n) {

	for (int i = 1;i <= n;i++) {  // this loop is used for printing or telling the computer to 
		                         //  to print row

		for (int j = 1;j <= n;j++) {      //this loop is used for printimh the coloum of patteren

			cout << "*";    // this is the output we want to print
		}

		cout << endl;
	}
	cout << "===================================================================================================" << endl;
	return 0;
}
//this sudo code is used to draw a rectangle

/*



		11111
		22222
		33333
		44444
		55555









*/

int triangle_3(int n) {

	for (int i = 1;i <= n;i++) {  // this loop is used for printing or telling the computer to 
		//  to print row

		for (int j = 1;j <= n;j++) {      //this loop is used for printimh the coloum of patteren

			cout << i;    // this is the output we want to print
			              // now our out put will be numbers 
		}

		cout << endl;
	}
	cout << "===================================================================================================" << endl;
	return 0;
}
/*



		12345
		12345
		12345
		12345
		12345




*/

int triangle_3(int n) {

	for (int i = 1;i <= n;i++) {  // this loop is used for printing or telling the computer to 
		//  to print row

		for (int j = 1;j <= n;j++) {      //this loop is used for printimh the coloum of patteren

			cout << j;    // this is the output we want to print
			// now our out put will be numbers
			// now these numbers will be in 12345 form
			//  
		}

		cout << endl;
	}
	cout << "===================================================================================================" << endl;
	return 0;
}

/*



		01010
		10101
		01010
		10101
		01010



*/

int triangle_4(int n) {

	for (int i = 1;i <= n;i++) {  // this loop is used for printing or telling the computer to 
		//  to print row

		for (int j = 1;j <= n;j++) {      //this loop is used for printimh the coloum of patteren

			cout << ((i+j) % 2)<<" ";    // this is the output we want to print
			// now our out put will be in 0 1 form
			
			//  
		}

		cout << endl;
	}
	cout << "===================================================================================================" << endl;
	return 0;
}
int main()
{   
	int c;
	cout << "Enter a number : " << endl;
	cin >> c;

	triangle_0(c);
	triangle_1(c);
	triangle_2(c);
	triangle_3(c);
	triangle_4(c);
}

