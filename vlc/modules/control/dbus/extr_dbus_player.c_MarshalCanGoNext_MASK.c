
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_playlist_t ;
typedef int ssize_t ;
struct TYPE_5__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
typedef enum vlc_playlist_playback_repeat { ____Placeholder_vlc_playlist_playback_repeat } vlc_playlist_playback_repeat ;
typedef int dbus_bool_t ;
struct TYPE_4__ {int * playlist; } ;
typedef int DBusMessageIter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int*) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6( intf_thread_t *VAR_4, DBusMessageIter *VAR_5 )
{
    vlc_playlist_t *VAR_6 = VAR_4->p_sys->playlist;
    FUNC_4(VAR_6);
    size_t VAR_7 = FUNC_1(VAR_6);
    ssize_t VAR_8 = FUNC_2(VAR_6);
    enum vlc_playlist_playback_repeat VAR_9 =
        FUNC_3(VAR_6);
    FUNC_5(VAR_6);

    dbus_bool_t VAR_10 =
        VAR_7 != 0 &&
        ((VAR_8 != -1 && (size_t)VAR_8 < VAR_7 - 1) ||
         VAR_9 != VAR_2);

    if( !FUNC_0( VAR_5, VAR_0,
                                         &VAR_10 ) )
        return VAR_1;

    return VAR_3;
}
