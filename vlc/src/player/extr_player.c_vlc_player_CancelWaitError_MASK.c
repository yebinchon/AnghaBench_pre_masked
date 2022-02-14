
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ error_count; int start_delay_cond; } ;
typedef TYPE_1__ vlc_player_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(vlc_player_t *VAR_0)
{
    if (VAR_0->error_count != 0)
    {
        VAR_0->error_count = 0;
        FUNC_0(&VAR_0->start_delay_cond);
    }
}
