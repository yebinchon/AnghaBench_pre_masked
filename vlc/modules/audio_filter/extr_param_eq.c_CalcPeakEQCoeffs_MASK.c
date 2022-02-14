
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (float) ;
 float FUNC_1 (int,float) ;
 int FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3( float VAR_1, float VAR_2, float VAR_3, float VAR_4,
                              float *VAR_5 )
{
    float VAR_6;
    float VAR_7;
    float VAR_8;
    float VAR_9, VAR_10, VAR_11;
    float VAR_12, VAR_13, VAR_14;


    if (VAR_2 < 0.1f) VAR_2 = 0.1f;
    if (VAR_2 > 100) VAR_2 = 100;
    if (VAR_1 > VAR_4/2*0.95f) VAR_1 = VAR_4/2*0.95f;
    if (VAR_3 < -40) VAR_3 = -40;
    if (VAR_3 > 40) VAR_3 = 40;

    VAR_6 = FUNC_1(10, VAR_3/40);
    VAR_7 = 2*((float)VAR_0)*VAR_1/VAR_4;
    VAR_8 = FUNC_2(VAR_7)/(2*VAR_2);

    VAR_9 = 1 + VAR_8*VAR_6;
    VAR_10 = -2*FUNC_0(VAR_7);
    VAR_11 = 1 - VAR_8*VAR_6;
    VAR_12 = 1 + VAR_8/VAR_6;
    VAR_13 = -2*FUNC_0(VAR_7);
    VAR_14 = 1 - VAR_8/VAR_6;


    VAR_5[0] = VAR_9/VAR_12;
    VAR_5[1] = VAR_10/VAR_12;
    VAR_5[2] = VAR_11/VAR_12;
    VAR_5[3] = VAR_13/VAR_12;
    VAR_5[4] = VAR_14/VAR_12;
}
