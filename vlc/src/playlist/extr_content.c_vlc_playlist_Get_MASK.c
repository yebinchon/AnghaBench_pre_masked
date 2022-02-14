
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ** data; } ;
struct TYPE_6__ {TYPE_1__ items; } ;
typedef TYPE_2__ vlc_playlist_t ;
typedef int vlc_playlist_item_t ;


 int FUNC_0 (TYPE_2__*) ;

vlc_playlist_item_t *
FUNC_1(vlc_playlist_t *VAR_0, size_t VAR_1)
{
    FUNC_0(VAR_0);
    return VAR_0->items.data[VAR_1];
}
