
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint64_t ;
struct TYPE_2__ {int quotient; int remainder; int divider; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 () ;

vlc_tick_t FUNC_3 (void)
{
    FUNC_2();
    uint64_t VAR_1 = FUNC_1();

    VAR_1 = VAR_1 * VAR_0.quotient +
        VAR_1 * VAR_0.remainder / VAR_0.divider;
    return FUNC_0(VAR_1);
}
