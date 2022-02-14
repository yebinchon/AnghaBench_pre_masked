
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int libvlc_media_t ;
struct TYPE_13__ {scalar_t__ e_playback_mode; int event_manager; int p_mlist; int p_mi; int current_playing_item_path; } ;
typedef TYPE_3__ libvlc_media_list_player_t ;
typedef int libvlc_media_list_path_t ;
struct TYPE_11__ {int * item; } ;
struct TYPE_12__ {TYPE_1__ media_list_player_next_item_set; } ;
struct TYPE_14__ {TYPE_2__ u; int type; } ;
typedef TYPE_4__ libvlc_event_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_13(
                                      libvlc_media_list_player_t * VAR_4,
                                      int VAR_5)
{
    FUNC_0(VAR_4);

    if (!VAR_4->p_mlist)
    {
        FUNC_10("No media list");
        return -1;
    }

    FUNC_5(VAR_4->p_mlist);

    libvlc_media_list_path_t VAR_6 = VAR_4->current_playing_item_path;

    if(VAR_4->e_playback_mode != VAR_3)
    {
        bool VAR_7 = (VAR_4->e_playback_mode == VAR_2);

        while (VAR_5 > 0)
        {
            VAR_6 = FUNC_1(VAR_4, VAR_7);
            FUNC_12(VAR_4, VAR_6);
            --VAR_5;
        }

        while (VAR_5 < 0)
        {
            VAR_6 = FUNC_2(VAR_4, VAR_7);
            FUNC_12(VAR_4, VAR_6);
            ++VAR_5;
        }
    }
    else
    {
        FUNC_12(VAR_4, VAR_6);
    }






    if (!VAR_6)
    {
        FUNC_7(VAR_4->p_mlist);

        libvlc_event_t VAR_8;
        VAR_8.type = VAR_1;
        FUNC_3(&VAR_4->event_manager, &VAR_8);
        return -1;
    }

    FUNC_8(VAR_4->p_mi);

    FUNC_7(VAR_4->p_mlist);


    libvlc_event_t VAR_9;
    VAR_9.type = VAR_0;
    libvlc_media_t * VAR_10 = FUNC_4(VAR_4->p_mlist, VAR_6);
    VAR_9.u.media_list_player_next_item_set.item = VAR_10;
    FUNC_3(&VAR_4->event_manager, &VAR_9);
    FUNC_9(VAR_10);
    return 0;
}
