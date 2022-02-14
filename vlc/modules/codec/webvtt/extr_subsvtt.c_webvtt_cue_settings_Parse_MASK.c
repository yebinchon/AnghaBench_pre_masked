
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int webvtt_cue_settings_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*,int) ;
 char* FUNC_3 (char*,char*,char**) ;
 int FUNC_4 (int *,char*,char const*) ;

__attribute__((used)) static void FUNC_5( webvtt_cue_settings_t *VAR_0,
                                       char *VAR_1 )
{
    char *VAR_2;
    char *VAR_3;
    do
    {
        VAR_3 = FUNC_3( VAR_1, " ", &VAR_2 );
        VAR_1 = ((void*)0);
        if( VAR_3 )
        {
            const char *VAR_4 = FUNC_1( VAR_3, ':' );
            if( VAR_4 && VAR_4[1] != 0 && VAR_4 != VAR_3 )
            {
                char *VAR_5 = FUNC_2( VAR_3, VAR_4 - VAR_3 );
                if( VAR_5 )
                {
                    FUNC_4( VAR_0, VAR_5, VAR_4 + 1 );
                    FUNC_0( VAR_5 );
                }
            }
        }
    } while( VAR_3 );
}
