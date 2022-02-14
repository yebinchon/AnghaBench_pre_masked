
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_playlist_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_6__ {scalar_t__ box_idx; scalar_t__ box_height; scalar_t__ box_type; int plidx_follow; int box_lines_total; int * playlist; } ;
typedef TYPE_2__ intf_sys_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;







 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(intf_thread_t *VAR_1, int VAR_2)
{
    intf_sys_t *VAR_3 = VAR_1->p_sys;
    vlc_playlist_t *VAR_4 = VAR_3->playlist;

    switch(VAR_2)
    {





    case 133: VAR_3->box_idx = VAR_3->box_lines_total - 1; break;
    case 132: VAR_3->box_idx = 0; break;
    case 128: VAR_3->box_idx--; break;
    case 134: VAR_3->box_idx++; break;
    case 130:VAR_3->box_idx -= VAR_3->box_height; break;
    case 131:VAR_3->box_idx += VAR_3->box_height; break;
    default:
        return 0;
    }

    FUNC_0(VAR_3);

    if (VAR_3->box_type == VAR_0) {
        FUNC_2(VAR_4);
        VAR_3->plidx_follow =
            VAR_3->box_idx == FUNC_1(VAR_4);
        FUNC_3(VAR_4);
    }

    return 1;
}
