
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned VAR_0,
                                          const float *VAR_1,
                                          const float *VAR_2,
                                          float *VAR_3, float *VAR_4,
                                          float *VAR_5, float *VAR_6)
{
    for (unsigned VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
    {
        float VAR_8 = VAR_5[VAR_7] - VAR_3[VAR_7];
        VAR_3[VAR_7] = VAR_3[VAR_7] + VAR_8 * VAR_2[0];
        VAR_5[VAR_7] = VAR_3[VAR_7] + VAR_8 * VAR_1[0];

        float VAR_9 = VAR_6[VAR_7] - VAR_4[VAR_7];
        VAR_4[VAR_7] = VAR_4[VAR_7] + VAR_9 * VAR_2[1];
        VAR_6[VAR_7] = VAR_4[VAR_7] + VAR_9 * VAR_1[1];
    }
}
