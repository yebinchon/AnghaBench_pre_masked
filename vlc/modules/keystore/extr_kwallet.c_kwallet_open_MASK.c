
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {unsigned long long psz_wallet; unsigned long long psz_app_id; unsigned int i_handle; } ;
typedef TYPE_1__ vlc_keystore_sys ;
struct TYPE_14__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ vlc_keystore ;
struct TYPE_15__ {int message; } ;
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
 int FUNC_2 (int *,TYPE_3__*,int ,unsigned int*,int ) ;
 int FUNC_3 (int *,int ,unsigned long long*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ,int*) ;
 int FUNC_8 (TYPE_2__*,char*,...) ;
 int VAR_6 ;
 int * FUNC_9 (TYPE_2__*,char*) ;
 int * FUNC_10 (TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_11( vlc_keystore* VAR_7 )
{
    vlc_keystore_sys* VAR_8 = VAR_7->p_sys;
    DBusMessage* VAR_9 = ((void*)0);
    DBusMessage* VAR_10 = ((void*)0);
    DBusMessageIter VAR_11;
    DBusError VAR_12;
    unsigned long long VAR_13 = 0;
    unsigned int VAR_14 = 1;
    bool VAR_15;
    int VAR_16 = VAR_4;


    VAR_9 = FUNC_9( VAR_7, "open" );
    if ( !VAR_9 )
    {
        FUNC_8( VAR_7, "kwallet_open : vlc_dbus_new_method failed");
        return VAR_4;
    }


    FUNC_4(VAR_9, &VAR_11);
    if ( !FUNC_3( &VAR_11, VAR_3, &VAR_8->psz_wallet ) ||
         !FUNC_3( &VAR_11, VAR_1, &VAR_13 ) ||
         !FUNC_3( &VAR_11, VAR_3, &VAR_8->psz_app_id ) )
        goto end;


    VAR_10 = FUNC_10( VAR_7, VAR_9 );
    if ( !VAR_10 )
    {
        FUNC_8( VAR_7, "kwallet_open : vlc_dbus_send_message failed" );
        goto end;
    }


    FUNC_1( &VAR_12 );
    if ( !FUNC_2( VAR_10, &VAR_12, VAR_0,
                                 &VAR_14, VAR_2 ) )
    {
        FUNC_8( VAR_7, "kwallet_open :"
                 " dbus_message_get_args failed\n%s", VAR_12.message );
        FUNC_0( &VAR_12 );
        goto end;
    }
    VAR_8->i_handle = VAR_14;


    if ( FUNC_7( VAR_7, VAR_6, &VAR_15 ) )
        goto end;
    if ( !VAR_15 )
    {
        if ( FUNC_6( VAR_7, VAR_6 ) )
        {
            FUNC_8( VAR_7, "kwallet_open : could not create folder %s",
                     VAR_6 );
            goto end;
        }
    }

    VAR_16 = VAR_5;

end:

    if ( VAR_9 )
        FUNC_5( VAR_9 );
    if ( VAR_10 )
        FUNC_5( VAR_10 );

    return VAR_16;
}
