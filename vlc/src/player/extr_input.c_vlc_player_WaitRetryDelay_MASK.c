
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_3__ {unsigned int error_count; int lock; int start_delay_cond; } ;
typedef TYPE_1__ vlc_player_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static bool
FUNC_2(vlc_player_t *VAR_2)
{


    if (VAR_2->error_count)
    {

        vlc_tick_t VAR_3 = FUNC_0(100);
        for (unsigned VAR_4 = 1; VAR_4 < VAR_2->error_count
          && VAR_3 < FUNC_0(3200); ++VAR_4)
            VAR_3 *= 2;
        VAR_3 += FUNC_1();

        while (VAR_2->error_count > 0
            && FUNC_0(&VAR_2->start_delay_cond, &VAR_2->lock,
                                  VAR_3) == 0);
        if (VAR_2->error_count == 0)
            return 0;
    }
    return 1;
}
