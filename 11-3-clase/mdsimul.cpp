#include "mdsimul.h"

// function implementations
void material_properties(std::vector<Particle> & balls)
{
  std::mt19937 gen; // random generator: Mersenne-Twister
  gen.seed(1); // control the seed
  std::uniform_real_distribution<> dis(0.5*RAD, 1.0*RAD); // radii between R/2 and R
  
  // set radii randomly
  for(auto & body : balls){
    body.rad=dis(gen);
    body.mass=RHO*4*M_PI*body.rad*body.rad*body.rad/3;
  }
}

void initial_conditions(std::vector<Particle> & balls)
{
  // set up uniformly on a 2d grid

  // extract max rad
  double max_rad=-1.0e300;
  for(auto & body : balls){
    if (body.rad >= max_rad) {
      max_rad=body.rad;
    }
  }

  // put on the 2d grid
  const int NX=L/(2*RAD);
  for(int id=0; id<balls.size(); ++id){
    int ix=id%NX; int iy=id/NX;
    balls[id].Rx = max_rad + ix*max_rad;
    balls[id].Ry = 5+2*max_rad + iy*max_rad;
    balls[id].Rz = 0.0;
    balls[id].Vx = 5.0+(id*2);
    balls[id].Vy = 5.0*id;
    balls[id].Vz = 8.0*-id;
    
  }

  // initial velocity could be random, for now everything going up
  for(auto & body : balls){
    body.Vy = +1.2347;
  
  }
}
void compute_force(std::vector<Particle> & balls)
{
  for(auto & body : balls){
    // reset force
    body.Fx = body.Fy = body.Fz = 0.0;

    // add gravitational force
    body.Fy += body.mass*G; // G is already negative

    // add force with Y walls
    double deltaYB = body.rad - body.Ry;
    if (deltaYB > Ymin) {
      body.Fy += K*deltaYB;// - 10*body.Vy;
    }

    double deltaYU = body.rad + body.Ry - Ymax ;
    if (deltaYU>0)
      {
	body.Fy -= K*deltaYU;
      }
    
    // add force with X walls
    double deltaXR = body.rad + body.Rx - Xmax ;
    if (deltaXR>0)
      {
	body.Fx -= K*deltaXR;
      }
      
    double deltaXL = body.rad - body.Rx;
    if (deltaXL>Xmin)
      {
	body.Fx += K*deltaXL;
      }
      
    // add force with Z walls
    double deltaZF = body.rad + body.Rz - Zmax ;
    if (deltaZF>0)
      {
	body.Fz -= K*deltaZF;
      }
      
    double deltaZB = body.rad - body.Rz;
    if (deltaZB>Zmin)
      {
	body.Fz += K*deltaZB;
      }
      
    

    
    // force with other particles? other walls?
  }
}

void start_integration(std::vector<Particle> & balls)
{
  for(auto & body : balls){
    body.Vx -= 0.5*body.Fx*DT/body.mass;
  }
}

void integrate(std::vector<Particle> & balls)
{
  // use simple leap-frog
  for(auto & body : balls){
    body.Vx += body.Fx*DT/body.mass;
    body.Vy += body.Fy*DT/body.mass;
    body.Vz += body.Fz*DT/body.mass;
    body.Rx += body.Vx*DT;
    body.Ry += body.Vy*DT;
    body.Rz += body.Vz*DT;
  }
}

void print_info(const std::vector<Particle> & balls, const double & time)
{
  // here we print something useful
  // for now is just a test
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  
  std::cout << time
            << "\t" << balls[0].Rx
            << "\t" << balls[0].Ry 
            << "\t" << balls[0].Rz 
            << "\t" << balls[0].Vx 
            << "\t" << balls[0].Vy 
            << "\t" << balls[0].Vz
    
	    << "\t" << balls[1].Rx
            << "\t" << balls[1].Ry 
            << "\t" << balls[1].Rz 
            << "\t" << balls[1].Vx 
            << "\t" << balls[1].Vy 
            << "\t" << balls[1].Vz
    
	    << "\t" << balls[2].Rx
            << "\t" << balls[2].Ry 
            << "\t" << balls[2].Rz 
            << "\t" << balls[2].Vx 
            << "\t" << balls[2].Vy 
            << "\t" << balls[2].Vz
    
            << "\n";
}
