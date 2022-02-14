
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t size; int ** data; } ;
struct TYPE_7__ {scalar_t__ order; TYPE_1__ items; int randomizer; int idgen; } ;
typedef TYPE_2__ vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
typedef int uint64_t ;
typedef int input_item_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int **,int) ;
 int FUNC_2 (int *,int **,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,size_t) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(vlc_playlist_t *VAR_3, size_t VAR_4,
                     input_item_t *VAR_5)
{
    FUNC_3(VAR_3);
    FUNC_0(VAR_4 < VAR_3->items.size);

    uint64_t VAR_6 = VAR_3->idgen++;
    vlc_playlist_item_t *VAR_7 = FUNC_5(VAR_5, VAR_6);
    if (!VAR_7)
        return VAR_0;

    if (VAR_3->order == VAR_1)
    {
        FUNC_2(&VAR_3->randomizer,
                          &VAR_3->items.data[VAR_4], 1);
        FUNC_1(&VAR_3->randomizer, &VAR_7, 1);
    }

    FUNC_6(VAR_3->items.data[VAR_4]);
    VAR_3->items.data[VAR_4] = VAR_7;

    FUNC_4(VAR_3, VAR_4);
    return VAR_2;
}
