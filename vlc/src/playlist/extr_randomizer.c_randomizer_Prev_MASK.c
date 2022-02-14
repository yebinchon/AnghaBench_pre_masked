
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_playlist_item_t ;
struct TYPE_2__ {int size; } ;
struct randomizer {int next; TYPE_1__ items; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct randomizer*) ;
 int * FUNC_2 (struct randomizer*) ;

vlc_playlist_item_t *
FUNC_3(struct randomizer *VAR_0)
{
    FUNC_0(FUNC_1(VAR_0));
    vlc_playlist_item_t *VAR_1 = FUNC_2(VAR_0);
    VAR_0->next = VAR_0->next ? VAR_0->next - 1 : VAR_0->items.size - 1;
    return VAR_1;
}
