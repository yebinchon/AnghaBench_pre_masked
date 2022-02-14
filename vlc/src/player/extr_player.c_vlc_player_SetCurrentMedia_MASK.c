
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int releasing_media; int next_media_requested; int * next_media; int * input; scalar_t__ media; } ;
typedef TYPE_1__ vlc_player_t ;
typedef int input_item_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;

int
FUNC_8(vlc_player_t *VAR_1, input_item_t *VAR_2)
{
    FUNC_5(VAR_1);

    FUNC_2(VAR_1);

    FUNC_3(VAR_1);

    if (VAR_2)
    {

        VAR_1->next_media = FUNC_1(VAR_2);
        VAR_1->releasing_media = 0;
        VAR_1->next_media_requested = 1;
    }
    else if (VAR_1->media)
    {


        VAR_1->releasing_media = 1;
        VAR_1->next_media_requested = 0;
    }
    else
        return VAR_0;

    if (VAR_1->input)
    {
        FUNC_6(VAR_1, VAR_1->input);
        VAR_1->input = ((void*)0);
    }

    FUNC_0(VAR_2 == VAR_1->next_media);
    if (!FUNC_7(VAR_1))
    {

        return VAR_0;
    }


    return FUNC_4(VAR_1);
}
