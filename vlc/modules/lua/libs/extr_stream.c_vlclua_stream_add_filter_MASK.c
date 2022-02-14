
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int stream_t ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*,...) ;
 int * FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10( lua_State *VAR_0 )
{
    vlc_object_t *VAR_1 = FUNC_9( VAR_0 );


    FUNC_4( VAR_0, 2 );

    stream_t **VAR_2 = (stream_t **)FUNC_0( VAR_0, 1, "stream" );
    if( !*VAR_2 ) return FUNC_8( VAR_0 );
    const char *VAR_3 = ((void*)0);

    if( FUNC_2( VAR_0, 2 ) )
        VAR_3 = FUNC_5( VAR_0, 2 );

    if( !VAR_3 || !*VAR_3 )
    {
        FUNC_6( VAR_1, "adding all automatic stream filters" );
        while( 1 )
        {

            stream_t *VAR_4 = FUNC_7( *VAR_2, ((void*)0) );
            if( !VAR_4 )
                break;
            else
            {
                FUNC_6( VAR_1, "inserted an automatic stream filter" );
                *VAR_2 = VAR_4;
            }
        }
        FUNC_1( VAR_0, "stream" );
        FUNC_3( VAR_0, 1 );
    }
    else
    {

        stream_t *VAR_5 = FUNC_7( *VAR_2, VAR_3 );
        if( !VAR_5 )
            FUNC_6( VAR_1, "Unable to open requested stream filter '%s'",
                     VAR_3 );
        else
        {
            *VAR_2 = VAR_5;
            FUNC_1( VAR_0, "stream" );
            FUNC_3( VAR_0, 1 );
        }
    }

    return 1;
}
