 #include<iostream>
using namespace std;


float average_speed()
{
    float x_km,x_speed,y_km ,y_speed, z_speed,z_minutes;
    // first distance n speed given calculate time
    cout<<"Enter distnace and speed for 1st interval"<<endl;

    cin>>x_km>>x_speed;
    float x_speedkm=18/5*x_speed;
    float time1=x_km/x_speedkm;
    cout<<"Time !:"<<time1<<endl;


    cout<<"Enter distance and speed for second interval;"<<endl;
    cin>>y_km>>y_speed;
    float time2= y_km/y_speed;

    cout<<"Time t2 :"<<time2<<endl;

    //third time and speed given find distance
    cout<<"enter given time and speed for third interval:"<<endl;
    cin>>z_speed>>z_minutes;
    float z_hours=1/60*z_minutes;
    float distance3=z_speed*z_hours;
    cout<<"Third Distance3"<<distance3<<endl;

    // Finding average time and distance first
    float total_time= time1+time2+z_hours;
    float total_distance= x_km+y_km+distance3;

    cout<<"Total TIme :" <<total_time<<"Total Distance :: "<< total_distance<<endl;

    // Aveargae speed will be mean of all three intervals1
   float averagespeed= total_distance/total_time;

   return averagespeed;

    



}

int main(){


    cout<<average_speed();
    cout<<" ==The average speed of whole journey is"<<endl;

    return 0;
}