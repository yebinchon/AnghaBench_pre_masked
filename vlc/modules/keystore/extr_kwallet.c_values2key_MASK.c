
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct vlc_memstream {char* ptr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const* const) ;
 char* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct vlc_memstream*) ;
 scalar_t__ FUNC_4 (struct vlc_memstream*) ;
 scalar_t__ FUNC_5 (struct vlc_memstream*) ;
 int FUNC_6 (struct vlc_memstream*,char*,...) ;
 int FUNC_7 (struct vlc_memstream*,char) ;
 int FUNC_8 (struct vlc_memstream*,char const* const) ;

__attribute__((used)) static char*
FUNC_9( const char* const* VAR_7, bool VAR_8 )
{
    char* VAR_9 = ((void*)0);
    char* VAR_10 = ((void*)0);
    bool VAR_11 = 0;

    if ( ( !VAR_7[VAR_3] || !VAR_7[VAR_5] )
         && !VAR_8 )
        return ((void*)0);

    struct vlc_memstream VAR_12;
    if ( FUNC_5( &VAR_12 ) )
        return ((void*)0);


    if ( VAR_7[VAR_3] )
        FUNC_6( &VAR_12, "%s://", VAR_7[VAR_3] );
    else if ( VAR_8 )
        FUNC_6( &VAR_12, "*://" );


    if ( VAR_7[VAR_6] )
        FUNC_6( &VAR_12, "%s@", VAR_7[VAR_6] );
    else if ( VAR_8 )
        FUNC_6( &VAR_12, "*" );


    if ( VAR_7[VAR_5] )
        FUNC_6( &VAR_12, "%s", VAR_7[VAR_5] );
    else if ( VAR_8 )
        FUNC_6( &VAR_12, "*" );


    if ( VAR_7[VAR_2] )
        FUNC_6( &VAR_12, ":%s", VAR_7[VAR_2] );
    else if ( VAR_8 )
        FUNC_6( &VAR_12, "*" );


    if( VAR_7[VAR_1] )
    {
        if( VAR_7[VAR_1][0] != '/' )
            FUNC_7( &VAR_12, '/' );

        FUNC_8( &VAR_12, VAR_7[VAR_1] );
    }
    else if ( VAR_8 )
        FUNC_6( &VAR_12, "*" );


    if ( VAR_7[VAR_4] || VAR_7[VAR_0] || VAR_8 )
    {
        FUNC_6( &VAR_12, "?" );


        if ( VAR_7[VAR_4] || VAR_8 )
        {
            if ( VAR_7[VAR_4] )
            {
                VAR_9 = FUNC_2( ( uint8_t* )VAR_7[VAR_4],
                                                       FUNC_1(VAR_7[VAR_4] ) );
                if ( !VAR_9 )
                    goto end;
                FUNC_6( &VAR_12, "realm=%s", VAR_9 );
            }
            else
                FUNC_6( &VAR_12, "*" );

            if ( VAR_7[VAR_0] )
                FUNC_6( &VAR_12, "&" );
        }


        if ( VAR_7[VAR_0] || VAR_8 )
        {

            if ( VAR_7[VAR_0] )
            {
                VAR_10 = FUNC_2( ( uint8_t* )VAR_7[VAR_0],
                                                      FUNC_1(VAR_7[VAR_0] ) );
                if ( !VAR_10 )
                    goto end;
                FUNC_6( &VAR_12, "authtype=%s", VAR_10 );
            }
            else
                FUNC_6( &VAR_12, "*" );
        }

    }

    VAR_11 = 1;

end:
    FUNC_0( VAR_9 );
    FUNC_0( VAR_10 );
    if ( FUNC_4( &VAR_12 ) != 0 )
        VAR_11 = 0;
    char *VAR_13 = FUNC_3( &VAR_12 ) == 0 ? VAR_12.ptr : ((void*)0);
    if ( !VAR_11 )
    {
        FUNC_0( VAR_13 );
        VAR_13 = ((void*)0);
    }
    return VAR_13;
}
