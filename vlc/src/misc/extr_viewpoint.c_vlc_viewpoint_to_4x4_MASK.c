
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float yaw; float pitch; float roll; } ;
typedef TYPE_1__ vlc_viewpoint_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 float FUNC_0 (float) ;
 int FUNC_1 (float*,int ,int) ;
 float FUNC_2 (float) ;

void FUNC_3( const vlc_viewpoint_t *VAR_2, float *VAR_3 )
{
    float VAR_4 = VAR_2->yaw * (float)VAR_0 / 180.f + (float)VAR_1;
    float VAR_5 = VAR_2->pitch * (float)VAR_0 / 180.f;
    float VAR_6 = VAR_2->roll * (float)VAR_0 / 180.f;

    float VAR_7, VAR_8;

    VAR_7 = FUNC_2(VAR_5);
    VAR_8 = FUNC_0(VAR_5);
    const float VAR_9[4][4] = {
        { 1.f, 0.f, 0.f, 0.f },
        { 0.f, VAR_8, -VAR_7, 0.f },
        { 0.f, VAR_7, VAR_8, 0.f },
        { 0.f, 0.f, 0.f, 1.f } };

    VAR_7 = FUNC_2(VAR_4);
    VAR_8 = FUNC_0(VAR_4);
    const float VAR_10[4][4] = {
        { VAR_8, 0.f, VAR_7, 0.f },
        { 0.f, 1.f, 0.f, 0.f },
        { -VAR_7, 0.f, VAR_8, 0.f },
        { 0.f, 0.f, 0.f, 1.f } };

    VAR_7 = FUNC_2(VAR_6);
    VAR_8 = FUNC_0(VAR_6);
    const float VAR_11[4][4] = {
        { VAR_8, VAR_7, 0.f, 0.f },
        { -VAR_7, VAR_8, 0.f, 0.f },
        { 0.f, 0.f, 1.f, 0.f },
        { 0.f, 0.f, 0.f, 1.f } };





    FUNC_1(VAR_3, 0, 16 * sizeof(float));
    for (int VAR_12=0; VAR_12<4; ++VAR_12)
        for (int VAR_13=0; VAR_13<4; ++VAR_13)
            for (int VAR_14=0; VAR_14<4; ++VAR_14)
                for (int VAR_15=0; VAR_15<4; ++VAR_15)
                    VAR_3[4*VAR_12+VAR_15] += VAR_10[VAR_12][VAR_13] * VAR_9[VAR_13][VAR_14] * VAR_11[VAR_14][VAR_15];
}
