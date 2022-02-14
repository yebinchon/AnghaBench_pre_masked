
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_playlist_t ;
typedef int vlc_playlist_item_t ;
struct TYPE_2__ {int need_update; } ;
typedef TYPE_1__ intf_sys_t ;


 int FUNC_0 (size_t) ;

__attribute__((used)) static void
FUNC_1(vlc_playlist_t *VAR_0,
                          size_t VAR_1,
                          vlc_playlist_item_t *const VAR_2[], size_t VAR_3,
                          void *VAR_4)
{
    FUNC_0(VAR_0);
    FUNC_0(VAR_1); FUNC_0(VAR_2); FUNC_0(VAR_3);

    ((intf_sys_t *)VAR_4)->need_update = 1;
}
