
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t size; } ;
struct TYPE_6__ {int player; TYPE_2__ items; } ;
typedef TYPE_1__ vlc_playlist_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,size_t,size_t,size_t) ;
 int FUNC_4 (TYPE_2__*,size_t,size_t,size_t) ;

void
FUNC_5(vlc_playlist_t *VAR_0, size_t VAR_1, size_t VAR_2,
                  size_t VAR_3)
{
    FUNC_2(VAR_0);
    FUNC_0(VAR_1 + VAR_2 <= VAR_0->items.size);
    FUNC_0(VAR_3 + VAR_2 <= VAR_0->items.size);

    FUNC_4(&VAR_0->items, VAR_1, VAR_2, VAR_3);

    FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
    FUNC_1(VAR_0->player);
}
