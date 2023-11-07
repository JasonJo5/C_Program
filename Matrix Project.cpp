#include<iostream>
using namespace std;

int main(){
	
	//================================================== DECLARATION =================================================//
	int op, r, c, m[3][3], m2[3][3], jml=0, hasil [3][3];
		
	
	//=============================================== INPUT ROW, COLUMN ==============================================//
	results:
	
		cout<< "INPUT ROW: ";
		cin>> r;
		cout<< "INPUT COLUMN: ";
		cin>> c;
		cout<< endl;
		
		if (r==c){
			//================================================ INPUT MATRIX 1 ================================================//
			cout<< " ====== INPUT MATRIX A ======"<< endl;
			for (int i=0 ; i<r ; i++){
				for (int j=0 ; j<c; j++){
					cout<< "Input Value:  " <<"ROW"<< "[" << i << "]" << " COLUMN" << "[" << j << "]: " ;
					cin>> m[i][j];
				}
			}
			cout<<endl;
		
			//================================================ INPUT MATRIX 2 ================================================//
			cout<< " ====== INPUT MATRIX B ======"<< endl;
			for (int i=0 ; i<r ; i++){
				for (int j=0 ; j<c; j++){
					cout<< "Input Value:  " <<"ROW"<< "[" << i << "]" << " COLUMN" << "[" << j << "]: " ;
					cin>> m2[i][j];
				}
			}
			cout<<endl;
			
			//============================================== OUTPUT BOTH MATRIX ==============================================//
			cout<< "== MATRIX A =="<<endl;
			for(int i=0 ; i<r ; i++){
				for(int j=0 ; j<c ; j++){
					cout<< "  "<< m[i][j];
				}
				cout<< endl;
			}
			
			cout<< endl;
			cout<< "== MATRIX B =="<<endl;
			for(int i=0 ; i<r ; i++){
				for(int j=0 ; j<c ; j++){
					cout<< "  "<< m2[i][j];
				}
				cout<< endl;
			}
			cout<<endl;
		
			//============================================== MATRIX SUMMATION ==============================================//
				cout<<"[SUMMATION OF MATRIX A & B]";
				cout<<endl;
				
				for (int i=0 ; i<r ; i++)
				{
					for (int j=0 ; j<c ; j++)
					{
					int result = m[i][j] + m2[i][j];
					cout<< "  "<< result << " ";
					}
					cout<<endl;
				}	
				cout<<endl;
			
			//============================================== MATRIX SUBSTRACTION ==============================================//
				cout<<"[SUBSTRACTION OF MATRIX A & B]";
				cout<<endl;
				
				for (int i=0 ; i<r ; i++)	
				{
					for (int j=0 ; j<c ; j++)
					{
					int result = m[i][j] - m2[i][j];
					cout<< "  "<< result << " ";
					}
					cout<<endl;
				}	
				cout<<endl;
			
			//============================================== MATRIX MULTIPLICATION ==============================================//
				cout<<"[MULTIPLICATION OF MATRIX A & B]";
				
				for(int i=0 ; i<r ; i++){
					for(int j=0 ; j<c ; j++){
						jml = 0;
						for(int k=0 ; k<r ; k++){
							jml = jml + m[i][k] * m2[k][j];
						}
						hasil[i][j] = jml;
					}
				}
			
				cout<< endl;
				for(int i=0 ; i<r ; i++){
					for(int j=0 ; j<c ; j++){
						cout<<"  " << hasil[i][j] << "  ";
					}
					cout<< endl;
				}
				cout<< endl;
			
			//============================================== MATRIX TRANSPOSE ==============================================//
				cout<<"[TRANSPOSE OF MATRIX A]";
				cout<< endl;
				
				for (int i=0 ; i<r ; i++)
				{
					for (int j=0 ; j<c ; j++)
					{
					int result = m[i][j];
					result = m[j][i];
					cout<< "  "<< result << " ";
					}
					cout<<endl;
				}	
				cout<<endl;
				
				cout<<"[TRANSPOSE OF MATRIX B]";
				cout<< endl;
				
				for (int i=0 ; i<r ; i++)
				{
					for (int j=0 ; j<c ; j++)
					{
					int result = m2[i][j];
					result = m2[j][i];
					cout<< "  "<< result << " ";
					}
					cout<<endl;
				}
	}
	else{
		cout<< " -- PLEASE INPUT THE SAME ORDO OF MATRIX! -- ";
		cout<< endl << endl;
		goto results;
	}	
	
}
