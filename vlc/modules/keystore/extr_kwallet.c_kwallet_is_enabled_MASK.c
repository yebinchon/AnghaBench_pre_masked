
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_keystore ;
typedef int dbus_bool_t ;
struct TYPE_5__ {int message; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;
typedef TYPE_1__ DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,int ,int*,int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (char*,char*,char*,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,...) ;
 int * VAR_5 ;
 int * FUNC_9 (int *,int *) ;

__attribute__((used)) static int
FUNC_10( vlc_keystore* VAR_6, int VAR_7, bool* VAR_8 )
{
    FUNC_0( VAR_6 );
    DBusMessage* VAR_9 = ((void*)0);
    DBusMessage* VAR_10 = ((void*)0);
    DBusMessageIter VAR_11;
    DBusError VAR_12;
    dbus_bool_t VAR_13;
    int VAR_14 = VAR_3;


    VAR_9 = FUNC_6( "org.freedesktop.DBus",
                                        "/",
                                        "org.freedesktop.DBus",
                                        "NameHasOwner" );
    if ( !VAR_9 )
    {
        FUNC_8( VAR_6, "vlc_dbus_new_method : Failed to create message" );
        goto end;
    }


    FUNC_5( VAR_9, &VAR_11 );
    if ( !FUNC_4( &VAR_11, VAR_2, &VAR_5[VAR_7] ) )
        goto end;


    VAR_10 = FUNC_9( VAR_6, VAR_9 );
    if ( !VAR_10 )
    {
        FUNC_8( VAR_6, "kwallet_is_enabled : vlc_dbus_send_message failed");
        goto end;
    }


    FUNC_2( &VAR_12 );
    if ( !FUNC_3( VAR_10, &VAR_12, VAR_0,
                                 &VAR_13, VAR_1 ) )
    {
        FUNC_8( VAR_6, "kwallet_is_enabled : "
                 "dbus_message_get_args failed\n%s", VAR_12.message );
        FUNC_1( &VAR_12 );
        goto end;
    }

    *VAR_8 = VAR_13;

    VAR_14 = VAR_4;

end:

    if ( VAR_9 )
        FUNC_7( VAR_9 );
    if ( VAR_10 )
        FUNC_7( VAR_10 );

    return VAR_14;
}
