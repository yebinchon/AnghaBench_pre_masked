
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int psz_wallet; } ;
typedef TYPE_1__ vlc_keystore_sys ;
struct TYPE_12__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ vlc_keystore ;
struct TYPE_13__ {int message; } ;
typedef int DBusMessage ;
typedef TYPE_3__ DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*,int ,char**,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (TYPE_2__*,char*) ;
 int * FUNC_7 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_8( vlc_keystore* VAR_5 )
{
    vlc_keystore_sys* VAR_6 = VAR_5->p_sys;
    DBusMessage* VAR_7 = ((void*)0);
    DBusMessage* VAR_8 = ((void*)0);
    DBusError VAR_9;
    char* VAR_10;
    int VAR_11 = VAR_2;


    VAR_7 = FUNC_6( VAR_5, "networkWallet" );
    if ( !VAR_7 )
    {
        FUNC_4( VAR_5, "kwallet_network_wallet : vlc_dbus_new_method failed" );
        return VAR_2;
    }


    VAR_8 = FUNC_7( VAR_5, VAR_7 );
    if ( !VAR_8 )
    {
        FUNC_4( VAR_5, "kwallet_network_wallet : vlc_dbus_send_message failed" );
        goto end;
    }


    FUNC_1( &VAR_9 );
    if ( !FUNC_2( VAR_8, &VAR_9, VAR_1,
                                 &VAR_10, VAR_0 ) )
    {
        FUNC_4( VAR_5, "kwallet_network_wallet : "
                 "dbus_message_get_args failed\n%s", VAR_9.message );
        FUNC_0( &VAR_9 );
        goto end;
    }

    VAR_6->psz_wallet = FUNC_5( VAR_10 );
    if ( !VAR_6->psz_wallet )
    {
        VAR_11 = VAR_3;
        goto end;
    }

    VAR_11 = VAR_4;

end:

    if ( VAR_7 )
        FUNC_3( VAR_7 );
    if ( VAR_8 )
        FUNC_3( VAR_8 );

    return VAR_11;
}
