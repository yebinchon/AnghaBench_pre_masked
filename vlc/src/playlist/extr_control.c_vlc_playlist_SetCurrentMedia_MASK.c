
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** data; } ;
struct TYPE_8__ {int player; TYPE_2__ items; } ;
typedef TYPE_3__ vlc_playlist_t ;
typedef int ssize_t ;
typedef int input_item_t ;
struct TYPE_6__ {int * media; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*) ;

int
FUNC_2(vlc_playlist_t *VAR_0, ssize_t VAR_1)
{
    FUNC_1(VAR_0);

    input_item_t *VAR_2 = VAR_1 != -1
                        ? VAR_0->items.data[VAR_1]->media
                        : ((void*)0);
    return FUNC_0(VAR_0->player, VAR_2);
}
