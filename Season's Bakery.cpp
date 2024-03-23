#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<<endl<<setw(70)<<"Season's Bakery\n\n";
	cout<<"Food & Drink Menu\n\n";
	char ans;
	int at=0,tq=0,re=0,repm=0,pm=0,c=0;
	int qty0=0,qty1=0,qty2=0,qty3=0,qty4=0,qty5=0,qty6=0,qty7=0,qty8=0,qty9=0,qty10=0,qty11=0,qty12=0,qty13=0,qty14=0,qty15=0;
	int od0=0,od1=0,od2=0,od3=0,od4=0,od5=0,od6=0,od7=0,od8=0,od9=0,od10=0,od11=0,od12=0,od13=0,od14=0,od15=0;
	do{	
	char u;
	int n,od,qty;
	//float ;
	cout<<"1.Cake"<<endl;
	cout<<"2.Cookies"<<endl;
	cout<<"3.Juice"<<endl;
	cout<<"4.Coffee & Tea"<<endl<<endl;
	cout<<"Enter your choice: ";
	cin>>n;
	cout<<endl;
	switch(n){
		case 1:{
			int bfc=2700,acc=3500,bc=2700,sbc=5500;
			cout<<"a.Black Forest Cake\n";
			cout<<"b.American cheese cake\n";
			cout<<"c.Blueberry cake\n";
			cout<<"d.Strawberry butter cake\n"<<endl;
			cout<<"Choose your order:";
			cin>>u;
			cout<<endl;
			switch (u){
				case 'a':{
				cout<<"Black Forest Cake \nPrice:"<<bfc<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty0+=qty;				
					od=bfc*qty;
					od0+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}
				case 'b':{
					cout<<"American cheese cake \nPrice:"<<acc<<endl;
				cout<<"\nEnter quantity amout:";
				cin>>qty;
				qty1+=qty;
					od=acc*qty;
					od1+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}
				case 'c':{
					cout<<"Blueberry cake \nPrice:"<<bc<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty2+=qty;
					od=bc*qty;
					od2+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}
				case 'd':{
					cout<<"Strawberry butter cake \nPrice:"<<sbc<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty3+=qty;
					od=sbc*qty;
					od3+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				} default : cout<<"Wrong input!\n";					
		}			
			break;
		}
		case 2:{
			int ab=6000,mc=4500,as=6000,svc=1200;
			cout<<"a.Almond Butterfly\n";
			cout<<"b.Marble Cookies\n";
			cout<<"c.Alomnd Sugar\n";
			cout<<"d.Strawberry Vanilla Cookies\n\n";
			cout<<"Choose your order:";
			cin>>u;
			cout<<endl;
			switch (u){
				case 'a':{
				cout<<"Almond Butterfly \nPrice:"<<ab<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty4+=qty;
					od=ab*qty;
					od4+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}
				case 'b':{
					cout<<"Marble Cookies \nPrice:"<<mc<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty5+=qty;
					od=mc*qty;
					od5+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}
				case 'c':{
					cout<<"Alomnd Sugar \nPrice:"<<as<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty6+=qty;
					od=as*qty;
					od6+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}
				case 'd':{
					cout<<"Strawberry Vanilla Cookies \nPrice:"<<svc<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty7+=qty;
					od=svc*qty;
					od7+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}	default : cout<<"Wrong input!\n";				
		}				
			break;		
		}
		case 3:{
			int app=2200,org=1800,pj=2200,wj=2200;
			cout<<"a.Apple Juice\n";
			cout<<"b.Orange Juice\n";
			cout<<"c.Pineapple Juice\n";
			cout<<"d.Watermelon Juice\n\n";
			cout<<"Choose your order:";
			cin>>u;
			cout<<endl;
			switch (u){
				case 'a':{
				cout<<"Apple Juice \nPrice:"<<app<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty8+=qty;
					od=app*qty;
					od8+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}
				case 'b':{
					cout<<"Orange Juice \nPrice:"<<org<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty9+=qty;
					od=org*qty;
					od9+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}
				case 'c':{
					cout<<"Pineapple Juice \nPrice:"<<pj<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty10+=qty;
					od=pj*qty;
					od10+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}
				case 'd':{
					cout<<"Watermelon Juice \nPrice:"<<wj<<endl;
				cout<<"\nEnter quantity amount:";
				cin>>qty;
				qty11+=qty;
					od=wj*qty;
					od11+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}	default : cout<<"Wrong input!\n";			
		}
			break;
		}
		case 4:{
			int cap=2200,cl=2500,esp=1600,ilt=2200;
			cout<<"a.Cappuccino\n";
			cout<<"b.Cafe Latte\n";
			cout<<"c.Espresso\n";
			cout<<"d.Iced Lemon Tea\n\n";
			cout<<"Choose your order:";
			cin>>u;
			cout<<endl;
			switch (u){
				case 'a':{
				cout<<"Cappuccino \nPrice:"<<cap<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty12+=qty;
					od=cap*qty;
					od12+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}
				case 'b':{
					cout<<"Cafe Latte\nPrice:"<<cl<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty13+=qty;
					od=cl*qty;
					od13+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}
				case 'c':{
					cout<<"Espresso\nPrice:"<<esp<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty14+=qty;
					od=esp*qty;
					od14+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}
				case 'd':{
					cout<<"Iced Lemon Tea \nPrice:"<<ilt<<endl;
				cout<<"\nEnter quantity:";
				cin>>qty;
				qty15+=qty;
					od=ilt*qty;
					od15+=od;
					cout<<"Total amount:"<<od<<endl;
					break;
				}default : cout<<"Wrong input!\n";			
		}
			break;
		}
		default : cout<<"Input number is wrong!"<<endl;
	}cout<<"\nAnymore order?\ny or n:";
	cin>>ans;
	cout<<endl;	
	tq+=qty;//+qty1+qty2+qty3+qty4+qty5+qty6+qty7+qty8+qty9+qty10+qty11+qty12+qty13+qty14+qty15;
	at+=od;
	}while(ans=='y');	
	/*cout<<"Total quantity:"<<tq<<endl;
	cout<<"Total cost:"<<at<<endl<<endl;*/
	cout<<"Order list\n\n";
	cout<<setw(5)<<"Order Name"<<setw(26)<<"Quantity"<<setw(10)<<"Price"<<endl;
	if(qty0>0) cout<<"Black Forest Cake"<<setw(15)<<qty0<<setw(14)<<od0<<endl;
	if(qty1>0) cout<<"American Cheese cake"<<setw(12)<<qty1<<setw(14)<<od1<<endl;
	if(qty2>0) cout<<"Blueberry Cake"<<setw(18)<<qty2<<setw(14)<<od2<<endl;
	if(qty3>0) cout<<"Strawberry Cake"<<setw(17)<<qty3<<setw(14)<<od3<<endl;
	if(qty4>0) cout<<"Almond Butterfly"<<setw(16)<<qty4<<setw(14)<<od4<<endl;
	if(qty5>0) cout<<"Marble Cookies"<<setw(18)<<qty5<<setw(14)<<od5<<endl;
	if(qty6>0) cout<<"Almond Sugar"<<setw(20)<<qty6<<setw(14)<<od6<<endl;
	if(qty7>0) cout<<"Strawberry Vanilla Cookies"<<setw(6)<<qty7<<setw(14)<<od7<<endl;
	if(qty8>0) cout<<"Apple Juice"<<setw(21)<<qty8<<setw(14)<<od8<<endl;
	if(qty9>0) cout<<"Orange Juice"<<setw(20)<<qty9<<setw(14)<<od9<<endl;
	if(qty10>0) cout<<"Pineapple Juice"<<setw(17)<<qty10<<setw(14)<<od10<<endl;
	if(qty11>0) cout<<"Watermellon Juice"<<setw(15)<<qty11<<setw(14)<<od11<<endl;
	if(qty12>0) cout<<"Cappuccino"<<setw(22)<<qty12<<setw(14)<<od12<<endl;
	if(qty13>0) cout<<"Cafe Latte"<<setw(22)<<qty13<<setw(14)<<od13<<endl;
	if(qty14>0) cout<<"Espresso"<<setw(24)<<qty14<<setw(14)<<od14<<endl;
	if(qty15>0) cout<<"Ice Lemon Tea"<<setw(19)<<qty15<<setw(14)<<od15<<endl;
	cout<<"_______________________________________________"<<endl;
	cout<<"Total"<<setw(27)<<tq<<setw(14)<<at<<endl<<endl;
	cout<<"Enter your payment amount:";
					cin>>pm;
	cout<<endl;
		if(at<pm){
		re=pm-at;
		cout<<"Your payment successful... \nHere is your cash back:"<<re<<"\nThank you!\n"<<endl;
		}
		else if(at==pm){
			cout<<"\nYour payment successful...\nThank You!\n\n";
		}
		else {
		while(c==0){
			re=at-pm;
		cout<<"Insufficient amount!\n";
		cout<<"Amount that you need to pay "<<re<<endl;
		cout<<"\nEnter more payment again:";
		cin>>repm;
		cout<<endl;
		pm+=repm;
		re=pm-at;
		if(at<=pm)c++;
		}
			if(at==pm){
 			cout<<"Your payment successful...\nThank You!\n\n";	
		}else {cout<<"Your payment successful...\nHere is your cash back:"<<re<<"\nThank you!\n"<<endl;}
		}
		return 0;
}