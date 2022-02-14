
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int items; } ;
typedef TYPE_1__ vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
typedef int ssize_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int const*,int *) ;

ssize_t
FUNC_2(vlc_playlist_t *VAR_0, const vlc_playlist_item_t *VAR_1)
{
    FUNC_0(VAR_0);

    ssize_t VAR_2;
    FUNC_1(&VAR_0->items, VAR_1, &VAR_2);
    return VAR_2;
}
