
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_playlist_t ;
struct vlc_playlist_sort_criterion {int order; int key; } ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_6__ {int size; } ;
struct TYPE_8__ {int need_update; int plidx_follow; int box_idx; TYPE_1__ pl_item_names; int box_lines_total; int * playlist; } ;
typedef TYPE_3__ intf_sys_t ;
typedef enum vlc_playlist_playback_repeat { ____Placeholder_vlc_playlist_playback_repeat } vlc_playlist_playback_repeat ;
typedef enum vlc_playlist_playback_order { ____Placeholder_vlc_playlist_playback_order } vlc_playlist_playback_order ;





 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,struct vlc_playlist_sort_criterion*,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static bool FUNC_11(intf_thread_t *VAR_5, int VAR_6)
{
    intf_sys_t *VAR_7 = VAR_5->p_sys;
    vlc_playlist_t *VAR_8 = VAR_7->playlist;

    switch(VAR_6)
    {

    case 'r':
        FUNC_4(VAR_8);
        enum vlc_playlist_playback_order VAR_9 =
            FUNC_2(VAR_8);
        VAR_9 =
            VAR_9 == VAR_0
            ? VAR_1
            : VAR_0;
        FUNC_7(VAR_8, VAR_9);
        FUNC_10(VAR_8);
        return 1;
    case 'l':
    case 'R':
        FUNC_4(VAR_8);
        enum vlc_playlist_playback_repeat VAR_10 =
            FUNC_3(VAR_8);
        switch (VAR_10)
        {
            case 128:
                VAR_10 = VAR_6 == 'l'
                    ? 130
                    : 129;
                break;
            case 130:
                VAR_10 = VAR_6 == 'l'
                    ? 128
                    : 129;
                break;
            case 129:
                VAR_10 = VAR_6 == 'l'
                    ? 130
                    : 128;
                break;
        }
        FUNC_8(VAR_8, VAR_10);
        FUNC_10(VAR_8);
        return 1;


    case 'o':
    case 'O':
        FUNC_4(VAR_8);
        struct vlc_playlist_sort_criterion VAR_11 =
        {
            .key = VAR_2,
            .order = VAR_6 == 'o'
                ? VAR_3
                : VAR_4
        };
        FUNC_9(VAR_8, &VAR_11, 1);
        VAR_7->need_update = 1;
        FUNC_10(VAR_8);
        return 1;

    case ';':
        FUNC_0(VAR_7);
        return 1;

    case 'g':
        FUNC_4(VAR_8);
        VAR_7->box_idx = FUNC_1(VAR_8);
        FUNC_10(VAR_8);
        VAR_7->plidx_follow = 1;
        return 1;


    case 'D':
    case 133:
    case 0x7f:
    case 132:
        if (VAR_7->pl_item_names.size)
        {
            FUNC_4(VAR_8);
            FUNC_6(VAR_8, VAR_7->box_idx);
            if (VAR_7->box_idx >= VAR_7->box_lines_total - 1)
                VAR_7->box_idx = VAR_7->box_lines_total - 2;
            VAR_7->need_update = 1;
            FUNC_10(VAR_8);
        }
        return 1;

    case 131:
    case '\r':
    case '\n':
        if (VAR_7->pl_item_names.size)
        {
            FUNC_4(VAR_8);
            FUNC_5(VAR_8, VAR_7->box_idx);
            FUNC_10(VAR_8);
            VAR_7->plidx_follow = 1;
        }
        return 1;
    }

    return 0;
}
