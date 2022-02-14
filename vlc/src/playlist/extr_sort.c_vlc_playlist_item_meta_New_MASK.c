
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* media; } ;
typedef TYPE_2__ vlc_playlist_item_t ;
struct vlc_playlist_sort_criterion {int dummy; } ;
struct vlc_playlist_item_meta {TYPE_2__* item; } ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 struct vlc_playlist_item_meta* FUNC_0 (int,int) ;
 int FUNC_1 (struct vlc_playlist_item_meta*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct vlc_playlist_item_meta*,struct vlc_playlist_sort_criterion const*,size_t) ;

__attribute__((used)) static struct vlc_playlist_item_meta *
FUNC_6(vlc_playlist_item_t *VAR_1,
                           const struct vlc_playlist_sort_criterion VAR_2[],
                           size_t VAR_3)
{

    struct vlc_playlist_item_meta *VAR_4 = FUNC_0(1, sizeof(*VAR_4));
    if (FUNC_2(!VAR_4))
        return ((void*)0);

    VAR_4->item = VAR_1;

    FUNC_3(&VAR_1->media->lock);
    int VAR_5 = FUNC_5(VAR_4, VAR_2, VAR_3);
    FUNC_4(&VAR_1->media->lock);

    if (FUNC_2(VAR_5 != VAR_0))
    {
        FUNC_1(VAR_4);
        return ((void*)0);
    }

    return VAR_4;
}
