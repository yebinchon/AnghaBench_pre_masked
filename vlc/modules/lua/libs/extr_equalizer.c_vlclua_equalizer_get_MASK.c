
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ locale_t ;
typedef int audio_output_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char**,char*,unsigned int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int,char*) ;
 scalar_t__ FUNC_7 (int ,char*,int *) ;
 int * FUNC_8 (char*,char*) ;
 float FUNC_9 (char*,char**) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 char* FUNC_11 (int *,char*) ;
 int * FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13( lua_State *VAR_1 )
{
    const unsigned VAR_2 = 10;

    audio_output_t *VAR_3 = FUNC_12(VAR_1);
    if( VAR_3 == ((void*)0) )
        return 0;

    char *VAR_4 = FUNC_11( VAR_3, "audio-filter" );
    if( !VAR_4 || FUNC_8 ( VAR_4, "equalizer" ) == ((void*)0) )
    {
        FUNC_2( VAR_4 );
        FUNC_0(VAR_3);
        return 0;
    }
    FUNC_2( VAR_4 );

    char *VAR_5, *VAR_6;
    VAR_5 = VAR_6 = FUNC_11( VAR_3, "equalizer-bands" );
    if( !VAR_6 )
    {
        FUNC_0(VAR_3);
        return 0;
    }

    bool VAR_7 = 0;
    locale_t VAR_8 = FUNC_7 (VAR_0, "C", ((void*)0));
    locale_t VAR_9 = FUNC_10 (VAR_8);
    FUNC_4( VAR_1 );
    for( unsigned VAR_10 = 0; VAR_10 < VAR_2; VAR_10++ )
    {
        float VAR_11 = FUNC_9( VAR_6, &VAR_6 );
        char *VAR_12;
        if( FUNC_1( &VAR_12 , "%u" , VAR_11 ) == -1 )
        {
            VAR_7 = 1;
            break;
        }
        FUNC_5( VAR_1, VAR_12 );
        FUNC_2(VAR_12);
        if( FUNC_1( &VAR_12 , "band id=\"%u\"", VAR_10 ) == -1 )
        {
            VAR_7 = 1;
            break;
        }
        FUNC_6( VAR_1 , -2 , VAR_12 );
        FUNC_2( VAR_12 );
    }

    FUNC_2( VAR_5 );
    if( VAR_8 != (locale_t)0 )
    {
        FUNC_10 (VAR_9);
        FUNC_3 (VAR_8);
    }
    FUNC_0(VAR_3);
    return VAR_7 ? 0 : 1;
}
