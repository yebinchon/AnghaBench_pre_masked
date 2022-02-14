
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int order; } ;
typedef TYPE_1__ vlc_playlist_t ;
typedef enum vlc_playlist_playback_order { ____Placeholder_vlc_playlist_playback_order } vlc_playlist_playback_order ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(vlc_playlist_t *VAR_0,
                              enum vlc_playlist_playback_order VAR_1)
{
    FUNC_0(VAR_0);

    if (VAR_0->order == VAR_1)
        return;

    VAR_0->order = VAR_1;
    FUNC_1(VAR_0);
}
