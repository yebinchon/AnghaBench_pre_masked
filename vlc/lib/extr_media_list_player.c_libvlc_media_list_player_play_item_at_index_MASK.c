
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int libvlc_media_t ;
struct TYPE_12__ {int event_manager; int p_mi; } ;
typedef TYPE_3__ libvlc_media_list_player_t ;
typedef int libvlc_media_list_path_t ;
struct TYPE_10__ {int * item; } ;
struct TYPE_11__ {TYPE_1__ media_list_player_next_item_set; } ;
struct TYPE_13__ {TYPE_2__ u; int type; } ;
typedef TYPE_4__ libvlc_event_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*) ;

int FUNC_8(libvlc_media_list_player_t * VAR_1, int VAR_2)
{
    FUNC_5(VAR_1);
    libvlc_media_list_path_t VAR_3 = FUNC_1(VAR_2);
    FUNC_6(VAR_1, VAR_3);
    libvlc_media_t *VAR_4 = FUNC_2(VAR_1->p_mi);
    FUNC_3(VAR_1->p_mi);
    FUNC_7(VAR_1);

    if (!VAR_4)
        return -1;


    libvlc_event_t VAR_5;
    VAR_5.type = VAR_0;
    VAR_5.u.media_list_player_next_item_set.item = VAR_4;
    FUNC_0(&VAR_1->event_manager, &VAR_5);
    FUNC_4(VAR_4);
    return 0;
}
