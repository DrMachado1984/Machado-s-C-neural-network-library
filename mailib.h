#ifndef PROJECT_MODULE_MAILIB_H_
#define PROJECT_MODULE_MAILIB_H_

float drm_w_sum(const float* a, const float* b, const int num);
void drm_vect_mat_mul(const float* vec, const float matrix[][3], const int num, float* output);

#endif
