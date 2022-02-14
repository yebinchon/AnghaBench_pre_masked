
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int next_media_requested; int * next_media; } ;
typedef TYPE_1__ vlc_player_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(vlc_player_t *VAR_0)
{
    FUNC_1(VAR_0);
    if (VAR_0->next_media)
    {
        FUNC_0(VAR_0->next_media);
        VAR_0->next_media = ((void*)0);
    }
    VAR_0->next_media_requested = 0;

}
