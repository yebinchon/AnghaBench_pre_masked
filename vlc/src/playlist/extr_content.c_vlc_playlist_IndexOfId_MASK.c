
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t size; TYPE_1__** data; } ;
struct TYPE_7__ {TYPE_3__ items; } ;
typedef TYPE_2__ vlc_playlist_t ;
typedef scalar_t__ uint64_t ;
typedef size_t ssize_t ;
typedef TYPE_3__ playlist_item_vector_t ;
struct TYPE_6__ {scalar_t__ id; } ;


 int FUNC_0 (TYPE_2__*) ;

ssize_t
FUNC_1(vlc_playlist_t *VAR_0, uint64_t VAR_1)
{
    FUNC_0(VAR_0);

    playlist_item_vector_t *VAR_2 = &VAR_0->items;
    for (size_t VAR_3 = 0; VAR_3 < VAR_2->size; ++VAR_3)
        if (VAR_2->data[VAR_3]->id == VAR_1)
            return VAR_3;
    return -1;
}
