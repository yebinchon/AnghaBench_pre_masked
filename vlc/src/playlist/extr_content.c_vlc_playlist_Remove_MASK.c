
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t size; int * data; } ;
struct TYPE_8__ {int player; int current; TYPE_2__ items; } ;
typedef TYPE_1__ vlc_playlist_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,size_t,size_t) ;
 int FUNC_4 (TYPE_1__*,size_t,size_t) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,size_t,size_t) ;

void
FUNC_8(vlc_playlist_t *VAR_0, size_t VAR_1, size_t VAR_2)
{
    FUNC_2(VAR_0);
    FUNC_0(VAR_1 < VAR_0->items.size);

    FUNC_4(VAR_0, VAR_1, VAR_2);

    for (size_t VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
        FUNC_6(VAR_0->items.data[VAR_1 + VAR_3]);

    FUNC_7(&VAR_0->items, VAR_1, VAR_2);

    bool VAR_4 = FUNC_3(VAR_0, VAR_1,
                                                           VAR_2);
    if (VAR_4)
        FUNC_5(VAR_0, VAR_0->current);
    else
        FUNC_1(VAR_0->player);
}
