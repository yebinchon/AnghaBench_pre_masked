
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_playlist_item_t ;
struct TYPE_2__ {scalar_t__ size; int ** data; } ;
struct randomizer {scalar_t__ next; scalar_t__ history; scalar_t__ head; TYPE_1__ items; int loop; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct randomizer*) ;
 int FUNC_2 (struct randomizer*) ;
 int FUNC_3 (struct randomizer*) ;

vlc_playlist_item_t *
FUNC_4(struct randomizer *VAR_0)
{
    FUNC_0(FUNC_3(VAR_0));

    if (VAR_0->next == VAR_0->items.size && VAR_0->next == VAR_0->history)
    {
        FUNC_0(VAR_0->loop);
        FUNC_1(VAR_0);
    }

    if (VAR_0->next == VAR_0->head)

        FUNC_2(VAR_0);

    return VAR_0->items.data[VAR_0->next];
}
