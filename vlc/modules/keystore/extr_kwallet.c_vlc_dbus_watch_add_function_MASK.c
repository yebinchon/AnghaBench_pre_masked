
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {short events; int fd; } ;
struct vlc_dbus_watch_data {int * p_watch; TYPE_1__ pollfd; } ;
typedef int dbus_bool_t ;
typedef int DBusWatch ;


 int VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct vlc_dbus_watch_data* FUNC_1 (int *,void*) ;
 short FUNC_2 (int *) ;

__attribute__((used)) static dbus_bool_t
FUNC_3( DBusWatch *VAR_4, void *VAR_5 )
{
    struct vlc_dbus_watch_data *VAR_6 = FUNC_1( VAR_4, VAR_5 );

    if( VAR_6 == ((void*)0) )
        return VAR_0;

    short VAR_7 = VAR_2 | VAR_1;

    VAR_7 |= FUNC_2( VAR_4 );

    VAR_6->pollfd.fd = FUNC_0( VAR_4 );
    VAR_6->pollfd.events = VAR_7;
    VAR_6->p_watch = VAR_4;
    return VAR_3;
}
