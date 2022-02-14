
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const vlc_mutex_t ;
typedef int locks ;


 int VAR_0 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;

void FUNC_4 (unsigned VAR_1, bool VAR_2)
{
    static vlc_mutex_t VAR_3[] = {
        128,
        128,
        128,
        128,



    };
    FUNC_1 (VAR_0 == (sizeof (VAR_3) / sizeof (VAR_3[0])),
                   "Wrong number of global mutexes");
    FUNC_0 (VAR_1 < (sizeof (VAR_3) / sizeof (VAR_3[0])));

    vlc_mutex_t *VAR_4 = VAR_3 + VAR_1;
    if (VAR_2)
        FUNC_2 (VAR_4);
    else
        FUNC_3 (VAR_4);
}
