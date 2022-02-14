
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 float FUNC_0 (float,float*) ;

__attribute__((used)) static float FUNC_1(float VAR_1)
{
    float VAR_2;

    VAR_1 /= 360.f;
    VAR_1 = FUNC_0(VAR_1, &VAR_2);
    if (VAR_1 > .5f)
        VAR_1 -= 1.f;
    return VAR_1 * (float)(2. * VAR_0);
}
