
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int val ;


 int FUNC_0 (void*,unsigned int*,int,int) ;

bool FUNC_1(void *VAR_0, unsigned VAR_1, vlc_tick_t VAR_2)
{
    VAR_2 = (VAR_2 + (1000-1)) / 1000;

    if (VAR_2 > 0x7fffffff)
    {
        FUNC_0(VAR_0, &VAR_1, sizeof (VAR_1), 0x7fffffff);
        return 1;
    }

    return FUNC_0(VAR_0, &VAR_1, sizeof (VAR_1), VAR_2);
}
