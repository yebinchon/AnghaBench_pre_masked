
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int current; int has_prev; int has_next; int auto_preparse; int * libvlc; scalar_t__ idgen; int order; int repeat; int listeners; int randomizer; int items; } ;
typedef TYPE_1__ vlc_playlist_t ;
typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int *) ;

vlc_playlist_t *
FUNC_10(vlc_object_t *VAR_2)
{
    vlc_playlist_t *VAR_3 = FUNC_2(sizeof(*VAR_3));
    if (FUNC_4(!VAR_3))
        return ((void*)0);

    bool VAR_4 = FUNC_8(VAR_3, VAR_2);
    if (FUNC_4(!VAR_4))
    {
        FUNC_1(VAR_3);
        return ((void*)0);
    }

    FUNC_9(&VAR_3->items);
    FUNC_3(&VAR_3->randomizer);
    VAR_3->current = -1;
    VAR_3->has_prev = 0;
    VAR_3->has_next = 0;
    FUNC_6(&VAR_3->listeners);
    VAR_3->repeat = VAR_1;
    VAR_3->order = VAR_0;
    VAR_3->idgen = 0;




    FUNC_0(VAR_2);
    VAR_3->libvlc = FUNC_7(VAR_2);
    VAR_3->auto_preparse = FUNC_5(VAR_2, "auto-preparse");


    return VAR_3;
}
