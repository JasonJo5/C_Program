#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int print_menu()
{
	int input;
	cout<<endl;
	cout<<"------ Choose Operation to do ------"<<endl;
	cout<<"===================================="<<endl;
	cout<<" 1 = Add a new employee"<<endl;
	cout<<" 2 = Delete an employee"<<endl;
	cout<<" 3 = Edit an employee"<<endl;
	cout<<" 4 = Print the list of employees"<<endl;
	cout<<" 5 = Search for an employee"<<endl;
	cout<<" 6 = Close the program"<<endl;
	cout<<"===================================="<<endl;
	cout<<"Choose [1-6] : ";
	cin>> input;
	cout<<endl;
	return input;
}

bool add_employee(char employeelist[100][10], char employee_name[10], int index)
{
	for(int y=0;y<10;y++)
	{
		employeelist[index][y]=employee_name[y];	
	}
	
	if(!strcmp(employeelist[index], employee_name))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int delete_employee(char employeelist[100][10], char employee_name[10])
{  int employee_to_delete=0;
    for (int y = 0; y < 100; y++) 
        {
    if (!strcmp(employeelist[y], employee_name)) 
    {
        employee_to_delete=y; 
        break;
    } 
        }
        return employee_to_delete;
}


int edit_employee(char employeelist[100][10],char current_name[10], char new_name)
{  
	int employee_to_edit=0;
	for (int y = 0; y < 100; y++) 
    {
    	if (!strcmp(employeelist[y], current_name)) 
    	{
        	employee_to_edit=y; 
    		cout<<employeelist[y]<<" "; //jj
        	break;
    	} 
    }
    return employee_to_edit;
}

int search_employees(char employeelist[100][10], char name_to_search[10])
{
	
	int employee_to_search=0;
	for (int y = 0; y < 100; y++) 
    {
    	if (!strcmp(employeelist[y],name_to_search)) 
    	{
        	employee_to_search=y; 
    		cout<<employeelist[y]<<" "; //jj
        	break;
    	}
    }
    return employee_to_search;
	
}

//================================================================================================== LIST OF EMPLOYEE =======//
void print_employees(char employeelist[100][10], int index)
{
	for(int x=0;x<index;x++)
	{
		cout<<(x+1) <<". "<< employeelist[x]<<endl;
	}
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
main(){
	int menu_choice = print_menu();
	char employee_global_list[ 100 ] [ 10 ];
	int index=0;
	
	while(menu_choice!=6){
		if(menu_choice>0 && menu_choice<=6){
			
			switch(menu_choice){
			//=================================================================================== ADD NEW EMPLOYEE ===========//
			case 1: {
				cout<<"------ Add a new employee ------"<<endl;
				char name[10];
				cout <<"Please enter a name to add to the list : ";
				cin>>name;
				int result=add_employee(employee_global_list, name, index);
				if(result==true)
				{
					index++;
					cout<<name<<" added to the list successfully "<<endl;	
				}
				else
				{
					cout<<"Ops something goes wrong"<<endl;
				}	
				break;
			}
			
			
			//=================================================================================== DELETE EMPLOYEE ===========//	
			case 2:{
				cout<<"-------- Delete an employee --------"<<endl;
				char name[10];
		        cout << "Enter a name to delete from the list: ";
		        cin >> name;
		        int delete_index = delete_employee(employee_global_list, name);
		        cout<<"found the element at "<<delete_index;
		        for(int x=delete_index;x<100;x++)
		        {
		            for(int z=0;z<10;z++)
		            {
		              employee_global_list[delete_index][z]=employee_global_list[delete_index+1][z];  
		            }
		            
		        }
		        index--;
		        cout<<"name to be deleted found at "<<index+1<<endl;
				cout<<endl;
	        	cout<<"successfully deleted!"<<endl;
				break;
	        	
				}
			
			
			//=================================================================================== EDIT EMPLOYEE ===========//
			case 3:{
				cout<<"-------- Edit an employee --------"<<endl;
				char name[10];
				int new_name;
				char latest_name [10];
        		cout << "which name you want to edit from the list: ";
        		cin >> name;
        	
        		int edit_index = edit_employee(employee_global_list, name, new_name);
        		cout<<"found at number: "<<edit_index+1<<endl; 
        		cout<<"enter new name: ";
        		cin>> latest_name;
        	
        	
				for (int x = 0; x < 10; x++)
        		{
        			employee_global_list[edit_index][x] = latest_name[x];	
				}
				cout<<latest_name<<"successfully changed"<<endl;
				break;
			}
			//=================================================================================== LIST OF EMPLOYEE =======//
			case 4: {
				cout<<"------ list of employees ------"<<endl;
				cout<<"===================================="<<endl;
				print_employees(employee_global_list, index);	
				cout<<"===================================="<<endl;
				break;
			}
			
		
			//================================================================================= SEARCH FOR EMPLOYEE ======//	
			case 5:
				cout<<"-------- Search for an employee --------"<<endl;
				char name[10];
				int new_name;
				cout<<"Search employee name: ";
				cin>> name;
				
				int search_index = search_employees(employee_global_list, name);
        		cout<<"employee found at number: "<<search_index+1<<endl; 
        		
				break;
		}
			menu_choice = print_menu();
	}else
	cout<<"Please enter a value betweenn 1 to 6 "<<endl;
}
}
