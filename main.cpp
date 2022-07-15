#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
#include<conio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;
int sid =0 ;
int bid = 0 ;
int tripId = 0;
int clientId = 0;
int tid = 0;
/*function to check condition for insertion sort*/

void storingValueInSid(){
   ifstream finCount;
   finCount.open("busStationCount.txt");
   if(!finCount){
      cout<<"File not Exists";getch();return;
   }
   finCount>>sid;
   finCount.close();
}
void storingCountInFile(){
   ofstream foutCount;
   foutCount.open("busStationCount.txt");
   foutCount<<sid;
   foutCount.close();

}
void storingValueInBid(){
   ifstream finBusCount;
   finBusCount.open("busCount.txt");
   finBusCount>>bid;
   finBusCount.close();
}
void storingBusCountInFile(){
   ofstream foutBusCount;
   foutBusCount.open("busCount.txt");
   foutBusCount<<bid;
   foutBusCount.close();
}
void storingValueInTripId(){
   ifstream finTripID;
   finTripID.open("busTripID.txt");
   if(!finTripID){
      tripId=0;return;
   }
   finTripID>>tripId;
   finTripID.close();
}
void storingTripIDinFile(){
   ofstream foutTripID;
   foutTripID.open("busTripID.txt");
   foutTripID<<tripId;
   foutTripID.close();

}
void storingValueInclientId(){
   ifstream finclientID;
   finclientID.open("clientID.txt");
   if(!finclientID){
      clientId=0;return;
   }
   finclientID>>clientId;
   finclientID.close();
}
void storingclientIdinFile(){
   ofstream foutclientID;
   foutclientID.open("clientID.txt");
   foutclientID<<clientId;
   foutclientID.close();

}
void storingValueInTid(){
   ifstream finCount;
   finCount.open("ticketsCount.txt");
   if(!finCount){
      cout<<"File not Exists";getch();return;
   }
   finCount>>tid;
   finCount.close();
}
void storingTCountInFile(){
   ofstream foutCount;
   foutCount.open("ticketsCount.txt");
   foutCount<<tid;
   foutCount.close();

}

void funFrontPage(){
   cout<<"\n\n   Hi, Welcome To Our Project : Bus Station Info";
   getch();
   system("cls");
   cout<<"\n\n\t\t\t\t  JAYPEE INSTITUTE OF INFORMATION TECHNOLOGY";
   cout<<"\n\t\t\t\t\t\tSec(62) NOIDA  \n\n\n";
   cout<<"\t\t\t\t\tDATA-STRUCTURES : 15B11CI311\n\n\n";
   cout<<"\t\t\t\t      MINI-PROJECT  : BUS STATION INFO\n\n";
   cout<<"\t\t\t\t\t        Batch : B3\n\n";
   cout<<"\n\n\n\n\n\n\t\t\t\t\tDevelopedBy : ";
   cout<<"\n\n\t\t\t\t\t\tKUNAL : 19103103";
   cout<<"\n\n\t\t\t\t\t\tAKASH DWIVEDI: 19103095";
   cout<<"\n\n\t\t\t\t\t\tRAGHAV KACHHWAHA: 19103111";

   getch();
}
void funHeading(string Heading){
   system("cls");
   cout<<"\n\t\t\t\t\tMINI PROJECT : BUS STATION INFO\n\n\n";
   //transform(Heading.begin(),Heading.end(),Heading.begin(), :: toupper);
   cout<<"   "<<Heading<<"\n";
}
int stringCmp(string str1,string str2){
   int l1 = str1.length();
   int l2 = str2.length();
   int x = (l1>l2)?l1:l2;
   for(int i=0;i<x;i++){
      if(str2[i]>str1[i]){return 1;}
      else if(str2[i]<str1[i]){return 0;}
   }
   if(l1==l2) return 2;
   if(l2>l1) return 1;
   return 0;
}
int stringMatch(string str1,string str2){
   int l1 = str1.length();
   int l2 = str2.length();
   if(l1!=l2) return 0;
   for(int i=0;i<l1;i++){
      if(str2[i]!=str1[i]){
         return 0;
      }
   }
   return 1;
}
int countDigits(int a){
   int i =0 ;
   while(a>0){
      i++;
      a/=10;
   }
   return i;
}
int countChar(char * arr){
   int i=0;
   while(arr[i]!='\0'){i++;}
   return i;
}
int choiceAdmin(int a){
   int x;
   if(a==0){
      funHeading("Options : ");
      cout<<"\n   1. Client Side"<<endl;
      cout<<"   2. Admin Side"<<endl;
      cout<<"   3. Exit"<<endl;
   }
   else if(a==1){
      funHeading("Client Side Features : ");
      cout<<"\n   0. GoBack"<<endl;
      cout<<"\n   1. Book A Ticket"<<endl;
      cout<<"   2. Cancel Your Ticket"<<endl;
      cout<<"   3. Collect Your Ticket"<<endl;

   }
   else if(a==2){
      funHeading("Admin Side Features : ");
      cout<<"\n   0. GoBack"<<endl;
      cout<<"\n   1. Alter BusStation Record"<<endl;
      cout<<"   2. Alter Bus Record"<<endl;
      cout<<"   3. Reset EmptySeats For A Bus"<<endl;
      cout<<"   4. View all Buses Arrives At A Station"<<endl;
      cout<<"   5. View all Tickets For a Trip of a Bus"<<endl;

   }
   else if(a==3){
      funHeading("Altering Bus Station Record : ");
      cout<<"\n   0.GoBack"<<endl;
      cout<<"\n   1.Add BusStation Record"<<endl;
      cout<<"   2.Show BusStation Record"<<endl;
      cout<<"   3.Delete BusStation Record"<<endl;
      cout<<"   4.Update BusStation Record"<<endl;

   }
   else if(a==4){
      funHeading("Altering Bus Record : ");
      cout<<"\n   0.GoBack"<<endl;
      cout<<"\n   1.Add Bus Record"<<endl;
      cout<<"   2.Show Bus Record"<<endl;
      cout<<"   3.Delete Bus Record"<<endl;
      cout<<"   4.Update Bus Record"<<endl;

   }
   cout<<"\n   Enter your Choice : ";
   cin>>x;
   return x;
}
void fundisplay(){
   cout<<endl<<"   SNo BusNo  Model        Type            Origin        Destination    Arrival    Departure  Duration Seats Avlbl Fare\n";

}

class BusStation{
   private:
      int stationId;
      char stationName[20];
   public:
      BusStation(){
         stationId = 0;
         strcpy(stationName,"NoName");
      }
      BusStation(char *sName){
         sid++;
         stationId=sid;
         strcpy(stationName,sName);
      }
      void getBusStationInfo(){
         cout<<"Enter the Name : ";
         cin.getline(stationName,19);
         sid++;
         stationId = sid;
      }
      void showBusStationInfo(){
         cout<<stationName<<endl;
      }
      int getstationId(){return stationId;}
      string getstationName(){return stationName;}
      char * getstationName2(){return stationName;}
      int storeStation();
      int getStations(int x);
};
int BusStation::getStations(int x){
   int i=0;
   ifstream finStationRecord;
   finStationRecord.open("busStations.txt",ios::in|ios::binary);
   if(!finStationRecord){cout<<"File not Found";}
   else{
      while(!finStationRecord.eof()&&i!=x+1)
      {
         finStationRecord.read((char *)this,sizeof(*this));
         i++;
      }
   }
}
int BusStation::storeStation(){
   ofstream foutStation;
   foutStation.open("busStations.txt",ios::app|ios::binary);
   foutStation.write((char *)this,sizeof(*this));
   foutStation.close();
}
void funStationInput(BusStation *bs1,int x){
   int y = x+sid;
   BusStation obj;
   for(int i =sid,k=0;i<y;i++,k++){
      if(x>1){cout<<"\n   Enter Station "<<k+1<<"\n";}
      else{cout<<"\n";}
      cout<<"   ";
      obj.getBusStationInfo();
      string objName = obj.getstationName();
      int j;
      for(j = sid-1;j>0;j--){
         string cmpName = bs1[j-1].getstationName();
         int k = stringCmp(cmpName,objName);
         if(k==0){bs1[j] = bs1[j-1];}
         else{break;}
      }
      bs1[j] = obj;
   }
}
void insertNewStation(){
   int x;
   storingValueInSid();
   cout<<"\n   Enter the No. of Entries you want to Insert: ";
   cin>>x;cin.ignore();
   if(x==0){return;}
   BusStation bs1[sid+x];
   funHeading("Inserting Bus Station Record: ");
   cout<<endl<<"   S.No.  StationLocation\n\n";
   for(int i=0;i<sid;i++){
      bs1[i].getStations(i);
      cout<<"   "<<i+1<<".";
      int j = countDigits(i+1);
      for(int k = j;k<8;k++) cout<<" ";
      bs1[i].showBusStationInfo();
   }
   funStationInput(bs1,x);
   storingCountInFile();
   remove("busStations.txt");
   for(int i=0;i<sid;i++){bs1[i].storeStation();}
   cout<<"\n\n   Record Inserted\n\n   Press any Key To Update The Record";
   getch();
}
int inputDeleteChoices(){
   int x;
   cout<<"   1.Delete Via SerialNumber(*Convenient)"<<endl;
   cout<<"   2.Delete Via StationName"<<endl;
   cout<<"   3.Go Back"<<endl;
   cout<<"\n   Enter your Choice : ";
   cin>>x;
   return x;
}
void deleteStation(){
   storingValueInSid();
   if(sid==0){cout<<"\n   No Record Exists";getch();return;}
   BusStation bs1[sid];
   for(int i=0;i<sid;i++){bs1[i].getStations(i);}
   redo:;
   funHeading("Deleting A Station Record : ");
   cout<<endl<<"   S.No.  StationLocation\n\n";
   for(int i=0;i<sid;i++){
      cout<<"   "<<i+1<<".";
      int j = countDigits(i+1);
      for(int k = j;k<8;k++) cout<<" ";
      bs1[i].showBusStationInfo();
   }
   cout<<"\n\n";
   int ch = inputDeleteChoices();
   if(ch == 1){
      int sr;
      cout<<"\n   Enter the S.No. : ";cin>>sr;
      if(sr<=0||sr>sid){cout<<"\n   Invalid No!";getch();goto redo;}
      cin.ignore();
      char cnfm;
      cout<<"\n   Are you Sure to Delete Record "<<bs1[sr-1].getstationName()<<" (y/n) : ";
      //cnfm = getch();cout<<cnfm;
      cin>>cnfm;
      if(cnfm == 'y'||cnfm == 'Y'){
         for(int i=sr-1;i<sid;i++){bs1[i]=bs1[i+1];}
         sid--;
         cout<<"\n\n   Record Deleted\n\n   Press any Key to Update Record";getch();
      }
      goto redo;
   }
   else if(ch==2){
      int sr;char sName[20];
      cout<<"\n   Enter the StationName : ";
      cin.ignore();cin.getline(sName,19);
      bool f=0;
      for(int i=0;i<sid;i++){
         string stName = bs1[i].getstationName();
         int match = stringMatch(stName,sName);
         if(match==1){f=1;sr=i+1;break;}
      }
      if(f!=1){cout<<"\n\n   Record Already Not Exists\n\n   Press any Key";getch();goto redo;}
      char cnfm;
      cout<<"\n   Are you Sure to Delete Record "<<bs1[sr-1].getstationName()<<" (y/n) : ";cin>>cnfm;//cnfm = getch();cout<<cnfm;
      if(cnfm == 'y'||cnfm == 'Y'){
         for(int i=sr-1;i<sid;i++){bs1[i]=bs1[i+1];}
         sid--;
         cout<<"\n\n   Record Deleted\n\n   Press any Key to Update Record";getch();
      }
      goto redo;
   }
   else if (ch==3){
      storingCountInFile();
      remove("busStations.txt");
      for(int i=0;i<sid;i++){bs1[i].storeStation();}
      return;
   }
   else{cout<<"\n   Enter the Correct Choice!";getch();goto redo;}
}
int inputUpdateChoices(){
   int x;
   cout<<"   1.Update Via SerialNumber(*Convenient)"<<endl;
   cout<<"   2.Update Via StationName"<<endl;
   cout<<"   3.Go Back"<<endl;
   cout<<"\n   Enter your Choice : ";
   cin>>x;
   return x;
}
void updateStation(){
   storingValueInSid();
    if(sid==0){cout<<"\n   No Record Exists";getch();return;}
   BusStation bs1[sid];
   for(int i=0;i<sid;i++){bs1[i].getStations(i);}
   redo:;
   funHeading("Updating A Bus Station Record : ");
   cout<<endl<<"   S.No.  StationLocation\n\n";
   for(int i=0;i<sid;i++){
      cout<<"   "<<i+1<<".";
      int j = countDigits(i+1);
      for(int k = j;k<8;k++) cout<<" ";
      bs1[i].showBusStationInfo();
   }
   cout<<"\n\n";
   char newName[20];
   int ch = inputUpdateChoices();
   if(ch == 1){
      int sr;cout<<"\n   Enter the S.No. : ";cin>>sr;
      if(sr<=0||sr>sid){cout<<"\n   Invalid No!";getch();goto redo;}
      cin.ignore();
      cout<<"\n   Enter New StationName forStation ("<<bs1[sr-1].getstationName()<<") : ";
      cin.getline(newName,19);
      char cnfm;
      cout<<"\n   Are you Sure to Update the Record to "<<newName<<" (y/n) : ";
      cin>>cnfm;
      //cnfm = getch();
      cout<<cnfm;
      if(cnfm == 'y'||cnfm == 'Y'){
         for(int i=sr-1;i<sid;i++){bs1[i]=bs1[i+1];}
         sid--;
         BusStation obj(newName);
         int j;
         for(j = sid-1;j>0;j--){
            string cmpName = bs1[j-1].getstationName();
            int k = stringCmp(cmpName,newName);
            if(k==0){bs1[j] = bs1[j-1];}
            else{break;}
         }
         bs1[j] = obj;
         cout<<"\n\n   Record Updated\n\n   Press any Key to Update Record";getch();
      }
      goto redo;
   }
   else if(ch==2){
      int sr;char sName[20];
      cout<<"\n   Enter the StationName : ";
      cin.ignore();cin.getline(sName,19);
      bool f=0;
      for(int i=0;i<sid;i++){
         string stName = bs1[i].getstationName();
         int match = stringMatch(stName,sName);
         if(match==1){f=1;sr=i+1;break;}
      }
      if(f!=1){cout<<"\n\n   No Record Found\n\n   Press any Key";getch();goto redo;}
      cout<<"\n   Enter New StationName forStation ("<<bs1[sr-1].getstationName()<<") : ";
      cin.getline(newName,19);
      char cnfm;
      cout<<"\n   Are you Sure to Update the Record to "<<newName<<" (y/n) : ";
      //cnfm = getch();cout<<cnfm;
      cin>>cnfm;
      if(cnfm == 'y'||cnfm == 'Y'){
         for(int i=sr-1;i<sid;i++){bs1[i]=bs1[i+1];}
         sid--;
         BusStation obj(newName);
         int j;
         for(j = sid-1;j>0;j--){
            string cmpName = bs1[j-1].getstationName();
            int k = stringCmp(cmpName,newName);
            if(k==0){bs1[j] = bs1[j-1];}
            else{break;}
         }
         bs1[j] = obj;
         cout<<"\n\n   Record Updated\n\n   Press any Key to Update Record";getch();
      }
      goto redo;
   }
   else if (ch==3){
      storingCountInFile();
      remove("busStations.txt");
      for(int i=0;i<sid;i++){bs1[i].storeStation();}
      return;
   }
   else{cout<<"\n   Enter the Correct Choice!";getch();goto redo;}
}
void viewStationRecord(){
   storingValueInSid();
   if(sid==0){cout<<"\n   No Record Found";getch();return;}
   BusStation bs1[sid];
   cout<<endl<<"   S.No.  StationLocation\n\n";
   for(int i=0;i<sid;i++){
      bs1[i].getStations(i);
      cout<<"   "<<i+1<<".";
      int j = countDigits(i+1);
      for(int k = j;k<8;k++) cout<<" ";
      bs1[i].showBusStationInfo();
   }
   getch();
}

class BusInfo{
   private:
      char busNo[10];
      char busModel[30];
      char busType[15];
      int Seats;
      int EmptySeats;
      int TripNo;
      char Origin[20];
      char Destination[20];
      char ArrivalAt[10];
      char Departure[10];
      char Duration[12];
      int fare;
   public:
      BusInfo(){
         strcpy(busNo,"null");
         strcpy(busModel,"null");
         strcpy(busType,"null");
         strcpy(Origin,"null");
         strcpy(Destination,"null");
         strcpy(ArrivalAt,"null");
         strcpy(Departure,"null");
         strcpy(Duration,"null");
         Seats = 0;EmptySeats = 0;fare = 0;
      }
      void getBusInfo(){
         cout<<"\n\n   Enter the Bus No.      :  ";
         cin.getline(busNo,9);
         cout<<"\n   Enter the Bus Model    :  ";
         cin.getline(busModel,29);
         int type=1;
         do{
             cout<<"\n   Choose the BusType : \n";
             cout<<"      1.Ordinary\n";
             cout<<"      2.Deluxe\n";
             cout<<"      3.Ultra deluxe\n";
             cout<<"\n      Enter an option :  ";
             cin>>type;
             if(type>3||type<0){
               cout<<"\n   Enter the Correct Choice!";getch();
             }
         }while(type>3||type<0);

         if(type==1){strcpy(busType,"Ordinary");}
         if(type==2){strcpy(busType,"Deluxe");}
         if(type==3){strcpy(busType,"Ultra Deluxe");}
         redo1:;
         funHeading("Inserting Bus Record : ");
         cout<<"\n\n   Enter the Bus No.      :  "<<busNo;
         cout<<"\n\n   Enter the Bus Model    :  "<<busModel;
         cout<<"\n\n   Enter the Bus Type     :  "<<busType<<"\n\n";

         storingValueInSid();
         BusStation bs1[sid];
         cout<<endl<<"   S.No.  StationLocation\n\n";
         for(int i=0;i<sid;i++){
            bs1[i].getStations(i);
            cout<<"   "<<i+1<<".";
            int j = countDigits(i+1);
            for(int k = j;k<8;k++)
               cout<<" ";
            bs1[i].showBusStationInfo();
         }
         int sr;cout<<"\n   Choose The Origin (S.No) : ";cin>>sr;
         if(sr<=0||sr>sid){cout<<"\n   Invalid Choice!";getch();goto redo1;}
         strcpy(Origin,bs1[sr-1].getstationName2());

         redo2:;
         funHeading("Inserting Bus Record : ");
         cout<<"\n\n   Enter the Bus No.      :  "<<busNo;
         cout<<"\n\n   Enter the Bus Model    :  "<<busModel;
         cout<<"\n\n   Enter the Bus Type     :  "<<busType;
         cout<<"\n\n   Enter the Origin       :  "<<Origin<<"\n\n";
         cout<<endl<<"   S.No.  StationLocation\n\n";
         for(int i=0;i<sid;i++){
            bs1[i].getStations(i);
            cout<<"   "<<i+1<<".";
            int j = countDigits(i+1);
            for(int k = j;k<8;k++) cout<<" ";
            bs1[i].showBusStationInfo();

         }
         sr=0;cout<<"\n   Choose The Destination (S.No) : ";cin>>sr;
         if(sr<=0||sr>sid){cout<<"\n   Invalid Choice!";getch();goto redo2;}
         strcpy(Destination,bs1[sr-1].getstationName2());

         funHeading("Inserting Bus Record : ");
         cout<<"\n\n   Enter the Bus No.        :  "<<busNo;
         cout<<"\n\n   Enter the Bus Model      :  "<<busModel;
         cout<<"\n\n   Enter the Bus Type       :  "<<busType;
         cout<<"\n\n   Enter the Origin         :  "<<Origin;
         cout<<"\n\n   Enter the Destination    :  "<<Destination;

         cin.ignore();
         cout<<"\n\n   Enter the Arrival Time   :  ";
         cin.getline(ArrivalAt,9);
         cout<<"\n   Enter the Departure Time :  ";
         cin.getline(Departure,9);
         cout<<"\n   Enter the Duration       :  ";
         cin.getline(Duration,9);
         cout<<"\n   Enter the No. Of Seats   :  ";
         cin>>Seats;
         EmptySeats=Seats;
         cout<<"\n   Enter the Fare           :  ";
         cin>>fare;cin.ignore();
         bid++;
         storingValueInTripId();
         tripId++;
         TripNo = tripId;
         storingTripIDinFile();
      }
      void showBusInfo(){
         int c=0;
         c=countChar(busNo);
         cout<<busNo;
         for(int i=c;i<7;i++) cout<<" ";
         c=countChar(busModel);
         cout<<busModel;
         for(int i=c;i<13;i++) cout<<" ";
         c=countChar(busType);
         cout<<busType;
         for(int i=c;i<16;i++) cout<<" ";
         c=countChar(Origin);
         cout<<Origin;
         for(int i=c;i<15;i++) cout<<" ";
         c=countChar(Destination);
         cout<<Destination;
         for(int i=c;i<14;i++) cout<<" ";
         c=countChar(ArrivalAt);
         cout<<ArrivalAt;
         for(int i=c;i<11;i++) cout<<" ";
         c=countChar(Departure);
         cout<<Departure;
         for(int i=c;i<11;i++) cout<<" ";
         c=countChar(Duration);
         cout<<Duration;
         for(int i=c;i<10;i++) cout<<" ";
         c=countDigits(Seats);
         cout<<Seats;
         for(int i=c;i<6;i++) cout<<" ";
         c=countDigits(Seats);
         cout<<EmptySeats;
         for(int i=c;i<5;i++) cout<<" ";
         cout<<fare;
      }

      void setBusNo(char * newBusNo){strcpy(busNo,newBusNo);}
      void setBusModel(char * newBusModel){strcpy(busModel,newBusModel);}
      void setBusType(char * newBusType){strcpy(busType,newBusType);}
      void setBusOrigin(char * newOrigin){strcpy(Origin,newOrigin);}
      void setBusDestination(char * newDestination){strcpy(Destination,newDestination);}
      void setBusArrival(char * newArrivalAt){strcpy(ArrivalAt,newArrivalAt);}
      void setBusDeparture(char * newDeparture){strcpy(Departure,newDeparture);}
      void setBusDuration(char * newDuration){strcpy(Duration,newDuration);}
      void setBusFare(int newFare){fare=newFare;}
      void setBusSeats(int newSeats){
         EmptySeats =EmptySeats + newSeats-Seats;
         Seats=newSeats;
      }
      void setBusEmptySeats(int x){EmptySeats = EmptySeats-x;}
      void resetReservedSeats(){EmptySeats = Seats;}

      char * getBusNo(){return busNo;}
      char * getBusOrigin(){return Origin;}
      char * getBusDestination(){return Destination;}
      char * getBusType(){return busType;}
      char * getBusDeparture(){return Departure;}
      char * getBusArrival(){return ArrivalAt;}
      char * getBusDuration(){return Duration;}
      int getBusTripNo(){return TripNo;}
      int getBusFare(){return fare;}
      int getBusEmptySeats(){return EmptySeats;}
      int getBusSeats(){return Seats;}

      void getBus(int);
      void storeBus();

};
void BusInfo::getBus(int x){
   int i=0;
   ifstream finBusRecord;
   finBusRecord.open("bus.txt",ios::in|ios::binary);
   if(!finBusRecord){cout<<"File not Found";}
   else{
      while(!finBusRecord.eof()&&i!=x+1)
      {
         finBusRecord.read((char *)this,sizeof(*this));
         i++;
      }
   }
}
void BusInfo::storeBus(){
   ofstream foutBus;
   foutBus.open("bus.txt",ios::app|ios::binary);
   foutBus.write((char *)this,sizeof(*this));
   foutBus.close();
}
void funInputBus(BusInfo *b,int x){
   int y = x+bid;
   BusInfo obj;
   for(int i=bid;i<y;i++){
      funHeading("Inserting Bus Record : ");
      obj.getBusInfo();
      string objOrigin = obj.getBusOrigin();
      int j;
      for(j = bid-1;j>0;j--){
         string cmpOrigin = b[j-1].getBusOrigin();
         int k = stringCmp(cmpOrigin,objOrigin);
         if(k==0){b[j] = b[j-1];}
         else if(k==2){
            string objDestination = obj.getBusDestination();
            string cmpDestination = b[j-1].getBusDestination();
            int k = stringCmp(cmpDestination,objDestination);
            if(k==0){b[j] = b[j-1];}
            else{goto in;}
         }
         else{break;}
      }
      in:;
      b[j] = obj;
   }
}
void insertNewBus(){
   int x;
   storingValueInBid();
   cout<<"\n   Enter the No. of Entries you want to Insert: ";
   cin>>x;
   if(x==0){return;}
   cin.ignore();
   BusInfo b[bid+x];
   for(int i=0;i<bid;i++){b[i].getBus(i);}
   funInputBus(b,x);
   storingBusCountInFile();
   remove("bus.txt");
   for(int i=0;i<bid;i++){b[i].storeBus();}
   cout<<"\n\n   Record Inserted\n\n   Press any Key To Update The Record";getch();
}
void viewBusRecord(){
   storingValueInBid();
   if(bid == 0){cout<<"\n\n   No Record Exists";getch();return;}
   BusInfo b[bid];
   cout<<"\n";
   fundisplay();
   for(int i=0;i<bid;i++){
      b[i].getBus(i);
      cout<<"   "<<i+1<<".";
      int j = countDigits(i+1);
      for(int k = j;k<3;k++) cout<<" ";
      b[i].showBusInfo();
      cout<<"\n";
   }
   getch();
}
int inputBusDeleteChoices(){
   int x;
   cout<<"   1.Delete Via SerialNumber(*Convenient)"<<endl;
   cout<<"   2.Delete Via BusNo."<<endl;
   cout<<"   3.Go Back"<<endl;
   cout<<"\n   Enter your Choice : ";
   cin>>x;
   return x;
}
void deleteBus(){
   storingValueInBid();
   if(bid == 0){cout<<"\n   No Record Found!";getch();return;}
   BusInfo b[bid];
   for(int i=0;i<bid;i++){b[i].getBus(i);}
   redo:;
   funHeading("Deleting A Bus Record : ");
   fundisplay();
   for(int i=0;i<bid;i++){
      cout<<"   "<<i+1<<".";
      int j = countDigits(i+1);
      for(int k = j;k<3;k++) cout<<" ";
      b[i].showBusInfo();
      cout<<"\n";
   }
   cout<<"\n\n";
   int ch = inputBusDeleteChoices();
   if(ch == 1){
      int sr;cout<<"\n   Enter the S.No. : ";cin>>sr;
      if(sr<=0||sr>sid){cout<<"\n   Invalid Choice!";getch();goto redo;}
      cout<<"\n";
      fundisplay();
      cout<<"   "<<sr<<".  ";
      b[sr-1].showBusInfo();
      cin.ignore();
      char cnfm;
      cout<<"\n\n   Are you Sure to Delete The above Record (y/n) : ";cin>>cnfm;
      //cnfm = getch();cout<<cnfm;
      if(cnfm == 'y'||cnfm == 'Y'){
         for(int i=sr-1;i<bid;i++){b[i]=b[i+1];}
         bid--;
         cout<<"\n\n   Record Deleted\n\n   Press any Key to Update Record";getch();
      }
      goto redo;
   }
   else if(ch==2){
      int sr;char busNo[12];
      cout<<"\n   Enter the BusNo : ";
      cin.ignore();
      cin.getline(busNo,11);
      bool f=0;
      for(int i=0;i<bid;i++){
         string cmpBusNo = b[i].getBusNo();
         int match = stringMatch(cmpBusNo,busNo);
         if(match==1&&f==0){
            f=1;fundisplay();
            cout<<"   "<<i+1<<".  ";
            b[i].showBusInfo();
            cout<<"\n";
         }
         else if(match==1){
            cout<<"   "<<i+1<<".  ";
            b[i].showBusInfo();
            cout<<"\n";
         }
      }
      if(f!=1){cout<<"\n\n   Record Already Not Exists\n\n   Press any Key";getch();goto redo;}
      cout<<"\n   Enter the S.No. : ";cin>>sr;
      if(sr<=0||sr>sid){cout<<"\n   Invalid Choice!";getch();goto redo;}
      if(sr<=0||sr>=bid){cout<<"\n   Record Not Exists : \n\n   Press Any Key";getch();goto redo;}
      cin.ignore();
      char cnfm;
      cout<<"\n   Are you Sure to Delete the Record (y/n) : ";cin>>cnfm;
      //cnfm = getch();cout<<cnfm;
      if(cnfm == 'y'||cnfm == 'Y'){
         for(int i=sr-1;i<bid;i++){b[i]=b[i+1];}
         bid--;
         cout<<"\n\n   Record Deleted\n\n   Press any Key to Update Record";getch();
      }
      goto redo;
   }
   else if (ch==3){
      storingBusCountInFile();
      remove("bus.txt");
      for(int i=0;i<bid;i++){b[i].storeBus();}
      return;
   }
   else{cout<<"\n   Enter the Correct Choice!";getch();goto redo;}

}
int inputBusUpdateChoices(int k){
   int x;
   if(k==1){
      cout<<"   1.Update Via SerialNumber(*Convenient)"<<endl;
      cout<<"   2.Find the serial No. Via BusNo(and then update)"<<endl;
      cout<<"   3.Go Back"<<endl;
   }
   else if(k==2){
      cout<<"   1.Edit BusFeatures"<<endl;
      cout<<"   2.Edit BusTripInfo"<<endl;
      cout<<"   3.GoBack"<<endl;
   }
   else if(k==3){
      cout<<"   1.Change BusNo"<<endl;
      cout<<"   2.Change BusModel"<<endl;
      cout<<"   3.Change BusType"<<endl;
      cout<<"   4.Change No. Of Seats"<<endl;
      cout<<"   5.GoBack"<<endl;
   }
   else if(k==4){
      cout<<"   1.Change BusOrigin"<<endl;
      cout<<"   2.Change BusDestination"<<endl;
      cout<<"   3.Change Arrival Time"<<endl;
      cout<<"   4.Change Departure Time"<<endl;
      cout<<"   5.Change Duration"<<endl;
      cout<<"   6.Change Fare"<<endl;
      cout<<"   7.GoBack"<<endl;
   }
   cout<<"\n   Enter your Choice : ";cin>>x;return x;
}
int cnfm(){
   char x;
   cout<<"\n   Are You Sure (y/n) : ";cin>>x;
   //x = getch();cout<<x;
   if(x=='y'||x=='Y') return 1;
   else return 0;
}
void updateBusRecord(){
   storingValueInBid();
   if(bid == 0){cout<<"\n   No Record Exists";getch();return;}
   BusInfo b[bid];
   for(int i=0;i<bid;i++){b[i].getBus(i);}
   redo:;
   funHeading("Updating A Bus Record : ");
   fundisplay();
   for(int i=0;i<bid;i++){
      cout<<"   "<<i+1<<".";
      int j = countDigits(i+1);
      for(int k = j;k<3;k++) cout<<" ";
      b[i].showBusInfo();
      cout<<"\n";
   }
   cout<<"\n\n";
   int ch = inputBusUpdateChoices(1);
   if(ch == 1){
      int sr;cout<<"\n   Enter the S.No. : ";cin>>sr;
      if(sr<=0||sr>bid){cout<<"\n   Invalid Choice!";getch();goto redo;}
      cin.ignore();
      redo1:;
      funHeading("Updating A Bus Record : ");
      fundisplay();
      cout<<"   "<<sr<<".  ";
      b[sr-1].showBusInfo();
      cout<<"\n\n";
      int k = inputBusUpdateChoices(2);
      if(k==1){
         cout<<"\n\n";
         k=inputBusUpdateChoices(3);
         if(k==1){
            char newBusNo[12];
            cout<<"\n   Enter the New busNo. : ";
            cin>>newBusNo;
            int y=cnfm();
            if(y==1){
               b[sr-1].setBusNo(newBusNo);
               cout<<"\n\n   Record Has Been Updated\n\n   Press Any Key";
               getch();
            }
            goto redo1;
         }
         else if(k==2){
            cin.ignore();
            char newBusModel[20];
            cout<<"\n   Enter the New Bus Model : ";
            cin.getline(newBusModel,11);
            int y=cnfm();
            if(y==1){
               b[sr-1].setBusModel(newBusModel);
               cout<<"\n\n   Record Has Been Updated\n\n   Press Any Key";
               getch();
            }
            goto redo1;
         }
         else if(k==3){
            int type;
            char newbusType[13];
            do{
                cout<<"\n   Choose the NewBusType : \n";
                cout<<"      1.Ordinary\n";
                cout<<"      2.Deluxe\n";
                cout<<"      3.Ultra deluxe\n";
                cout<<"\n      Enter an option :  ";
                cin>>type;
            }while(type>3||type<0);
            if(type==1){strcpy(newbusType,"Ordinary");}
            if(type==2){strcpy(newbusType,"Deluxe");}
            if(type==3){strcpy(newbusType,"Ultra Deluxe");}
            int y=cnfm();
            if(y==1){
               b[sr-1].setBusType(newbusType);
               cout<<"\n\n   Record Has Been Updated\n\n   Press Any Key";
               getch();
            }
            goto redo1;

         }
         else if(k==4){
            int newSeats;cout<<"\n   Enter the New No. Of Seats : ";cin>>newSeats;
            int y=cnfm();
            if(y==1){
               b[sr-1].setBusSeats(newSeats);
               cout<<"\n\n   Record Has Been Updated\n\n   Press Any Key";
               getch();
            }
            goto redo1;
         }
         else if(k==5){
           goto redo1;
         }
         else{cout<<"\n\n   Enter the Correct Choice!";getch();goto redo1;}
      }
      else if(k==2){
         cout<<"\n\n";
         k=inputBusUpdateChoices(4);
         if(k==1){
            storingValueInSid();
            BusStation bs1[sid];
            cout<<endl<<"   S.No.  StationLocation\n\n";
            for(int i=0;i<sid;i++){
               bs1[i].getStations(i);
               cout<<"   "<<i+1<<".";
               int j = countDigits(i+1);
               for(int k = j;k<8;k++) cout<<" ";
               bs1[i].showBusStationInfo();
            }
            int sr1;cout<<"\n   Choose The Origin (S.No) : ";cin>>sr1;
            int y=cnfm();
            if(y==1){
               BusInfo obj;
               obj = b[sr-1];
               char * newOrigin = bs1[sr1-1].getstationName2();
               obj.setBusOrigin(newOrigin);
               for(int i=sr-1;i<bid;i++){b[i]=b[i+1];}
               //bid--;
               string objOrigin = obj.getBusOrigin();
               int j;
               for(j = bid-1;j>0;j--){
                  string cmpOrigin = b[j-1].getBusOrigin();
                  int k = stringCmp(cmpOrigin,objOrigin);
                  if(k==0){b[j] = b[j-1];}
                  else if(k==2){
                     string objDestination = obj.getBusDestination();
                     string cmpDestination = b[j-1].getBusDestination();
                     int k = stringCmp(cmpDestination,objDestination);
                     if(k==0){b[j] = b[j-1];}
                     else{goto in;}
                  }
                  else{break;}
               }
               in:;
               b[j] = obj;
               cout<<"\n\n   Record Has Been Updated\n\n   Press Any Key";getch();
               sr = j+1;
            }
            goto redo1;
         }
         else if(k==2){
            storingValueInSid();
            BusStation bs1[sid];
            cout<<endl<<"   S.No.  StationLocation\n\n";
            for(int i=0;i<sid;i++){
               bs1[i].getStations(i);
               cout<<"   "<<i+1<<".";
               int j = countDigits(i+1);
               for(int k = j;k<8;k++) cout<<" ";
               bs1[i].showBusStationInfo();
            }
            int sr1;cout<<"\n   Choose The Destination (S.No) : ";cin>>sr1;
            int y=cnfm();
            if(y==1){
               BusInfo obj;
               obj = b[sr-1];
               char * newDestination = bs1[sr1-1].getstationName2();
               obj.setBusDestination(newDestination);
               for(int i=sr-1;i<bid;i++){b[i]=b[i+1];}
               //bid--;
               string objOrigin = obj.getBusOrigin();
               int j;
               for(j = bid-1;j>0;j--){
                  string cmpOrigin = b[j-1].getBusOrigin();
                  int k = stringCmp(cmpOrigin,objOrigin);
                  if(k==0){b[j] = b[j-1];}
                  else if(k==2){
                     string objDestination = obj.getBusDestination();
                     string cmpDestination = b[j-1].getBusDestination();
                     int k = stringCmp(cmpDestination,objDestination);
                     if(k==0){b[j] = b[j-1];}
                     else{goto in1;}
                  }
                  else{break;}
               }
               in1:;
               b[j] = obj;
               cout<<"\n\n   Record Has Been Updated\n\n   Press Any Key";getch();sr = j+1;
            }
            goto redo1;
         }
         else if(k==3){
            char newArrival[12];cout<<"\n   Enter the New Arrival Time : ";
            cin.ignore();cin.getline(newArrival,11);
            int y=cnfm();
            if(y==1){
               b[sr-1].setBusArrival(newArrival);
               cout<<"\n\n   Record Has Been Updated\n\n   Press Any Key";getch();
            }
            goto redo1;
         }
         else if(k==4){
            char newDeparture[12];cout<<"\n   Enter the New Departure Time : ";
            cin.ignore();cin.getline(newDeparture,11);
            int y=cnfm();
            if(y==1){
               b[sr-1].setBusDeparture(newDeparture);
               cout<<"\n\n   Record Has Been Updated\n\n   Press Any Key";getch();
            }
            goto redo1;
         }
         else if(k==5){
            char newDuration[12];cout<<"\n   Enter the New Duration : ";
            cin.ignore();cin.getline(newDuration,11);
            int y=cnfm();
            if(y==1){
               b[sr-1].setBusDuration(newDuration);
               cout<<"\n\n   Record Has Been Updated\n\n   Press Any Key";getch();
            }
            goto redo1;

         }
         else if(k==6){
            int newFare;cout<<"\n   Enter the New Fare : ";cin>>newFare;
            int y=cnfm();
            if(y==1){
               b[sr-1].setBusFare(newFare);
               cout<<"\n\n   Record Has Been Updated\n\n   Press Any Key";getch();
            }
            goto redo1;
         }
         else if(k==7){goto redo1;}
         else{cout<<"\n\n   Enter the Correct Choice";getch();goto redo1;}
      }
      else if(k==3){goto redo;}
      else{goto redo1;}
   }
   else if(ch==2){
      char busNo[12];cout<<"\n   Enter the BusNo : ";cin.ignore();
      cin.getline(busNo,11);
      bool f=0;
      for(int i=0;i<bid;i++){
         string cmpBusNo = b[i].getBusNo();
         int match = stringMatch(cmpBusNo,busNo);
         if(match==1&&f==0){
            f=1;fundisplay();
            cout<<"   "<<i+1<<".";
            int j = countDigits(i+1);
            for(int k = j;k<3;k++) cout<<" ";
            b[i].showBusInfo();cout<<"\n";
         }
         else if(match==1){
            cout<<"   "<<i+1<<".";
            int j = countDigits(i+1);
            for(int k = j;k<3;k++) cout<<" ";
            b[i].showBusInfo();
            cout<<"\n";
         }
      }
      if(f!=1){cout<<"\n\n   Record Already Not Exists\n\n   Press any Key";getch();goto redo;}
      cout<<"\n\n   Press Any Key";getch();goto redo;
   }
   else if (ch==3){
      storingBusCountInFile();
      remove("bus.txt");
      for(int i=0;i<bid;i++){b[i].storeBus();}
      return;
   }
   else{cout<<"\n   Enter the Correct Choice!";getch();goto redo;}
}

class Ticket{
private:
   int tripId;
   int cid;
   char clientName[20];
   char PhoneNo[11];
   int seatNo;
   char status[20];
public:
   Ticket(){
      tripId = 0;
      cid = 0;
      strcpy(clientName,"null");
      strcpy(PhoneNo,"null");
      strcpy(status,"null");
   }
   void setTicketInfo(int TripNo,char * Name,char * allotPhoneNo,int allotseatNo){
      tripId = TripNo;
      seatNo = allotseatNo;
      storingValueInclientId();
      cid = ++clientId;
      tid++;
      storingclientIdinFile();
      strcpy(clientName,Name);
      strcpy(PhoneNo,allotPhoneNo);
      strcpy(status,"Confirm");
   }
   void getTicketInfo(int TripNo){
      tripId = TripNo;
      storingValueInclientId();
      cid = ++clientId;
      tid++;
      storingclientIdinFile();
      //cin.ignore();
      cout<<"\n    Enter Name : ";
      //cin.ignore();
      cin.getline(clientName,19);
      cout<<"    Enter PhoneNo : ";
      cin.getline(PhoneNo,10);
      //cin.ignore();

      strcpy(status,"Confirm");
   }
   void showTicketInfo(){
      int lenCid = countDigits(cid);
      int lenName = countChar(clientName);
      int lenPhone = countChar(PhoneNo);
      cout<<cid;
      for(int i=lenCid;i<8;i++) cout<<" ";
      cout<<clientName;
      for(int i=lenName;i<15;i++) cout<<" ";
      cout<<PhoneNo;
      for(int i=lenPhone;i<15;i++) cout<<" ";
      cout<<status;

   }

   int getcid(){return cid;}
   int gettripId(){return tripId;}
   int getSeatNo(){return seatNo;}
   char * getclientName(){return clientName;}
   char * getphoneNo(){return PhoneNo;}
   char * getstatus(){return status;}
   void setStatus(char * newStatus){strcpy(status,newStatus);}
   void getTickets(int);
   void storeTickets();
};
void Ticket::getTickets(int x){
   int i=0;
   ifstream finTicketRecord;
   finTicketRecord.open("tickets.txt",ios::in|ios::binary);
   if(!finTicketRecord){cout<<"File not Found";}
   else{
      while(!finTicketRecord.eof()&&i!=x+1)
      {
         finTicketRecord.read((char *)this,sizeof(*this));
         i++;
      }
   }
}
void Ticket::storeTickets(){
   ofstream foutTickets;
   foutTickets.open("tickets.txt",ios::app|ios::binary);
   foutTickets.write((char *)this,sizeof(*this));
   foutTickets.close();
}
int inputFilterChoice(int k){
   int x;
   if(k==1){
      cout<<"\n\n   1.Select the Bus (SNo)\n";
      cout<<"   2.Apply More Filters\n";
      cout<<"   3.GoBack\n";
   }
   else if(k==2){
      cout<<"\n\n   1.Bus Type\n";
      cout<<"   2.Departure Time\n";
      cout<<"   3.Fare (upto Max)\n";
      cout<<"   4.GoBack\n";
   }
   cout<<"\n   Enter your Choice : ";
   cin>>x;
   return x;
}
int collectTicket(int a){
   storingValueInTid();
   if(tid==0){cout<<"\n   No Record Exists";getch();return 0;}
   Ticket t[tid];
   for(int i=0;i<tid;i++){t[i].getTickets(i);}
   int cid;
   redo:;
   if(a==0){cout<<"\n\n   Enter Your TicketId : ";cin>>cid;}
   else cid=a;
   bool f=0;
   int ticketId;
   for(int i = 0;i<tid;i++){
      int matchCid = t[i].getcid();
      if(cid==matchCid){f=1;ticketId = i;break;}
   }
   if(!f){
      if(a==0){cout<<"\n   No Result Found";getch();return 0;}
      else return 0;
   }

   storingValueInBid();
   if(bid==0){cout<<"\n   No Trip Exists";getch();return 0;}
   BusInfo b[bid];
   for(int i=0;i<bid;i++){b[i].getBus(i);}

   int tripNo = t[ticketId].gettripId();
   int seatNo = t[ticketId].getSeatNo();
   string Name = t[ticketId].getclientName();
   string Phone = t[ticketId].getphoneNo();
   string status = t[ticketId].getstatus();
   int srr;
   bool y =0;
   for(int i=0;i<bid;i++){
      int trp = b[i].getBusTripNo();
      if(trp == tripNo){y=1;srr=i;break;}
   }
   if(!y){cout<<"\n\n    Sorry! this trip does Not Exist Now";getch();return 0;}
   else{
      char * busNo = b[srr].getBusNo();
      string origin = b[srr].getBusOrigin();
      string destination = b[srr].getBusDestination();
      string arrival = b[srr].getBusArrival();
      string departure = b[srr].getBusDeparture();
      string duration = b[srr].getBusDuration();
      string type = b[srr].getBusType();
      int fare = b[srr].getBusFare();
      int lenSeatNo = countDigits(seatNo);
      int lenCid = countDigits(cid);
      int lenStatus = status.length();
      int lenName = Name.length();
      int lenPhone = Phone.length();
      int lenOrigin = origin.length();
      int lenDestination = destination.length();
      int lentype = type.length();
      int lenArrival = arrival.length();
      int lenDeparture = departure.length();
      int lenDuration = duration.length();
      int lenBusno = countChar(busNo);

      cout<<"\n\n    Ticket No. : "<<cid;
      for(int i = lenCid+13;i<75 - lenStatus - 9;i++) cout<<" ";
      cout<<"Status : "<<status<<endl;
      cout<<"    Bus No. : "<<busNo;
      for(int i = lenBusno+14;i<75 - lenSeatNo -6;i++) cout<<" ";
      cout<<"Seat No : "<<seatNo<<endl;
      cout<<"    Name : "<<Name;
      for(int i = lenName+7;i<75 - lenPhone - 8;i++) cout<<" ";
      cout<<"Phone : "<<Phone<<endl;
      cout<<"    Origin : "<<origin;
      for(int i = lenOrigin+9;i<25;i++) cout<<" ";
      cout<<"Destination : "<<destination;
      for(int i = lenDestination+13;i<50-11-lentype;i++) cout<<" ";
      cout<<"BusType : "<<type<<endl;
      cout<<"    Arrival : "<<arrival;
      for(int i = lenArrival+10;i<25;i++) cout<<" ";
      cout<<"Departure : "<<departure;
      for(int i = lenDeparture+12;i<50-11-lenDuration;i++) cout<<" ";
      cout<<"Duration : "<<duration<<endl;
   }

   if(a==0){
      int g = stringMatch(status,"Confirm");
      if(!g){cout<<"\n   This Ticket is Of No Use Now!";}
      getch();
   }
}
void BookTicket(){
   int busId;
   storingValueInSid();
   if(sid==0){cout<<"\n   No Option Present at This Time";getch();return;}
   BusStation bs1[sid];
   for(int i=0;i<sid;i++){bs1[i].getStations(i);}
   storingValueInBid();
   if(bid==0){cout<<"\n  No Trip Option Exists";getch();return;}
   BusInfo b[bid];
   for(int i=0;i<bid;i++){b[i].getBus(i);}
   redo:;
   funHeading("Booking A Ticket : ");
   cout<<endl<<"\n   Choose 0 to GoBack\n\n   S.No.  StationLocation\n\n";
   for(int i=0;i<sid;i++){
      cout<<"   "<<i+1<<".";
      int j = countDigits(i+1);
      for(int k = j;k<8;k++) cout<<" ";
      bs1[i].showBusStationInfo();
   }
   int osr,des;
   cout<<"\n   Choose The Origin (S.No) : ";cin>>osr;
   if(osr == 0){return;}
   if(osr<0||osr>sid){cout<<"\n   Choose the Correct Option!\n";getch();goto redo;}
   redo2:;
   cout<<"\n   Choose The Destination (S.No) : ";cin>>des;
   if(des==osr){cout<<"\n   You are Already at Your Destination";getch();return;}
   else if(des == 0){return;}
   else if(des<0||des>sid){cout<<"\n   Choose the Correct Option!\n";getch();goto redo2;}
   string clientOrigin = bs1[osr-1].getstationName();
   string clientDestination = bs1[des-1].getstationName();
   int bstart=0,bend=0;
   bool f=0;
   for(int i=0;i<bid;i++){
      string origin = b[i].getBusOrigin();
      int k = stringMatch(origin,clientOrigin);
      if(k==1){
         string destination = b[i].getBusDestination();
         k = stringMatch(destination,clientDestination);
         if(k==1){
            if(f==0){f=1;bstart=i;bend=i;}
            if(bstart!=0){bend=i;}
         }
      }
   }
   if(f==0){
      cout<<"\n   Sorry! No Service Available For Your Trip At Present";
      cout<<"\n\n  Press Any Key";getch();goto redo;
   }
   redo1:;
   funHeading("Booking A Ticket : ");
   fundisplay();
   for(int i = bstart;i<=bend;i++){
      cout<<"   "<<i+1<<".";
      int j = countDigits(i+1);
      for(int k = j;k<3;k++) cout<<" ";
      b[i].showBusInfo();
      cout<<"\n";
   }
   int k = inputFilterChoice(1);
   if(k==1){cout<<"\n   Enter the SNo : ";cin>>busId;goto step2;}
   else if(k==2){
      k = inputFilterChoice(2);
      if(k==1){
          int type;
          cout<<"\n   Choose the BusType : \n";
          cout<<"      1.Ordinary\n";
          cout<<"      2.Deluxe\n";
          cout<<"      3.Ultra deluxe\n";
          cout<<"\n      Enter Your Choice :  ";
          cin>>type;
          if(type<=0||type>3){cout<<"\n   Enter the Correct Choice!";getch();}
          else{
            char busType[13];
            if(type==1){strcpy(busType,"Ordinary");}
            if(type==2){strcpy(busType,"Deluxe");}
            if(type==3){strcpy(busType,"Ultra Deluxe");}
            f=0;
            for(int i=bstart;i<=bend;i++){
               string btype = b[i].getBusType();
               k = stringMatch(btype,busType);
               if(k==1){
                  if(f==0){f=1;fundisplay();}
                  cout<<"   "<<i+1<<".";
                  int j = countDigits(i+1);
                  for(int k = j;k<3;k++) cout<<" ";
                  b[i].showBusInfo();
                  cout<<"\n";
               }
            }
            if(f!=1){cout<<"\n   No Service Available";getch();goto redo1;}
            else{cout<<"\n   Enter the SNo : ";cin>>busId;goto step2;}
          }
      }
      else if(k==2){
         char dtime[12];
         cout<<"\n   Enter the Time (Format Should be Proper) : ";
         cin.ignore();cin.getline(dtime,11);
         f=0;
         for(int i=bstart;i<=bend;i++){
            string bdeparture = b[i].getBusDeparture();
            k = stringMatch(bdeparture,dtime);
            if(k==1){
               if(f==0){f=1;fundisplay();}
               cout<<"   "<<i+1<<".";
               int j = countDigits(i+1);
               for(int k = j;k<3;k++) cout<<" ";
               b[i].showBusInfo();
               cout<<"\n";
            }
         }
         if(f!=1){cout<<"\n   No Service Available";getch();goto redo1;}
         else{cout<<"\n   Enter the SNo : ";cin>>busId;goto step2;}
      }
      else if(k==3){
         int maxfare;cout<<"\n   Enter the Max Fare Limit : ";cin>>maxfare;
         f=0;
         for(int i=bstart;i<=bend;i++){
            int bfare = b[i].getBusFare();
            if(bfare<=maxfare){
               if(f==0){f=1;fundisplay();}
               cout<<"   "<<i+1<<".";
               int j = countDigits(i+1);
               for(int k = j;k<3;k++) cout<<" ";
               b[i].showBusInfo();
               cout<<"\n";
            }
         }
         if(f!=1){cout<<"\n   No Service Available";getch();goto redo1;}
         else{cout<<"\n   Enter the SNo : ";cin>>busId;goto step2;}
      }
      else if(k==4){goto redo1;}
      else{cout<<"\n   Enter the Correct Choice!";getch();}
      goto redo1;
   }
   else if(k==3){goto redo;}
   else{cout<<"\n   Enter the Correct Choice!";getch();goto redo1;}

   step2:;
   if(busId<bstart+1 || busId>bend+1){cout<<"\n   Invalid Choice";getch();goto redo1;}
   funHeading("Booking A Ticket : ");
   int tripNo = b[busId-1].getBusTripNo();
   int Seats = b[busId-1].getBusSeats();
   int x;
   storingValueInTid();
   cout<<"\n\n   Enter the No. of Tickets You Want To Book : ";cin>>x;
   if(x==0){return;}
   cin.ignore();
   Ticket t[x];
   for(int i = 0;i<x;i++){
      if(x>1){cout<<"\n   Enter Ticket Info : "<<i+1;}
      char name[20],phone[12];
      cout<<"\n   Enter Name : ";
      cin.getline(name,19);
      cout<<"   Enter PhoneNo : ";
      cin.getline(phone,11);
      int r = b[busId-1].getBusEmptySeats();
      t[i].setTicketInfo(tripNo,name,phone,Seats-r+1);
      t[i].storeTickets();
      b[busId-1].setBusEmptySeats(1);
   }
   storingTCountInFile();
   //b[busId-1].setBusEmptySeats(x);
   storingBusCountInFile();
   remove("bus.txt");
   for(int i=0;i<bid;i++){b[i].storeBus();}
   bool y=0;
   for(int i=0;i<x;i++){
      int cid = t[i].getcid();
      collectTicket(cid);
   }
   getch();
}
void CancelTicket(){
   storingValueInTid();
   if(tid==0){cout<<"\n   No Record Exist to Cancel";getch();return;}
   int cid;cout<<"\n\n   Enter the TicketID : ";cin>>cid;
   int k = collectTicket(cid);
   cout<<"\n";
   if(k==0){cout<<"   Ticket Already not Exists";getch();return;}
   int indx,tripId;
   bool f=0;
   Ticket t[tid];
   for(int i=0;i<tid;i++){
      t[i].getTickets(i);
      if(f==0){
         int chkcid = t[i].getcid();
         if(cid==chkcid){indx = i;f=1;tripId = t[i].gettripId();}
      }
   }
   string oldStatus = t[indx].getstatus();
   int j = stringMatch(oldStatus,"Confirm");
   if(!j){cout<<"\n   This Ticket is Already "<<oldStatus;getch();return;}
   int y = cnfm();
   if(y==1){
      t[indx].setStatus("Cancelled");
      remove("tickets.txt");
      for(int i = 0;i<tid;i++){t[i].storeTickets();}
      collectTicket(cid);
      getch();
      storingValueInBid();
      BusInfo b[bid];
      for(int i=0;i<bid;i++){b[i].getBus(i);}
      int srr;bool f1 =0;
      for(int i=0;i<bid;i++){
         int trp = b[i].getBusTripNo();
         if(trp == tripId){f1=1;srr=i;break;}
      }
      if(!f1){cout<<"\n\n    Sorry! this trip does Not Exist Now";getch();}
      b[srr].setBusEmptySeats(-1);
      remove("bus.txt");
      for(int i=0;i<bid;i++){b[i].storeBus();}
   }
}
int inputResetChoice(){
   int x;
   cout<<"\n\n   1. Select via SNo\n";
   cout<<"   2. Find SNo via BusNo\n";
   cout<<"   3. GoBack\n";
   cout<<"\n   Enter Your Choice : ";
   cin>>x;
   return x;
}
void resetEmptySeats(){
   storingValueInBid();
   if(bid == 0){cout<<"\n\n  No Record Exists";getch();return;}
   BusInfo b[bid];
   for(int i=0;i<bid;i++){b[i].getBus(i);}
   redo:;
   funHeading("Reset EmptySeats For A Bus : ");
   cout<<"\n";
   fundisplay();
   for(int i=0;i<bid;i++){
      cout<<"   "<<i+1<<".";
      int j = countDigits(i+1);
      for(int k = j;k<3;k++) cout<<" ";
      b[i].showBusInfo();
      cout<<"\n";
   }
   int k = inputResetChoice();
   if(k==1){
      int sr;cout<<"\n   Enter the SNo : ";cin>>sr;
      if(sr<=0||sr>bid){cout<<"\n   Invalid Choice!";getch();goto redo;}
      int y = cnfm();
      if(!y){goto redo;}

      b[sr-1].resetReservedSeats();
      int tripId = b[sr-1].getBusTripNo();
      storingValueInTid();
      //if(tid==0){return;}
      Ticket t[tid];
      for(int i=0;i<tid;i++){
         t[i].getTickets(i);
         int ctripId = t[i].gettripId();
         if(tripId==ctripId){t[i].setStatus("used");}
      }

      remove("tickets.txt");
      for(int i = 0;i<tid;i++){t[i].storeTickets();}
      cout<<"\n   Value Changed\n\n   Press any Key to Update the Record";getch();goto redo;
   }
   else if(k==2){
      int sr;char busNo[12];cout<<"\n   Enter the BusNo : ";
      cin.ignore();cin.getline(busNo,11);
      bool f=0;
      for(int i=0;i<bid;i++){
         string cmpBusNo = b[i].getBusNo();
         int match = stringMatch(cmpBusNo,busNo);
         if(match==1&&f==0){
            f=1;
            fundisplay();
            cout<<"   "<<i+1<<".  ";
            b[i].showBusInfo();
            cout<<"\n";
         }
         else if(match==1){
            cout<<"   "<<i+1<<".  ";
            b[i].showBusInfo();
            cout<<"\n";
         }
      }
      if(f!=1){cout<<"\n\n   Record Not Exists";}
      cout<<"\n\n   Press any Key";getch();goto redo;
   }
   else if(k==3){
      storingBusCountInFile();
      remove("bus.txt");
      for(int i=0;i<bid;i++){b[i].storeBus();}
      return;
   }
   else{cout<<"\n   Enter the Correct Choice!";getch();goto redo;}
}
int showFilterChoice(int a){
   int x;
   if(a==1){
      cout<<"\n\n   1.Filter More\n";
      cout<<"   2.GoBack\n";
   }
   else if(a==2){
      cout<<"\n\n   1.Destination\n";
      cout<<"   2.BusType\n";
      cout<<"   3.GoBack\n";
   }
   cout<<"\n   Enter Your Choice : ";
   cin>>x;
   return x;
}
void showRecordForStation(){
   int busId;
   storingValueInSid();
   if(sid==0){cout<<"\n   No Option Present at This Time";getch();return;}
   BusStation bs1[sid];
   for(int i=0;i<sid;i++){bs1[i].getStations(i);}
   storingValueInBid();
   if(bid==0){cout<<"\n  No Trip Option Exists";getch();return;}
   BusInfo b[bid];
   for(int i=0;i<bid;i++){b[i].getBus(i);}
   redo:;
   funHeading("Buses Arrives On A Particular Station : ");
   cout<<endl<<"\n   Choose 0 to GoBack\n\n   S.No.  StationLocation\n\n";
   for(int i=0;i<sid;i++){
      cout<<"   "<<i+1<<".";
      int j = countDigits(i+1);
      for(int k = j;k<8;k++)cout<<" ";
      bs1[i].showBusStationInfo();
   }
   int op;cout<<"\n   Choose The Station (S.No) : ";cin>>op;
   if(op==0){return;}
   else if(op<0||op>sid){cout<<"\n   Invalid Choice";getch();goto redo;}
   int bstart=0,bend=0;
   string origin = bs1[op-1].getstationName();
   bool f=0;
   for(int i =0 ;i<bid;i++){
      string borigin = b[i].getBusOrigin();
      int k = stringMatch(origin,borigin);
      if(k==1){
         if(f==0){f=1;bstart = i;}
         bend=i;
      }
   }
   if(!f){cout<<"\n   No Record Exists";getch();goto redo;}
   redo1:;
   funHeading("Buses Arrives On A Particular Station : ");
   fundisplay();
   for(int i=bstart;i<=bend;i++){
      cout<<"   "<<i+1<<".";
      int j = countDigits(i+1);
      for(int k = j;k<3;k++) cout<<" ";
      b[i].showBusInfo();
      cout<<"\n";
   }
   int k = showFilterChoice(1);
   if(k==1){
      k = showFilterChoice(2);
      if(k==1){
         redo2:;
         funHeading("Finding Buses After Applying Filter : ");
         cout<<endl<<"\n   Choose 0 to GoBack\n\n   S.No.  StationLocation\n\n";
         for(int i=0;i<sid;i++){
            cout<<"   "<<i+1<<".";
            int j = countDigits(i+1);
            for(int k = j;k<8;k++) cout<<" ";
            bs1[i].showBusStationInfo();
         }
         cout<<"\n   Choose The Destination (S.No) : ";cin>>op;
         if(op==0){goto redo1;}
         else if(op<0||op>sid){cout<<"\n   Invalid Choice";getch();goto redo2;}
         f=0;
         string destination = bs1[op-1].getstationName();
         for(int i =bstart;i<=bend;i++){
            string bdestination = b[i].getBusDestination();
            k = stringMatch(destination,bdestination);
            if(k){
               if(f==0){
                  f=1;
                  funHeading("Buses After Applying Filter : ");
                  fundisplay();
               }
               cout<<"   "<<i+1<<".";
               int j = countDigits(i+1);
               for(int k = j;k<3;k++) cout<<" ";
               b[i].showBusInfo();
               cout<<"\n";
            }
         }
         if(!f){cout<<"\n   No Record Found";getch();goto redo2;}
         cout<<"\n\n   Press any Key";getch();goto redo1;
      }
      else if(k==2){
         redo3:;
         int ch;
         char type[13];
         funHeading("Finding Buses After Applying Filter : ");
         cout<<"\n\n   Choose a Option : \n";
         cout<<"    1.Ordinary\n";
         cout<<"    2.Deluxe\n";
         cout<<"    3.Ultra Deluxe\n";
         cout<<"    4.GoBack\n";
         cout<<"\n   Enter your Choice : ";
         cin>>ch;
         if(ch==0){goto redo1;}
         else if(ch == 1){strcpy(type,"Ordinary");}
         else if(ch==2){strcpy(type,"Deluxe");}
         else if(ch==3){strcpy(type,"Ultra Deluxe");}
         else{cout<<"\n   Enter the Correct Choice!";getch();goto redo3;}
         f=0;
         for(int i =bstart;i<=bend;i++){
            string btype = b[i].getBusType();
            k = stringMatch(type,btype);
            if(k){
               if(f==0){
                  f=1;
                  funHeading("Buses After Applying Filter : ");
                  fundisplay();
               }
               cout<<"   "<<i+1<<".";
               int j = countDigits(i+1);
               for(int k = j;k<3;k++) cout<<" ";
               b[i].showBusInfo();
               cout<<"\n";
            }
         }
         if(!f){cout<<"\n   No Record Found";getch();goto redo3;}
         cout<<"\n\n   Press any Key";getch();goto redo1;
      }
      else if(k==3){goto redo1;}
      else{cout<<"\n   Enter the Correct Choice!";getch();goto redo1;}
   }
   else if(k==2){return;}
   else{cout<<"\n   Enter the Correct Choice!";getch();goto redo1;}
}
int inputShowTickets(){
   int x;
   cout<<"\n\n   1.Select the SNo\n";
   cout<<"   2.Find SNo via BusNo\n";
   cout<<"   3.GoBack\n";
   cout<<"\n   Enter Your Choice : ";
   cin>>x;
   return x;
}
void fundisplay2(){
   cout<<"\n   SNo    Cid     Name           PhoneNo        Status";
}
void ShowTickets(){
   storingValueInBid();
   if(bid == 0){cout<<"\n\n   No Record Exists";getch();return;}
   BusInfo b[bid];
   for(int i=0;i<bid;i++){b[i].getBus(i);}
   redo:;
   funHeading("Looking For Tickets of A Particular Bus : ");
   cout<<"\n";
   fundisplay();
   for(int i=0;i<bid;i++){
      cout<<"   "<<i+1<<".";
      int j = countDigits(i+1);
      for(int k = j;k<3;k++) cout<<" ";
      b[i].showBusInfo();
      cout<<"\n";
   }
   int k = inputShowTickets();
   if(k==1){
      int sr;cout<<"\n   Enter the SNo : ";cin>>sr;
      if(sr<=0||sr>bid){cout<<"\n   Invalid Choice!";getch();goto redo;}
      int tripId = b[sr-1].getBusTripNo();
      storingValueInTid();
      if(tid==0){return;}
      Ticket t[tid];
      bool f=0;
      for(int i=0,l=1;i<tid;i++){
         t[i].getTickets(i);
         int ctripId = t[i].gettripId();
         if(tripId==ctripId){
            string status = t[i].getstatus();
            k = stringMatch(status,"Confirm");
            if(k){
               if(f==0){
                  f=1;
                  funHeading("Valid Tickets For The Selected Bus : ");
                  fundisplay2();
               }
               cout<<"\n";
               cout<<"   "<<l<<".";
               int j = countDigits(l);
               for(int k = j;k<6;k++) cout<<" ";
               t[i].showTicketInfo();
               l++;

            }

         }
      }
      if(!f){cout<<"\n   No Result Found";}
      cout<<"\n\n   Press any Key";getch();goto redo;
   }
   else if(k==2){
      int sr;char busNo[12];cout<<"\n   Enter the BusNo : ";
      cin.ignore();cin.getline(busNo,11);
      bool f=0;
      for(int i=0;i<bid;i++){
         string cmpBusNo = b[i].getBusNo();
         int match = stringMatch(cmpBusNo,busNo);
         if(match==1&&f==0){
            f=1;
            fundisplay();
            cout<<"   "<<i+1<<".  ";
            b[i].showBusInfo();
            cout<<"\n";
         }
         else if(match==1){
            cout<<"   "<<i+1<<".  ";
            b[i].showBusInfo();
            cout<<"\n";
         }
      }
      if(f!=1){cout<<"\n\n   Record Not Exists";}
      cout<<"\n\n   Press any Key";getch();goto redo;
   }
   else if(k==3){return;}
   else{cout<<"\n   Enter the Correct Choice!";getch();goto redo;}
}

int main(){
   funFrontPage();
   int ch;

   choice:;
   ch = choiceAdmin(0);
   switch (ch){
   case 1:
      goto choice1;
   case 2:
      goto choice2;
   case 3:
      goto Exit;
   default:
      cout<<"\n   Enter the Correct Choice!";
      getch();
      goto choice;
   }

   choice1:;
   ch = choiceAdmin(1);
   switch (ch){
   case 1:
      BookTicket();
      goto choice1;
   case 2:
      CancelTicket();
      goto choice1;
   case 3:
      collectTicket(0);
      goto choice1;
   case 0:
      goto choice;
   default:
      cout<<"\n   Enter the Correct choice!";
      getch();
      goto choice1;

   }

   choice2:;
   ch = choiceAdmin(2);
   switch (ch){
      case 1:
         goto choice2a;
      case 2:
         goto choice2b;
      case 3:
         goto choice2c;
      case 4:
         goto choice2d;
      case 5:
         goto choice2e;
      case 0:
         goto choice;
      default:
         cout<<"\n   Enter the Correct Choice!";
         getch();
         goto choice2;

   }

   choice2a:;
   ch = choiceAdmin(3);
   switch (ch){
   case 1:
      insertNewStation();
      goto choice2a;
   case 2:
      viewStationRecord();
      goto choice2a;
   case 3:
      deleteStation();
      goto choice2a;
   case 4:
      updateStation();
      goto choice2a;
   case 0:
      goto choice2;
   default:
      cout<<"\n   Enter the Correct Choice!";
      getch();
      goto choice2a;
   }

   choice2b:;
   ch = choiceAdmin(4);
   switch (ch){
      case 1:
         insertNewBus();
         goto choice2b;
      case 2:
         viewBusRecord();
         goto choice2b;
      case 3:
         deleteBus();
         goto choice2b;
      case 4:
         updateBusRecord();
         goto choice2b;
      case 0:
         goto choice2;
      default:
         cout<<"\n  Enter the Correct Choice!";
         getch();
         goto choice2b;
   }

   choice2c:;
   resetEmptySeats();
   goto choice2;

   choice2d:;
   showRecordForStation();
   goto choice2;

   choice2e:;
   ShowTickets();
   goto choice2;

   Exit:;
   return 0;
}


