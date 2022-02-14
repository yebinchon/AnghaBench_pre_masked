
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int audio_output_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (char*,char*) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_0 )
{
    audio_output_t *VAR_1 = FUNC_6(VAR_0);
    if( VAR_1 == ((void*)0) )
        return 0;

    char *VAR_2 = FUNC_4( VAR_1, "audio-filter" );
    if( !VAR_2 || FUNC_3 ( VAR_2, "equalizer" ) == ((void*)0) )
    {
        FUNC_1( VAR_2 );
        FUNC_0(VAR_1);
        return 0;
    }
    FUNC_1( VAR_2 );

    FUNC_5( VAR_1, "equalizer-preamp", FUNC_2( VAR_0, 1 ) );
    FUNC_0(VAR_1);
    return 1;
}
