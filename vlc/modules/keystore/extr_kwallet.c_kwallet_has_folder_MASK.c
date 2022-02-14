
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char const* i_handle; char const* psz_app_id; } ;
typedef TYPE_1__ vlc_keystore_sys ;
struct TYPE_12__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ vlc_keystore ;
typedef int dbus_bool_t ;
struct TYPE_13__ {int message; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;
typedef TYPE_3__ DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*,int ,int*,int ) ;
 int FUNC_3 (int *,int ,char const**) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,char*,...) ;
 int * FUNC_7 (TYPE_2__*,char*) ;
 int * FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_9( vlc_keystore* VAR_6, const char* VAR_7, bool *VAR_8 )
{
    vlc_keystore_sys* VAR_9 = VAR_6->p_sys;
    DBusMessage* VAR_10 = ((void*)0);
    DBusMessage* VAR_11 = ((void*)0);
    DBusError VAR_12;
    DBusMessageIter VAR_13;
    dbus_bool_t VAR_14;
    int VAR_15 = VAR_4;


    VAR_10 = FUNC_7( VAR_6, "hasFolder" );
    if ( !VAR_10 )
    {
        FUNC_6( VAR_6, "kwallet_has_folder : vlc_dbus_new_method failed" );
        return VAR_4;
    }


    FUNC_4( VAR_10, &VAR_13 );
    if ( !FUNC_3( &VAR_13, VAR_1, &VAR_9->i_handle ) ||
         !FUNC_3( &VAR_13, VAR_3, &VAR_7 ) ||
         !FUNC_3( &VAR_13, VAR_3, &VAR_9->psz_app_id ) )
        goto end;


    VAR_11 = FUNC_8( VAR_6, VAR_10 );
    if ( !VAR_11 )
    {
        FUNC_6( VAR_6, "kwallet_has_folder : vlc_dbus_send_message failed" );
        goto end;
    }



    FUNC_1( &VAR_12 );
    if ( !FUNC_2( VAR_11, &VAR_12, VAR_0,
                                 &VAR_14, VAR_2 ) )
    {
        FUNC_6( VAR_6, "kwallet_has_folder :"
                 " dbus_message_get_args failed\n%s", VAR_12.message );
        FUNC_0( &VAR_12 );
        goto end;
    }

    *VAR_8 = VAR_14;

    VAR_15 = VAR_5;

end:

    if ( VAR_10 )
        FUNC_5( VAR_10 );
    if ( VAR_11 )
        FUNC_5( VAR_11);

    return VAR_15;
}
