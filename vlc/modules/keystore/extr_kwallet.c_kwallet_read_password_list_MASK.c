
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* i_handle; char* psz_app_id; } ;
typedef TYPE_1__ vlc_keystore_sys ;
typedef int vlc_keystore_entry ;
struct TYPE_8__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ vlc_keystore ;
typedef int uint8_t ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int *,scalar_t__,char**) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char**) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*,int *) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 char* VAR_5 ;
 size_t FUNC_12 (int **,char*) ;
 int * FUNC_13 (TYPE_2__*,char*) ;
 int * FUNC_14 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_15 (int *,int *,size_t) ;
 int FUNC_16 (int *,int) ;

__attribute__((used)) static vlc_keystore_entry*
FUNC_17( vlc_keystore* VAR_6, char* VAR_7,
                            unsigned int* VAR_8 )
{
    vlc_keystore_sys* VAR_9 = VAR_6->p_sys;
    DBusMessage* VAR_10 = ((void*)0);
    DBusMessage* VAR_11 = ((void*)0);
    DBusMessageIter VAR_12;
    DBusMessageIter VAR_13;
    DBusMessageIter VAR_14;
    DBusMessageIter VAR_15;
    vlc_keystore_entry* VAR_16 = ((void*)0);
    size_t VAR_17;
    uint8_t* VAR_18 = ((void*)0);
    char* VAR_19;
    char* VAR_20;
    int VAR_21 = 0;


    *VAR_8 = 0;
    if ( !( VAR_10 = FUNC_13( VAR_6, "readPasswordList" ) ) )
    {
        FUNC_11( VAR_6, "kwallet_read_password_list : vlc_dbus_new_method failed" );
        goto error;
    }


    FUNC_5( VAR_10, &VAR_12 );
    if ( !FUNC_1( &VAR_12, VAR_2, &VAR_9->i_handle ) ||
         !FUNC_1( &VAR_12, VAR_3, &VAR_5 ) ||
         !FUNC_1( &VAR_12, VAR_3, &VAR_7 ) ||
         !FUNC_1( &VAR_12, VAR_3, &VAR_9->psz_app_id ) )
        goto error;


    if ( !( VAR_11 = FUNC_14( VAR_6, VAR_10 ) ) )
    {
        FUNC_11( VAR_6, "kwallet_read_password_list : vlc_dbus_send_message failed" );
        goto error;
    }


    if ( !FUNC_4( VAR_11, &VAR_12 ) )
    {
        FUNC_11( VAR_6, "kwallet_read_password_list : Message has no arguments" );
        goto error;
    }
    else if ( FUNC_2(&VAR_12) != VAR_0 )
    {
        FUNC_11( VAR_6, "kwallet_read_password_list : Wrong reply type" );
        goto error;
    }
    else
    {

        FUNC_7( &VAR_12, &VAR_13 );
        do
        {
            if ( FUNC_2( &VAR_13 ) != VAR_1 )
                continue;
            FUNC_7( &VAR_13, &VAR_14 );
            if ( FUNC_2( &VAR_14 ) != VAR_3 )
                continue;
            FUNC_6(&VAR_14);
            if ( FUNC_2( &VAR_14 ) != VAR_4 )
                continue;
            ++( *VAR_8 );
       } while ( FUNC_6( &VAR_13 ) );

        if ( *VAR_8 == 0 )
            goto error;
        if ( !( VAR_16 = FUNC_0( *VAR_8, sizeof( vlc_keystore_entry ) ) ) )
            goto error;

        FUNC_4( VAR_11, &VAR_12 );

        FUNC_7( &VAR_12, &VAR_13 );
        do
        {
            if ( FUNC_2( &VAR_13 ) != VAR_1 )
            {
                FUNC_11( VAR_6, "Wrong type not DBUS_TYPE_DICT_ENTRY" );
                continue;
            }

            FUNC_7( &VAR_13, &VAR_14 );
            if ( FUNC_2( &VAR_14 ) != VAR_3 )
            {
                FUNC_11( VAR_6, "First type of Dict-Entry is not a string" );
                continue;
            }
            FUNC_3( &VAR_14, &VAR_19 );
            FUNC_6(&VAR_14);
            if ( FUNC_2( &VAR_14 ) != VAR_4 )
            {
                FUNC_11( VAR_6, "Second type of Dict-Entry is not a variant" );
                continue;
            }

            FUNC_7( &VAR_14, &VAR_15 );
            FUNC_3( &VAR_15, &VAR_20 );

            VAR_17 = FUNC_12( &VAR_18, VAR_20);
            if ( FUNC_10( VAR_19, &VAR_16[VAR_21] ) )
                goto error;
            if ( ( FUNC_15( &VAR_16[VAR_21],
                                                  VAR_18,
                                                  VAR_17 ) ) )
                goto error;

            FUNC_9(VAR_18);
            VAR_21 += 1;
        } while ( FUNC_6( &VAR_13 ) );
    }

    FUNC_8( VAR_10 );
    FUNC_8( VAR_11 );

    return VAR_16;

error:
    FUNC_9( VAR_18 );
    *VAR_8 = 0;
    if ( VAR_16 )
        FUNC_16( VAR_16, VAR_21 );
    if ( VAR_10 )
        FUNC_8( VAR_10 );
    if ( VAR_11 )
        FUNC_8( VAR_11 );
    return ((void*)0);
}
