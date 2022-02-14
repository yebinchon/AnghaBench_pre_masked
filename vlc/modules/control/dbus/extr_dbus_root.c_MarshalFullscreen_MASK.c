
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_5__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
typedef int dbus_bool_t ;
struct TYPE_4__ {int playlist; } ;
typedef int DBusMessageIter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3( intf_thread_t *VAR_3, DBusMessageIter *VAR_4 )
{
    dbus_bool_t VAR_5;
    vlc_player_t *VAR_6 = FUNC_2(VAR_3->p_sys->playlist);
    VAR_5 = FUNC_1(VAR_6);
    if (!FUNC_0( VAR_4,
            VAR_0, &VAR_5 ))
        return VAR_1;
    return VAR_2;
}
