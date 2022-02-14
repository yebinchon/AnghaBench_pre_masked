
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ i_size; } ;
struct TYPE_5__ {int can_sleep; int is_waiting; int lock; TYPE_3__ cmd; int wait_available; scalar_t__ is_held; int wait_request; } ;
typedef TYPE_1__ vout_control_t ;
typedef int vout_control_cmd_t ;
typedef scalar_t__ vlc_tick_t ;


 int FUNC_0 (TYPE_3__,int ) ;
 int FUNC_1 (TYPE_3__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(vout_control_t *VAR_3, vout_control_cmd_t *VAR_4,
                     vlc_tick_t VAR_5)
{
    FUNC_7(&VAR_3->lock);
    FUNC_2(&VAR_3->lock);

    if (VAR_3->cmd.i_size <= 0) {

        if (VAR_5 != VAR_2 && VAR_3->can_sleep) {
            VAR_3->is_waiting = 1;
            FUNC_4(&VAR_3->wait_available);
            FUNC_5(&VAR_3->wait_request, &VAR_3->lock, VAR_5);
            VAR_3->is_waiting = 0;
        }
    }

    while (VAR_3->is_held)
        FUNC_6(&VAR_3->wait_available, &VAR_3->lock);
    FUNC_3();

    bool VAR_6;
    if (VAR_3->cmd.i_size > 0) {
        VAR_6 = 1;
        *VAR_4 = FUNC_1(VAR_3->cmd, 0);
        FUNC_0(VAR_3->cmd, 0);
    } else {
        VAR_6 = 0;
        VAR_3->can_sleep = 1;
    }
    FUNC_8(&VAR_3->lock);

    return VAR_6 ? VAR_1 : VAR_0;
}
