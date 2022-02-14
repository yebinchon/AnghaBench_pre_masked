
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t size; int * data; } ;
struct TYPE_8__ {int player; TYPE_2__ items; } ;
typedef TYPE_1__ vlc_playlist_t ;
typedef int input_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,size_t,size_t) ;
 int FUNC_4 (TYPE_1__*,int * const*,size_t,int *) ;
 int FUNC_5 (TYPE_2__*,size_t,size_t) ;
 int FUNC_6 (TYPE_2__*,size_t,size_t) ;

int
FUNC_7(vlc_playlist_t *VAR_2, size_t VAR_3,
                    input_item_t *const VAR_4[], size_t VAR_5)
{
    FUNC_2(VAR_2);
    FUNC_0(VAR_3 <= VAR_2->items.size);


    if (!FUNC_5(&VAR_2->items, VAR_3, VAR_5))
        return VAR_0;


    int VAR_6 = FUNC_4(VAR_2, VAR_4, VAR_5,
                                        &VAR_2->items.data[VAR_3]);
    if (VAR_6 != VAR_1)
    {

        FUNC_6(&VAR_2->items, VAR_3, VAR_5);
        return VAR_6;
    }

    FUNC_3(VAR_2, VAR_3, VAR_5);
    FUNC_1(VAR_2->player);

    return VAR_1;
}
