
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t i_sid; } ;
typedef TYPE_1__ vlc_keystore_sys ;
struct TYPE_6__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ vlc_keystore ;
typedef int DBusMessage ;


 int * FUNC_0 (int ,int ,int ,char const*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static DBusMessage*
FUNC_2( vlc_keystore* VAR_3, const char* VAR_4 )
{
    vlc_keystore_sys* VAR_5 = VAR_3->p_sys;
    DBusMessage* VAR_6;

    VAR_6 = FUNC_0( VAR_0[VAR_5->i_sid],
                                        VAR_1[VAR_5->i_sid],
                                        VAR_2,
                                        VAR_4 );
    if ( !VAR_6 )
    {
        FUNC_1( VAR_3, "vlc_dbus_new_method : Failed to create message" );
        return ((void*)0);
    }

    return VAR_6;
}
