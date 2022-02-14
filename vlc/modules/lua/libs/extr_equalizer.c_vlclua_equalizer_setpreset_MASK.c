
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int audio_output_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int) ;
 int * VAR_1 ;
 int * FUNC_3 (char*,char*) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_2 )
{
    int VAR_3 = FUNC_2( VAR_2, 1 );
    if( VAR_3 >= VAR_0 || VAR_3 < 0 )
        return 0;

    audio_output_t *VAR_4 = FUNC_6(VAR_2);
    if( VAR_4 == ((void*)0) )
        return 0;

    int VAR_5 = 0;
    char *VAR_6 = FUNC_4( VAR_4, "audio-filter" );
    if( VAR_6 != ((void*)0) && FUNC_3 ( VAR_6, "equalizer" ) != ((void*)0) )
    {
        FUNC_5( VAR_4 , "equalizer-preset" , VAR_1[VAR_3] );
        VAR_5 = 1;
    }
    FUNC_1( VAR_6 );
    FUNC_0(VAR_4);
    return VAR_5;
}
