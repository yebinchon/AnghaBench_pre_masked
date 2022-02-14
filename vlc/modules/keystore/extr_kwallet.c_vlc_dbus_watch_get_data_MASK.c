
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_dbus_watch_data {int * p_watch; } ;
typedef int DBusWatch ;


 unsigned int VAR_0 ;

__attribute__((used)) static struct vlc_dbus_watch_data *
FUNC_0( DBusWatch *VAR_1,
                         struct vlc_dbus_watch_data *VAR_2 )
{
    for( unsigned VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3 )
    {
        if( VAR_2[VAR_3].p_watch == ((void*)0) || VAR_2[VAR_3].p_watch == VAR_1 )
            return &VAR_2[VAR_3];
    }
    return ((void*)0);
}
