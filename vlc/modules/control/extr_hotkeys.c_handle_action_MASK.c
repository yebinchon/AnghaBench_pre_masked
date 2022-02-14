
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vout_thread_t ;
typedef int vlc_playlist_t ;
typedef int vlc_player_t ;
typedef scalar_t__ vlc_action_id_t ;
struct TYPE_13__ {int (* pf_vout ) (TYPE_4__*,int *,scalar_t__) ;int (* pf_player ) (TYPE_4__*,int *,scalar_t__) ;int (* pf_playlist ) (TYPE_4__*,int *,scalar_t__) ;int (* pf_intf ) (TYPE_4__*,scalar_t__) ;} ;
struct TYPE_11__ {scalar_t__ first; scalar_t__ last; } ;
struct vlc_action {scalar_t__ type; scalar_t__ pl_need_lock; TYPE_3__ handler; TYPE_1__ range; } ;
struct TYPE_14__ {TYPE_2__* p_sys; } ;
typedef TYPE_4__ intf_thread_t ;
struct TYPE_12__ {int * playlist; } ;



 scalar_t__ VAR_0 ;



 struct vlc_action* VAR_1 ;
 void FUNC_0 (TYPE_4__*,char*,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,scalar_t__) ;
 int FUNC_2 (TYPE_4__*,int *,scalar_t__) ;
 int FUNC_3 (TYPE_4__*,int *,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,int *,scalar_t__) ;
 int FUNC_5 () ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(intf_thread_t *VAR_2, vlc_action_id_t VAR_3)
{
    size_t VAR_4;
    for (VAR_4 = 0; VAR_1[VAR_4].type != VAR_0; ++VAR_4)
        if (VAR_1[VAR_4].range.first <= VAR_3 &&
            VAR_1[VAR_4].range.last >= VAR_3)
            break;
    if (VAR_1[VAR_4].type == VAR_0)
        return FUNC_0(VAR_2, "no handler for action %d", VAR_3);
    struct vlc_action const *VAR_5 = VAR_1 + VAR_4;

    vlc_playlist_t *VAR_6 = VAR_2->p_sys->playlist;
    if (VAR_5->pl_need_lock)
        FUNC_8(VAR_6);

    switch (VAR_5->type)
    {
        case 131:
            VAR_5->handler.pf_intf(VAR_2, VAR_3);
            break;
        case 129:
            VAR_5->handler.pf_playlist(VAR_2, VAR_6, VAR_3);
            break;
        case 130:
        case 128:
        {
            vlc_player_t *VAR_7 = FUNC_7(VAR_6);
            if (VAR_5->type == 130)
                VAR_5->handler.pf_player(VAR_2, VAR_7, VAR_3);
            else
            {
                vout_thread_t *VAR_8 = FUNC_6(VAR_7);
                VAR_5->handler.pf_vout(VAR_2, VAR_8, VAR_3);
                FUNC_10(VAR_8);
            }
            break;
        }
        default:
            FUNC_5();
    }

    if (VAR_5->pl_need_lock)
        FUNC_9(VAR_6);
}
