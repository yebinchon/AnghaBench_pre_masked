
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int event_manager; int * current_playing_item_path; int p_mi; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;
struct TYPE_9__ {int type; } ;
typedef TYPE_2__ libvlc_event_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(libvlc_media_list_player_t * VAR_1)
{
    FUNC_0(VAR_1);


    FUNC_5(VAR_1);
    FUNC_4(VAR_1->p_mi);
    FUNC_2(VAR_1);

    FUNC_1(VAR_1->current_playing_item_path);
    VAR_1->current_playing_item_path = ((void*)0);


    libvlc_event_t VAR_2;
    VAR_2.type = VAR_0;
    FUNC_3(&VAR_1->event_manager, &VAR_2);
}
