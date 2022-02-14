
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_tick_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3 (vlc_tick_t VAR_3)
{
    if (VAR_3 == VAR_2)
        return -1;

    vlc_tick_t VAR_4 = FUNC_2 ();
    if (VAR_4 >= VAR_3)
        return 0;

    VAR_4 = (VAR_3 - VAR_4) / (VAR_0 / FUNC_0(1000));
    if (FUNC_1(VAR_4 > VAR_1))
        return VAR_1;
    return VAR_4;
}
