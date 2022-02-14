
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; int * data; } ;
struct TYPE_5__ {TYPE_1__ items; } ;
typedef TYPE_2__ vlc_playlist_t ;
struct vlc_playlist_sort_criterion {int dummy; } ;
struct vlc_playlist_item_meta {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 struct vlc_playlist_item_meta** FUNC_1 (size_t,int) ;
 int FUNC_2 (struct vlc_playlist_item_meta**,size_t) ;
 struct vlc_playlist_item_meta* FUNC_3 (int ,struct vlc_playlist_sort_criterion const*,size_t) ;

__attribute__((used)) static struct vlc_playlist_item_meta **
FUNC_4(vlc_playlist_t *VAR_0,
        const struct vlc_playlist_sort_criterion VAR_1[], size_t VAR_2)
{
    struct vlc_playlist_item_meta **VAR_3 =
            FUNC_1(VAR_0->items.size, sizeof(*VAR_3));

    if (FUNC_0(!VAR_3))
        return ((void*)0);

    size_t VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_0->items.size; ++VAR_4)
    {
        VAR_3[VAR_4] = FUNC_3(VAR_0->items.data[VAR_4],
                                              VAR_1, VAR_2);
        if (FUNC_0(!VAR_3[VAR_4]))
            break;
    }

    if (VAR_4 < VAR_0->items.size)
    {

        FUNC_2(VAR_3, VAR_4);
        return ((void*)0);
    }

    return VAR_3;
}
