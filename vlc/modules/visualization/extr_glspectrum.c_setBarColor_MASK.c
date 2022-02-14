
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (float,float,float,float) ;

__attribute__((used)) static void FUNC_1(float VAR_1)
{
    float VAR_2, VAR_3;


    VAR_2 = -1.f + 2 / 4.2f * VAR_1;
    VAR_3 = 2.f - 2 / 4.2f * VAR_1;



    VAR_2 = VAR_2 > 1.f ? 1.f : VAR_2;
    VAR_3 = VAR_3 > 1.f ? 1.f : VAR_3;

    VAR_2 = VAR_2 < 0.f ? 0.f : VAR_2;
    VAR_3 = VAR_3 < 0.f ? 0.f : VAR_3;


    FUNC_0(VAR_2, 0.f, VAR_3, 1.f);
}
