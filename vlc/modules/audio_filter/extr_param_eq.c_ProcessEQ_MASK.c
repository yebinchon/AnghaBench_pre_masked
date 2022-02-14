
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0( const float *VAR_0, float *VAR_1, float *VAR_2,
                unsigned VAR_3, unsigned VAR_4, const float *VAR_5,
                unsigned VAR_6 )
{
    unsigned VAR_7, VAR_8, VAR_9;
    float VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    float VAR_15, VAR_16 = 0;
    const float *VAR_17 = VAR_0;
    float *VAR_18 = VAR_1;

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    {
        float *VAR_19 = VAR_2;
        for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
        {
            const float *VAR_20 = VAR_5;
            VAR_15 = *VAR_17++;

            for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
            {
                VAR_10 = VAR_20[0];
                VAR_11 = VAR_20[1];
                VAR_12 = VAR_20[2];
                VAR_13 = VAR_20[3];
                VAR_14 = VAR_20[4];
                VAR_20 += 5;
                VAR_16 = VAR_15*VAR_10 + VAR_19[0]*VAR_11 + VAR_19[1]*VAR_12 - VAR_19[2]*VAR_13 - VAR_19[3]*VAR_14;
                VAR_19[1] = VAR_19[0];
                VAR_19[0] = VAR_15;
                VAR_19[3] = VAR_19[2];
                VAR_19[2] = VAR_16;
                VAR_15 = VAR_16;
                VAR_19 += 4;
            }
            *VAR_18++ = VAR_16;
        }
    }
}
