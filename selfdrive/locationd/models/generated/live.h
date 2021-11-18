#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void live_update_3(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_19(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_6734956106204590788);
void live_err_fun(double *nom_x, double *delta_x, double *out_5262666988813529660);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_3440267817366124741);
void live_H_mod_fun(double *state, double *out_3811421795549224995);
void live_f_fun(double *state, double dt, double *out_8260028334883816324);
void live_F_fun(double *state, double dt, double *out_3600648387658132774);
void live_h_3(double *state, double *unused, double *out_3029188188218428014);
void live_H_3(double *state, double *unused, double *out_8201016290931622526);
void live_h_4(double *state, double *unused, double *out_3255995301830976175);
void live_H_4(double *state, double *unused, double *out_3068542067622663606);
void live_h_9(double *state, double *unused, double *out_6135044386467044117);
void live_H_9(double *state, double *unused, double *out_760037612237255170);
void live_h_10(double *state, double *unused, double *out_9037556999036559393);
void live_H_10(double *state, double *unused, double *out_5607935115942724717);
void live_h_12(double *state, double *unused, double *out_6158819560488574395);
void live_H_12(double *state, double *unused, double *out_3097181458679770447);
void live_h_31(double *state, double *unused, double *out_5436667809010218599);
void live_H_31(double *state, double *unused, double *out_1914223652779109170);
void live_h_32(double *state, double *unused, double *out_4064644389191611623);
void live_H_32(double *state, double *unused, double *out_510314687492291389);
void live_h_13(double *state, double *unused, double *out_4884249481069067782);
void live_H_13(double *state, double *unused, double *out_2353498747532438992);
void live_h_14(double *state, double *unused, double *out_6135044386467044117);
void live_H_14(double *state, double *unused, double *out_760037612237255170);
void live_h_19(double *state, double *unused, double *out_6710512788600108639);
void live_H_19(double *state, double *unused, double *out_2156763963065530466);
void live_h_33(double *state, double *unused, double *out_7728540910876254408);
void live_H_33(double *state, double *unused, double *out_1810754428651006012);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}