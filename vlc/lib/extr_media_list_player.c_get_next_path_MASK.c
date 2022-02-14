
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int libvlc_media_list_t ;
struct TYPE_4__ {int* current_playing_item_path; int * p_mlist; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;
typedef int* libvlc_media_list_path_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int*) ;
 int* FUNC_4 (int*) ;
 int* FUNC_5 (int*,int ) ;
 int FUNC_6 (int*) ;
 int* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int*) ;

__attribute__((used)) static libvlc_media_list_path_t
FUNC_10(libvlc_media_list_player_t * VAR_0, bool VAR_1)
{
    FUNC_0(VAR_0);


    libvlc_media_list_path_t VAR_2;
    libvlc_media_list_t * VAR_3;
    libvlc_media_list_t * VAR_4;

    if (!VAR_0->current_playing_item_path)
    {
        if (!FUNC_2(VAR_0->p_mlist))
            return ((void*)0);
        return FUNC_7(0);
    }

    VAR_4 = FUNC_9(
                            VAR_0->p_mlist,
                            VAR_0->current_playing_item_path);


    if (VAR_4)
    {
        int VAR_5 = FUNC_2(VAR_4);
        FUNC_8(VAR_4);
        if (VAR_5 > 0)
            return FUNC_5(VAR_0->current_playing_item_path, 0);
    }


    VAR_3 = FUNC_3(VAR_0->p_mlist,
                            VAR_0->current_playing_item_path);

    int VAR_6 = FUNC_6(VAR_0->current_playing_item_path);
    if (VAR_6 < 1 || !VAR_3)
        return ((void*)0);

    VAR_2 = FUNC_4(VAR_0->current_playing_item_path);
    VAR_2[VAR_6 - 1]++;


    while(VAR_2[VAR_6-1] >= FUNC_2(VAR_3))
    {
        VAR_6--;
        if (VAR_6 <= 0)
        {
            if(VAR_1)
            {
                VAR_2[0] = 0;
                VAR_2[1] = -1;
                break;
            }
            else
            {
                FUNC_1(VAR_2);
                FUNC_8(VAR_3);
                return ((void*)0);
            }
        }
        VAR_2[VAR_6] = -1;
        VAR_2[VAR_6-1]++;
        VAR_3 = FUNC_3(
                                        VAR_0->p_mlist,
                                        VAR_2);
    }

    FUNC_8(VAR_3);
    return VAR_2;
}
