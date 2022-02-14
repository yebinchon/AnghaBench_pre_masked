
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {char* i_handle; char* psz_app_id; } ;
typedef TYPE_1__ vlc_keystore_sys ;
struct TYPE_13__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ vlc_keystore ;
struct TYPE_14__ {char* message; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;
typedef TYPE_3__ DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*,int ,int*,int ) ;
 int FUNC_3 (int *,int ,char**) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,char*,int*) ;
 int FUNC_7 (TYPE_2__*,char*,...) ;
 char* VAR_5 ;
 int * FUNC_8 (TYPE_2__*,char*) ;
 int * FUNC_9 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_10( vlc_keystore* VAR_6, char* VAR_7 )
{
    vlc_keystore_sys* VAR_8 = VAR_6->p_sys;
    DBusMessage* VAR_9 = ((void*)0);
    DBusMessage* VAR_10 = ((void*)0);
    DBusError VAR_11;
    DBusMessageIter VAR_12;
    int VAR_13;
    bool VAR_14 = 0;
    int VAR_15 = VAR_3;

    if ( FUNC_6( VAR_6, VAR_7, &VAR_14 ) )
    {
        FUNC_7( VAR_6, "kwallet_remove_entry : kwallet_has_entry failed" );
        return VAR_3;
    }
    if ( !VAR_14 )
    {
        FUNC_7( VAR_6, "kwallet_remove_entry : there is no such entry :"
                "%s", VAR_7 );
        return VAR_3;
    }


    if ( !( VAR_9 = FUNC_8( VAR_6, "removeEntry" ) ) )
    {
        FUNC_7( VAR_6, "kwallet_remove_entry : vlc_dbus_new_method failed" );
        return VAR_3;
    }


    FUNC_4( VAR_9, &VAR_12 );
    if ( !FUNC_3( &VAR_12, VAR_0, &VAR_8->i_handle ) ||
         !FUNC_3( &VAR_12, VAR_2, &VAR_5 ) ||
         !FUNC_3( &VAR_12, VAR_2, &VAR_7 ) ||
         !FUNC_3( &VAR_12, VAR_2, &VAR_8->psz_app_id ) )
        goto end;


    if ( !( VAR_10 = FUNC_9( VAR_6, VAR_9 ) ) )
    {
        FUNC_7( VAR_6, "kwallet_remove_entry : vlc_dbus_send_message failed" );
        goto end;
    }


    FUNC_1( &VAR_11 );
    if ( !FUNC_2( VAR_10, &VAR_11, VAR_0,
                                 &VAR_13, VAR_1 ) )
    {
        FUNC_7( VAR_6, "kwallet_remove entry :"
                 " dbus_message_get_args failed\n%s", VAR_11.message );
        FUNC_0( &VAR_11 );
        goto end;
    }

    VAR_15 = VAR_4;

end:

    if ( VAR_9 )
        FUNC_5( VAR_9 );
    if ( VAR_10 )
        FUNC_5( VAR_10 );

    return VAR_15;
}
