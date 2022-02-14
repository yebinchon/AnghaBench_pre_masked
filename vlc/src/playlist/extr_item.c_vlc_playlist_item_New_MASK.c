
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * media; int id; int rc; } ;
typedef TYPE_1__ vlc_playlist_item_t ;
typedef int uint64_t ;
typedef int input_item_t ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;

vlc_playlist_item_t *
FUNC_4(input_item_t *VAR_0, uint64_t VAR_1)
{
    vlc_playlist_item_t *VAR_2 = FUNC_1(sizeof(*VAR_2));
    if (FUNC_2(!VAR_2))
        return ((void*)0);

    FUNC_3(&VAR_2->rc);
    VAR_2->id = VAR_1;
    VAR_2->media = VAR_0;
    FUNC_0(VAR_0);
    return VAR_2;
}
