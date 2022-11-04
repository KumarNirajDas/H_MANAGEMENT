#include<iostream>
using namespace std;

int main()
{
int quant;
int choice;
//Quantity
int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
//food items sold
int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
//Total price of the items
int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken;


Cout<<"\n\t Quantity of items we have";
Cout<<"\n\t Rooms avaliable:";
Cin>>Qrooms;
Cout<<"\n Quantity of pasta:";
Cin>>Qpasta;
Cout<<"\n Quantity of burger:";
Cin>>Qburger;
Cout<<"\n Quantity of noodles:";
Cin>>Qnoodls;
Cout<<"\n Quantity of shake:";
Cin>>Qsake;
Cout<<"\n Quantity of chicken.roll :";
Cin>>Qchicken;


	Cout<<"\n\t\t\t please select from the menu options";
	Cout<<"\n\n1) Rooms";
	Cout<<"\n2) Pasta";
    Cout<<"\n3) Burger";
	Cout<<"\n4) Noodls";
	Cout<<"\n5) Shake";
	Cout<<"\n6) Chicken.roll";
	Cout<<"\n7) Information regarding the sales and collection";
	Cout<<"\n8) Esit";
	
	Cout<<"\n\n plese Enter your choice!";
	Cin>>choice;
	switch(choice)
	{
		case1:
			cout<<"\n\n Enter the number of rooms you want:",
			Cin>>quant;
			if(Qrooms-Srooms>=quant)
			{
				Srooms=Srooms+quant;
				Total_room=Total_room + quan*1200);
				Cout<<"\n\n\t\t"<<quant <<"room/rooms have been alloted to you!";
			}
			
			else
			
			Cout<<"\n\t Only "<<Qrooms-Srooms <<"Rooms remainging in hotel";
			break;
			
			
			case2:
			Cout<<"\n\n Enter the number of rooms we want:";
			Cin>>qunat;
			if(Qrooms-Srooms>=qunat)
			{
				Srooms=Srooms+quant;
				Total_rooms=Total_rooms+quant*1200);
				Cout<<"\n\n\t\t"<<quant<<"room/rooms have been allted to me !";
				
				
				}
			Cout<<"\n\n Enter pasta quantity:";
			Cin>>quant;
			if(Qpasta-Spasta>=)
			{
				Spasta=Spasta+quant;
				Total_pasta=Total_pasta+quat*250);
				Cout<<"\n\n\t\t"<<quant<<"pasta is the order!";
			}
			else
			Cout<<"\n\t only"<<Qpasta_Spasta
			<<"pasta remaing in hotel";
			break;
			Case3;
			Cout<<"n\n Enter Burger Quantity:";
			Cin>>quant;
			if(Qburger-Sburger>=quant)
			{
				Sburger=Sbutger+quant;
				Total_burger=Total_burger+quant*120);
				Cout<<"\n\n\t\t"<<quant<<"burger is the order!";
			}
			else
			Cout<<"\n\t only"<<Qburger-Sburger<<"burger remaning in hotel";
			break;
			case4:
				Cout<<\n\n\Enter Noodle Quantity:";
				Cin>>quant;
				if(Qnoodle-Snoodle>=Quant)
				{
			
					
				Snoodl=Snoodle+quant;
				Total_noodle=Total_noodle+quant*250;
				Cout<<"\n\n\t\t"<<quant<<"noodle is the order!";
			}
			else
			Cout<<"\n\t only"<<Qnoodle-Snoodle<<"Noodles remaings in hotel";
			break;
			Case5:
				Cout<<"\n\n Enter Shakes Quantity:";
				Cin>>quant;
				if(Qshake-Sshake>=quant)
				{
					Sshake=Sshake+quant;
					Total_shake=Total_ake+quant*250;
					Cout<<"\n\n\t\t"<<quant<<"shakes is the order!";
					
				}
				else
				Cout<<"\n\t only"Qshake-Sshake<<"Shake remaing in hotel";
				break;
				Case:
					Cout<<"\n\n Enter chicheb Quantity: ";
					cin>>quant;
					if (Qchicken-Schicken>=quant)
					{
						Schicken=Schicken+quant;
						Total_Chicken=Total_chicken+quant*150);
						Cout<<"\n\n\t\t"<<quant<<"chicken in the order;
					}
					else
					Cout<<"\n\t only "<<Qchicken-Schicken<<"Chickeb remaing in hotel";
					break;
					Case7:
						Cout<<"\n\t\t Details of slaes and collection";
						Cout<<\n\n Number of rooms we had; " << Qrooms;
						Cout<<"\n\n Number of rooms we gave ofr rent "<<Srooms;
						Cout<<"\n\n Remaing rooms:"<< Qrooms-Srooms;
						Cout<<"\n\n Total rooms collection for the day : " << Total_rooms;
						Cout<<"\n\n Number of pastas we had : "<<Qpastas;
						Cout <<"\n\n Remaing pastas:" << Qpasta-Spasta;
						Cout<<"\n\n Total pasta collection for the day : " << Total_Pasta;
						cout<<"\n\n Number of burger we had: " << Q utber;
						Cout<<"\n\n Number of burgers sold " << Sburger;
						Cout<< "\n\n Reamaing burgers: "<< Qburger-Sburger;
						Cout<<"\n\n Total burger collection for the day:"<<Total_burger;
						Cout<<"\n\n Number of Noodles We had:"<<Qnoodle;
						Cout<<"\n\n Number of noodles we sold" << Srooms;
						Cout<<"\n\n Remaing nooldes:"<<Qnodle-Snoodle;
						Cout<<"\n\n Total noodle collection of the day : " << Total_noodle;
						Cout<<"\n\n Number of shakes we had : " Qshake;
						Cout<<"\n\n Number of shakes we sold " << Ssold;
						Cout<<"\n\n Remaing shakes : " << Qshake-Sshake;
						Cout<<"\n\n Total shakes collection for the day:"<<Total_shake;
						Cout<<"\n\n Number of chicken we had:"<<Qchichen;
						Cout<<"\n\n Number of chicken we sold"<<Schicken"<< Schicken;
						Cout<<"\n\n Remaing Chichen :"<< Qchickeb-Schicken;
						Cout<<"\n\n Total chickebroll collection for the day : " << Total_chicken;
					    Cout<<"\n\n\n Total collection for the day:" Total_rooms+Total_pasta+Total_burger+Total_noodle+Total_shakes+Toatal_chicken;
					    break;
					    Case8:
					    	exit(0);
					    	default:
					    		Cout<<"\n please select the number mentioned above!";
					    	}
					    	gotom;
					    }
						
						
						
						
						
						
						
					}
					
				
				
				
				}
			
			
				}
			}
			}
				
			}
	}

				
	
