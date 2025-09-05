
#include <stdio.h>

int main()
{
   int selection1,selection2,km,baseprice,total;
   int cartype,carmodel;
   
   char *places[3][4]={
   {"Koyilandy","Kappad","Arangadath","Vatakara"},
   {"Kozhikode","Malappuram","Ernakulam","Kannur"},
   {"Kerala","Tamilnadu","Mumbai","Goa"}
   };
   
   char *regularcars[4]= {"Swift","Baleno","Honda City","Corolla"};
   char *premiumcars[4]= {"Mercedens Benz","BMW","Audi","Lexus Gx"};
   
   printf(" 🚖 Welcome to AJ Taxi Booking App 🚖 \n");
   printf("-----------------------------------------\n");
   do{ printf("Where do you want to go Sir/Madam 😊 \n");
   printf("1. Place\n2. District\n3. State\n Enter Select:");
   scanf("%d",&selection1);
   if(selection1 <1 || selection1 >3)
   printf("❌❌ Wrong selected so please try again 😊 \n ");
   } while(selection1 <1 || selection1 >3);
   
   printf("Select one option : \n");
   for(int i=0;i<4;i++){
   printf("%d. %s\n",i+1,places[selection1-1][i]);}
   do{ printf("Enter your option :");
   scanf("%d",&selection2);
   if(selection2 <1 || selection2 >4)
   printf(" ❌❌Wrong option so please try again 😊 \n");
   } while(selection2 <1 || selection2 >4);
   
   if(selection1 ==1) km = 10;
   else if(selection1 ==2) km = 70;
   else km = 400;
   
   int fareperkm = 20;
   int distanceprice = km* fareperkm;
   
   do{ printf("Select Car Type : \n");
   printf("1. Regular Car (Features : Water💧  , Newspaper 📰  , Medical Kit 💊 , Emergency 🆘 ) \n");
   printf("2. Premium Car (Features : Water 💧, Juice 🧃, Biscuit🍪 , Newspaper 📰  , Tablet 📱  , Wifi Option 📶 , Medical Kit💊 ,Emergency 🆘 ) \n");
   printf("Enter choice :");
   scanf("%d",&cartype);
   if(cartype <1 || cartype >2)
   printf(" ❌❌Wrong Car type so please try again 😊\n");
   } while(cartype <1 || cartype >2);
   
   if(cartype ==1){
   baseprice = 200;
   printf(" Choose your Regular Car 🚗 : \n");
   for(int i=0;i<4;i++)
   printf("%d. %s\n", i+1,regularcars[i]);
   do{ scanf("%d",&carmodel);
   if(carmodel <1 || carmodel >4)
   printf(" ❌❌Wrong Model so please try again 😊 \n");
   } while(carmodel <1 || carmodel > 4);}else
   { baseprice = 500;
   printf("Choose your Premium Car 🚙: \n");
   for(int i=0;i<4;i++)
   printf("%d. %s\n",i+1,premiumcars[i]);
   do{ scanf("%d",&carmodel);
   if(carmodel <1 || carmodel >4)
   printf("❌❌ Wrong Model so please try again 😊 \n");
   } while(carmodel <1 || carmodel >4);}
   
   total = distanceprice + baseprice;
   
   printf("-----------------------------------------------------\n");
   
   printf("Your selected : %s\n",places[selection1-1][selection2-1]);
   printf("Distance : %d km | Distance Price : %d\n", km, distanceprice);
   if(cartype ==1)
   { printf("Car Type : Regular | Model : %s | Base Price : %d\n",regularcars [carmodel-1] , baseprice);}
   printf("TOTAL FARE : %d\n",total);
   
   printf("-----------------------------------------------------\n");
   
   printf("Your Car will arrive in 20 minutes ⏳ \n");
   printf("Please rate our app ⭐⭐⭐⭐⭐  \n");
   
   return 0;}
  
   

