
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
struct timespec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct timespec*) ;

vlc_tick_t FUNC_4 (void)
{
    struct timespec VAR_1;

    if (FUNC_2(FUNC_1 (VAR_0, &VAR_1) != 0))
        FUNC_0 ();

    return FUNC_3( &VAR_1 );
}
