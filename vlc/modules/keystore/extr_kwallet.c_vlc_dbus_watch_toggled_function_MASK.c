
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {short events; } ;
struct vlc_dbus_watch_data {TYPE_1__ pollfd; } ;
typedef int DBusWatch ;


 scalar_t__ FUNC_0 (int *) ;
 struct vlc_dbus_watch_data* FUNC_1 (int *,void*) ;
 short FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3( DBusWatch *VAR_0, void *VAR_1 )
{
    struct vlc_dbus_watch_data *VAR_2 = FUNC_1( VAR_0, VAR_1 );
    short VAR_3 = FUNC_2( VAR_0 );

    if( FUNC_0( VAR_0 ) )
        VAR_2->pollfd.events |= VAR_3;
    else
        VAR_2->pollfd.events &= ~VAR_3;
}
