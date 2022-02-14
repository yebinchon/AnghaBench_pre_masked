
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t size; int ** data; } ;
struct TYPE_8__ {scalar_t__ order; int randomizer; TYPE_1__ items; } ;
typedef TYPE_2__ vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

int
FUNC_5(vlc_playlist_t *VAR_2, ssize_t VAR_3)
{
    FUNC_2(VAR_2);
    FUNC_0(VAR_3 == -1 || (size_t) VAR_3 < VAR_2->items.size);

    int VAR_4 = FUNC_4(VAR_2, VAR_3);
    if (VAR_4 != VAR_1)
        return VAR_4;

    if (VAR_3 != -1 && VAR_2->order == VAR_0)
    {
        vlc_playlist_item_t *VAR_5 = VAR_2->items.data[VAR_3];
        FUNC_1(&VAR_2->randomizer, VAR_5);
    }

    FUNC_3(VAR_2, VAR_3);
    return VAR_1;
}
