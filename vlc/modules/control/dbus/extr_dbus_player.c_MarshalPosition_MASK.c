
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_5__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
typedef scalar_t__ dbus_int64_t ;
struct TYPE_4__ {int playlist; } ;
typedef int DBusMessageIter ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6( intf_thread_t *VAR_4, DBusMessageIter *VAR_5 )
{

    dbus_int64_t VAR_6;

    vlc_player_t *VAR_7 = FUNC_5(VAR_4->p_sys->playlist);
    FUNC_3(VAR_7);
    VAR_6 = FUNC_2(VAR_7);
    FUNC_4(VAR_7);
    VAR_6 = VAR_6 == VAR_3 ? 0 : FUNC_0(VAR_6);

    if( !FUNC_1( VAR_5, VAR_0, &VAR_6 ) )
        return VAR_1;

    return VAR_2;
}
