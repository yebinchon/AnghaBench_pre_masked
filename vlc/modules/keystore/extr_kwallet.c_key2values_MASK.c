
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * psz_option; scalar_t__ psz_path; scalar_t__ i_port; scalar_t__ psz_host; scalar_t__ psz_username; scalar_t__ psz_protocol; } ;
typedef TYPE_1__ vlc_url_t ;
struct TYPE_7__ {int ** ppsz_values; } ;
typedef TYPE_2__ vlc_keystore_entry ;
typedef enum vlc_keystore_key { ____Placeholder_vlc_keystore_key } vlc_keystore_key ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int **,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,char*,int) ;
 char* FUNC_5 (int *,char*,char**) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int * FUNC_8 (char const*) ;

__attribute__((used)) static int
FUNC_9( char* VAR_10, vlc_keystore_entry* VAR_11 )
{
    vlc_url_t VAR_12;
    int VAR_13 = VAR_8;

    for ( int VAR_14 = 0 ; VAR_14 < VAR_1 ; ++VAR_14 )
        VAR_11->ppsz_values[VAR_14] = ((void*)0);

    FUNC_7( &VAR_12, VAR_10 );

    if ( VAR_12.psz_protocol && !( VAR_11->ppsz_values[VAR_4] =
                                FUNC_2( VAR_12.psz_protocol ) ) )
        goto end;
    if ( VAR_12.psz_username && !( VAR_11->ppsz_values[VAR_7] =
                                FUNC_2( VAR_12.psz_username ) ) )
        goto end;
    if ( VAR_12.psz_host && !( VAR_11->ppsz_values[VAR_6] =
                            FUNC_2( VAR_12.psz_host ) ) )
        goto end;
    if ( VAR_12.i_port && FUNC_0( &VAR_11->ppsz_values[VAR_3],
                                 "%ld", VAR_12.i_port) == -1 )
        goto end;
    if ( VAR_12.psz_path && !( VAR_11->ppsz_values[VAR_2] =
                            FUNC_2( VAR_12.psz_path ) ) )
        goto end;
    if ( VAR_12.psz_option )
    {
        char *VAR_15;

        for ( const char *VAR_16 = FUNC_5( VAR_12.psz_option, "&", &VAR_15 );
              VAR_16 != ((void*)0);
              VAR_16 = FUNC_5( ((void*)0), "&", &VAR_15 ) )
        {
            enum vlc_keystore_key VAR_17;
            const char *VAR_18;

            if ( !FUNC_4( VAR_16, "realm=", FUNC_3( "realm=" ) ) )
            {
                VAR_17 = VAR_5;
                VAR_18 = VAR_16 + FUNC_3( "realm=" );
            }
            else if ( !FUNC_4( VAR_16, "authtype=", FUNC_3( "authtype=" ) ) )
            {
                VAR_17 = VAR_0;
                VAR_18 = VAR_16 + FUNC_3( "authtype=" );
            }
            else
                VAR_18 = ((void*)0);

            if ( VAR_18 != ((void*)0) )
            {
                VAR_11->ppsz_values[VAR_17] = FUNC_8( VAR_18 );
                if ( !VAR_11->ppsz_values[VAR_17] )
                    goto end;
            }
        }
    }

    VAR_13 = VAR_9;

end:
    FUNC_6( &VAR_12 );
    if ( VAR_13 )
    {
        FUNC_1( VAR_11->ppsz_values[VAR_4] );
        FUNC_1( VAR_11->ppsz_values[VAR_7] );
        FUNC_1( VAR_11->ppsz_values[VAR_6] );
        FUNC_1( VAR_11->ppsz_values[VAR_3] );
        FUNC_1( VAR_11->ppsz_values[VAR_2] );
        FUNC_1( VAR_11->ppsz_values[VAR_5] );
        FUNC_1 ( VAR_11->ppsz_values[VAR_0] );
    }
    return VAR_13;
}
