
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_item_t ;
struct randomizer {int items; } ;


 int FUNC_0 (struct randomizer*,int * const) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct randomizer *VAR_0, vlc_playlist_item_t *const VAR_1[],
                  size_t VAR_2)
{
    for (size_t VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
        FUNC_0(VAR_0, VAR_1[VAR_3]);

    FUNC_1(&VAR_0->items);
}
