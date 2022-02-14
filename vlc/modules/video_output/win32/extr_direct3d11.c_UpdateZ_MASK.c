
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float const VAR_0 ;
 float const VAR_1 ;
 float VAR_2 ;
 int FUNC_0 (int ) ;
 float FUNC_1 (int ) ;
 int FUNC_2 (float) ;
 float FUNC_3 (float) ;

__attribute__((used)) static float FUNC_4(float VAR_3, float VAR_4)
{



    float VAR_5 = FUNC_3(VAR_3 / 2);
    float VAR_6 = FUNC_3(VAR_4 / 2);
    float VAR_7 = - VAR_2 / FUNC_1(FUNC_0(FUNC_2(
                    VAR_5 * VAR_5 + VAR_6 * VAR_6)));


    const float VAR_8 = 90.f;

    float VAR_9;
    if (VAR_3 <= VAR_8 * VAR_1 / 180)
        VAR_9 = 0;
    else
    {
        float VAR_10 = VAR_7 / ((VAR_0 - VAR_8) * VAR_1 / 180);
        VAR_9 = VAR_10 * VAR_3 - VAR_10 * VAR_8 * VAR_1 / 180;
        if (VAR_9 < VAR_7)
            VAR_9 = VAR_7;
    }
    return VAR_9;
}
