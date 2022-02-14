
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int libvlc_media_list_t ;
struct TYPE_4__ {int * p_mlist; int current_playing_item_path; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;
typedef int* libvlc_media_list_path_t ;


 int FUNC_0 (TYPE_1__*) ;
 int* FUNC_1 (int *,int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ) ;
 int* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static libvlc_media_list_path_t
FUNC_9(libvlc_media_list_player_t * VAR_0, bool VAR_1)
{
    FUNC_0(VAR_0);


    libvlc_media_list_path_t VAR_2;
    libvlc_media_list_t * VAR_3;

    if (!VAR_0->current_playing_item_path)
    {
        if (!FUNC_3(VAR_0->p_mlist))
            return ((void*)0);
        return FUNC_7(0);
    }


    VAR_3 = FUNC_4(
                                            VAR_0->p_mlist,
                                            VAR_0->current_playing_item_path);

    int VAR_4 = FUNC_6(VAR_0->current_playing_item_path);
    if (VAR_4 < 1 || !VAR_3)
        return ((void*)0);


    VAR_2 = FUNC_5(VAR_0->current_playing_item_path);


    VAR_2[VAR_4 - 1]--;
    VAR_2[VAR_4] = -1;


    if(VAR_2[VAR_4 - 1] < 0)
    {

        VAR_4--;


        if (VAR_4 <= 0)
        {

            if(VAR_1)
            {
                int VAR_5 = FUNC_3(VAR_3);


                VAR_2[0] = VAR_5 - 1;
                VAR_2[1] = -1;


                VAR_2 = FUNC_1(VAR_0->p_mlist, VAR_2);
            }
            else
            {

                FUNC_2(VAR_2);
                VAR_2 = ((void*)0);
            }
        }
        else
        {





            VAR_2[VAR_4] = -1;
        }
    }
    else
    {
        VAR_2 = FUNC_1(VAR_0->p_mlist, VAR_2);
    }

    FUNC_8(VAR_3);
    return VAR_2;
}
