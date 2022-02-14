
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_6__ {scalar_t__ input_normal_time; scalar_t__ input_length; scalar_t__ input_position; } ;
struct TYPE_7__ {TYPE_2__ timer; } ;
typedef TYPE_3__ vlc_player_t ;
struct TYPE_5__ {double rate; scalar_t__ length; scalar_t__ system_date; scalar_t__ position; scalar_t__ ts; } ;
struct vlc_player_timer_source {TYPE_1__ point; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(vlc_player_t *VAR_3,
                             struct vlc_player_timer_source *VAR_4,
                             double VAR_5, vlc_tick_t VAR_6, vlc_tick_t VAR_7)
{
    FUNC_0(VAR_6 >= VAR_1);
    FUNC_0(VAR_3->timer.input_normal_time >= VAR_1);

    VAR_4->point.rate = VAR_5;
    VAR_4->point.ts = VAR_6 - VAR_3->timer.input_normal_time + VAR_1;
    VAR_4->point.length = VAR_3->timer.input_length;




    if (VAR_4->point.system_date == VAR_2)
        VAR_4->point.system_date = VAR_0;
    else
        VAR_4->point.system_date = VAR_7;

    if (VAR_4->point.length != VAR_2)
        VAR_4->point.position = (VAR_6 - VAR_3->timer.input_normal_time)
                               / (double) VAR_4->point.length;
    else
        VAR_4->point.position = VAR_3->timer.input_position;
}
