
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int listeners; } ;
typedef TYPE_1__ vlc_playlist_t ;
struct TYPE_10__ {int node; void* userdata; struct vlc_playlist_callbacks const* cbs; } ;
typedef TYPE_2__ vlc_playlist_listener_id ;
struct vlc_playlist_callbacks {int dummy; } ;


 TYPE_2__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;

vlc_playlist_listener_id *
FUNC_5(vlc_playlist_t *VAR_0,
                         const struct vlc_playlist_callbacks *VAR_1,
                         void *VAR_2, bool VAR_3)
{
    FUNC_3(VAR_0);

    vlc_playlist_listener_id *VAR_4 = FUNC_0(sizeof(*VAR_4));
    if (FUNC_1(!VAR_4))
        return ((void*)0);

    VAR_4->cbs = VAR_1;
    VAR_4->userdata = VAR_2;
    FUNC_2(&VAR_4->node, &VAR_0->listeners);

    if (VAR_3)
        FUNC_4(VAR_0, VAR_4);

    return VAR_4;
}
