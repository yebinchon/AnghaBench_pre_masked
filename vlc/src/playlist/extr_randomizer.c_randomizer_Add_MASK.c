
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_item_t ;
struct randomizer {scalar_t__ history; scalar_t__ next; int items; } ;


 int FUNC_0 (int *,scalar_t__,int **,size_t) ;

bool
FUNC_1(struct randomizer *VAR_0, vlc_playlist_item_t *VAR_1[], size_t VAR_2)
{
    if (!FUNC_0(&VAR_0->items, VAR_0->history, VAR_1, VAR_2))
        return 0;

    if (VAR_0->next > VAR_0->history)
        VAR_0->next += VAR_2;
    VAR_0->history += VAR_2;
    return 1;
}
