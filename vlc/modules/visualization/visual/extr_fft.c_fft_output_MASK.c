
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const float * VAR_1, const float * VAR_2, float *VAR_3)
{
    float *VAR_4 = VAR_3;
    const float *VAR_5 = VAR_1;
    const float *VAR_6 = VAR_2;
    float *VAR_7 = VAR_3 + VAR_0 / 2;

    while(VAR_4 <= VAR_7)
    {
        *VAR_4 = (*VAR_5 * *VAR_5) + (*VAR_6 * *VAR_6);
        VAR_4++; VAR_5++; VAR_6++;
    }


    *VAR_3 /= 4;
    *VAR_7 /= 4;
}
