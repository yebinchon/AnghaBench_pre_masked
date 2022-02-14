
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct check_items_order_data {int index; int count; int done_playing; int ** items; } ;
typedef int libvlc_media_t ;
struct TYPE_5__ {int * item; } ;
struct TYPE_6__ {TYPE_1__ media_list_player_next_item_set; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef TYPE_3__ libvlc_event_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(const libvlc_event_t * VAR_1, void * VAR_2)
{
    struct check_items_order_data *VAR_3 = VAR_2;
    libvlc_media_t *VAR_4 = VAR_1->u.media_list_player_next_item_set.item;
    FUNC_0(VAR_3->index < VAR_3->count);
    if (VAR_3->items[VAR_3->index] != VAR_4)
    {
        char *VAR_5 = FUNC_2(VAR_4, VAR_0);
        FUNC_3 ("Got items %s\n", VAR_5);
        FUNC_1(VAR_5);
    }
    FUNC_0(VAR_3->items[VAR_3->index] == VAR_4);

    char *VAR_6 = FUNC_2(VAR_4, VAR_0);
    FUNC_3 ("Item %d '%s' was correctly queued\n", VAR_3->index, VAR_6);
    FUNC_1(VAR_6);

    if (VAR_3->index == (VAR_3->count - 1))
    {
        FUNC_3 ("Done playing with success\n");
        VAR_3->done_playing = 1;
    }
    VAR_3->index++;
}
