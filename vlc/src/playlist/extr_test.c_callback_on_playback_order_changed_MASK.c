
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
struct playback_order_changed_report {int order; } ;
struct callback_ctx {int vec_playback_order_changed; } ;
typedef enum vlc_playlist_playback_order { ____Placeholder_vlc_playlist_playback_order } vlc_playlist_playback_order ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct playback_order_changed_report) ;

__attribute__((used)) static void
FUNC_2(vlc_playlist_t *VAR_0,
                                   enum vlc_playlist_playback_order VAR_1,
                                   void *VAR_2)
{
    FUNC_0(VAR_0);
    struct callback_ctx *VAR_3 = VAR_2;

    struct playback_order_changed_report VAR_4;
    VAR_4.order = VAR_1;
    FUNC_1(&VAR_3->vec_playback_order_changed, VAR_4);
}
