
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_tick_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

void FUNC_4 (vlc_tick_t VAR_0)
{
    vlc_tick_t VAR_1;

    FUNC_2();
    while ((VAR_1 = (VAR_0 - FUNC_3())) > 0)
    {
        VAR_1 /= 1000;
        if (FUNC_0(VAR_1 > 0x7fffffff))
            VAR_1 = 0x7fffffff;
        FUNC_1 (VAR_1);
        FUNC_2();
    }
}
