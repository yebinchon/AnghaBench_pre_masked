
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_player_timer_point {int dummy; } ;
struct timer_state {int vec; } ;
struct report_timer {struct vlc_player_timer_point const point; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct report_timer) ;

__attribute__((used)) static void
FUNC_2(const struct vlc_player_timer_point *VAR_1, void *VAR_2)
{
    struct timer_state *VAR_3 = VAR_2;
    struct report_timer VAR_4 =
    {
        .type = VAR_0,
        .point = *VAR_1,
    };
    bool VAR_5 = FUNC_1(&VAR_3->vec, VAR_4);
    FUNC_0(VAR_5);
}
