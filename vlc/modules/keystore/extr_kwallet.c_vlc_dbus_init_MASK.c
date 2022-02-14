
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {unsigned int i_sid; int connection; int * psz_app_id; } ;
typedef TYPE_1__ vlc_keystore_sys ;
struct TYPE_14__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ vlc_keystore ;
struct TYPE_15__ {int message; } ;
typedef TYPE_3__ DBusError ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 char* VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,char*,int ,TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,unsigned int,int*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,char*,...) ;
 int FUNC_11 (char*,char*,char*,char*,unsigned int) ;
 int * FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*) ;

__attribute__((used)) static int
FUNC_14( vlc_keystore* VAR_7 )
{
    vlc_keystore_sys* VAR_8 = VAR_7->p_sys;
    int VAR_9;
    DBusError VAR_10;

    FUNC_6( &VAR_10 );


    VAR_8->connection = FUNC_1( VAR_0, &VAR_10 );
    if ( FUNC_7( &VAR_10 ) )
    {
        FUNC_10( VAR_7, "vlc_dbus_init : "
                 "Connection error to session bus (%s)", VAR_10.message );
        FUNC_5( &VAR_10 );
    }
    if ( !VAR_8->connection )
    {
        FUNC_10( VAR_7, "vlc_dbus_init : connection is NULL");
        return VAR_5;
    }


    for( unsigned VAR_11 = 0; VAR_11 <= 99 && VAR_8->psz_app_id == ((void*)0); ++VAR_11 )
    {
        char VAR_12[FUNC_13( VAR_3 ) + FUNC_13( VAR_1 ) + 5];

        FUNC_11( VAR_12, "%s.%s_%02u", VAR_3, VAR_1, VAR_11 );
        VAR_9 = FUNC_2( VAR_8->connection, VAR_12, 0,
                                       &VAR_10 );
        if ( FUNC_7( &VAR_10 ) )
        {
            FUNC_10( VAR_7, "vlc_dbus_init : dbus_bus_request_name :"
                     " error (%s)", VAR_10.message );
            FUNC_5( &VAR_10 );
        }
        if ( VAR_9 == VAR_2 )
        {
            VAR_8->psz_app_id = FUNC_12( VAR_12 );
            if ( !VAR_8->psz_app_id )
                goto error;
        }
    }
    if ( VAR_8->psz_app_id == ((void*)0) )
    {
        FUNC_10( VAR_7, "vlc_dbus_init : Too many kwallet instances" );
        goto error;
    }


    unsigned int VAR_13 = 0;
    for ( ; VAR_13 < VAR_4 ; ++VAR_13 )
    {
        bool VAR_14 = 0;
        if ( FUNC_8( VAR_7, VAR_13, &VAR_14 ) )
        {
            FUNC_10( VAR_7, "vlc_dbus_init : kwallet_is_enabled failed" );
            goto error;
        }
        if ( VAR_14 == 1 )
            break;
    }
    if ( VAR_13 == VAR_4 )
    {
        FUNC_10( VAR_7, "vlc_dbus_init : No kwallet service enabled" );
        goto error;
    }
    VAR_8->i_sid = VAR_13;


    if ( FUNC_9( VAR_7 ) )
    {
        FUNC_10(VAR_7, "vlc_dbus_init : kwallet_network_wallet has failed");
        goto error;
    }

    return VAR_6;

error:
    FUNC_0( VAR_8->psz_app_id );
    FUNC_3( VAR_8->connection );
    FUNC_4( VAR_8->connection );
    return VAR_5;
}
