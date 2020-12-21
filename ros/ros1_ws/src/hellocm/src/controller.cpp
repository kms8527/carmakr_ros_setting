#include "hellocm/controller.h"

longitudinal_controller::longitudinal_controller()
{

    desired_velocity=0;
    this->kp = 0;
    error=0;
}

double longitudinal_controller::calculate_torque(){
    double accel = kp * error;
    return accel;
}

void longitudinal_controller::update(double *v){
    this->v = v;
    this->error = desired_velocity-v[0];
}
double longitudinal_controller::set_param(double vd, double kp){
    this->kp = kp;
    this->desired_velocity = vd;

}
