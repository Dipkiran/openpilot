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
void live_H(double *in_vec, double *out_8670689481999191128);
void live_err_fun(double *nom_x, double *delta_x, double *out_1218788862770049829);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_5543749374415719119);
void live_H_mod_fun(double *state, double *out_752641187119878817);
void live_f_fun(double *state, double dt, double *out_8633587296279909108);
void live_F_fun(double *state, double dt, double *out_2326073368009784535);
void live_h_3(double *state, double *unused, double *out_8142996721466884812);
void live_H_3(double *state, double *unused, double *out_94240964970094437);
void live_h_4(double *state, double *unused, double *out_5687441688106988339);
void live_H_4(double *state, double *unused, double *out_8716283904770688378);
void live_h_9(double *state, double *unused, double *out_6921553416586471009);
void live_H_9(double *state, double *unused, double *out_5498834295995750329);
void live_h_10(double *state, double *unused, double *out_6234711664575233938);
void live_H_10(double *state, double *unused, double *out_7445336893900215561);
void live_h_12(double *state, double *unused, double *out_4370837646205904281);
void live_H_12(double *state, double *unused, double *out_1641615225078724712);
void live_h_31(double *state, double *unused, double *out_7807667222460499503);
void live_H_31(double *state, double *unused, double *out_8576141754095308802);
void live_h_32(double *state, double *unused, double *out_7227691999136605015);
void live_H_32(double *state, double *unused, double *out_7093599137291823365);
void live_h_13(double *state, double *unused, double *out_79132415917742226);
void live_H_13(double *state, double *unused, double *out_5297494630697988682);
void live_h_14(double *state, double *unused, double *out_6921553416586471009);
void live_H_14(double *state, double *unused, double *out_5498834295995750329);
void live_h_19(double *state, double *unused, double *out_3562765097863473860);
void live_H_19(double *state, double *unused, double *out_8818682064381730098);
void live_h_33(double *state, double *unused, double *out_3387181564432084159);
void live_H_33(double *state, double *unused, double *out_4074315146982837516);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}