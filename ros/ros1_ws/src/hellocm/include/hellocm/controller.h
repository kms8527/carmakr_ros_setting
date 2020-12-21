
#ifndef logitudinal_controller_h_
#define logitudinal_controller_h_


extern "C" {
#ifdef __cplusplus


#endif

class longitudinal_controller
{
private:

    double desired_velocity;
    double kp;
    double error;
public:
    double *v;
    longitudinal_controller();
    double calculate_torque();
    void update(double *v);
    double set_param(double vd, double kp);
};



#ifdef __cplusplus
}
#endif

#endif
