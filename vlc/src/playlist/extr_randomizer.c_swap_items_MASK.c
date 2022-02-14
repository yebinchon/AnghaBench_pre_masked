
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_playlist_item_t ;
struct TYPE_2__ {int ** data; } ;
struct randomizer {TYPE_1__ items; } ;



__attribute__((used)) static inline void
FUNC_0(struct randomizer *VAR_0, int VAR_1, int VAR_2)
{
    vlc_playlist_item_t *VAR_3 = VAR_0->items.data[VAR_1];
    VAR_0->items.data[VAR_1] = VAR_0->items.data[VAR_2];
    VAR_0->items.data[VAR_2] = VAR_3;
}
