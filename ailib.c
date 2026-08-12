//Взвешенная сумма
float drm_w_sum(const float* a, const float* b, const int num)
{
    float output = 0;
    for(int i = 0; i < num; i++)
    {
        output += (a[i] * b[i]);
    }
    return output;
}

//Умножение вектора на матрицу
void drm_vect_mat_mul(const float* vec, const float matrix[][3], const int num, float* output)
{
    for (int i = 0; i < num; i++)
    {
        output[i] = drm_w_sum(vec, matrix[i], num);
    }
}
