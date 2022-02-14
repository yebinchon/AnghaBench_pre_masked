
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int last_framenum; } ;
struct TYPE_7__ {TYPE_1__ smpte; } ;
struct TYPE_8__ {float input_position; int lock; TYPE_2__ smpte_source; void* last_ts; int input_normal_time; void* input_length; int state; } ;
struct TYPE_9__ {TYPE_3__ timer; } ;
typedef TYPE_4__ vlc_player_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(vlc_player_t *VAR_4)
{
    FUNC_0(&VAR_4->timer.lock);

    VAR_4->timer.state = VAR_1;
    VAR_4->timer.input_length = VAR_3;
    VAR_4->timer.input_normal_time = VAR_2;
    VAR_4->timer.last_ts = VAR_3;
    VAR_4->timer.input_position = 0.f;
    VAR_4->timer.smpte_source.smpte.last_framenum = VAR_0;

    FUNC_1(&VAR_4->timer.lock);
}
