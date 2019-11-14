#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;


int sin_friccion( string filename);
int friccion( string filename);
int main(){
  float g= -9.8;
  float v0_x =10.0;
  float v0_y =10.0;
  float k =0.7;
	
  sin_friccion("sinfriccion.dat");
  friccion("friccion.dat");
  return 0;
}

int sin_friccion( string filename){
    float g= -9.8;
  float v_x =10.0*cos(3.14/2);
  float v_y =10.0*sin(3.14/2);
	float x;
	float y;
	int t=0;
	
  ofstream outfile;
  outfile.open(filename);

  while(t <= 50)  {    
    x=v_x*t;
	y=v_y*t+ ((g*t*t)/2);
	  t+=1;
	 outfile << x << " "<< y<< endl;
  }
    outfile.close(); 
    return 0;
}

int friccion( string filename){
    float g= -9.8;
  float v_x =10.0*cos(3.14/2);
  float v_y =10.0*sin(3.14/2);
  float k =0.7;
	float x=0.0;
	float y =0.0;
	int t=0;
	float dt=0.5;
	float vx;
	float vy;
	
  ofstream outfile;
  outfile.open(filename);

  while(t <= 50)  {    
    vx=v_x-(k*v_x*dt);
	vy=v_y+(g*dt)-(k*v_y*dt);
	  
	x = x+(vx*dt);
	y = y+(vy*dt);	
	 t+=1;
	 outfile << x << " "<< y<< endl;
  }
    outfile.close(); 
    return 0;
}

