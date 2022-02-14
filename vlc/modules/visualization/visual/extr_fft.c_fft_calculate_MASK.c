
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_0(float * VAR_2, float * VAR_3, const float *VAR_4, const float *VAR_5 )
{
    unsigned int VAR_6, VAR_7, VAR_8;
    unsigned int VAR_9;
    float VAR_10, VAR_11;
    float VAR_12, VAR_13;
    unsigned int VAR_14;


    VAR_9 = 1;
    VAR_14 = VAR_0 / 2;


    for(VAR_6 = VAR_1; VAR_6 != 0; VAR_6--) {




        for(VAR_7 = 0; VAR_7 != VAR_9; VAR_7++) {





            VAR_10 = VAR_4[VAR_7 * VAR_14];
            VAR_11 = VAR_5[VAR_7 * VAR_14];


            for(VAR_8 = VAR_7; VAR_8 < VAR_0; VAR_8 += VAR_9 << 1) {
                int VAR_15 = VAR_8 + VAR_9;
                VAR_12 = VAR_10 * VAR_2[VAR_15] - VAR_11 * VAR_3[VAR_15];
                VAR_13 = VAR_10 * VAR_3[VAR_15] + VAR_11 * VAR_2[VAR_15];
                VAR_2[VAR_15] = VAR_2[VAR_8] - VAR_12;
                VAR_3[VAR_15] = VAR_3[VAR_8] - VAR_13;
                VAR_2[VAR_8] += VAR_12;
                VAR_3[VAR_8] += VAR_13;
            }
        }
        VAR_9 <<= 1;
        VAR_14 >>= 1;
    }
}
