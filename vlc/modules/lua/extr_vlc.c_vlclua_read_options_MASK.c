
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int lua_State ;


 int FUNC_0 (int,char**,char*) ;
 int FUNC_1 (int *,int,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *,char*) ;
 char* FUNC_10 (int ) ;

void FUNC_11( vlc_object_t *VAR_0, lua_State *VAR_1,
                            int *VAR_2, char ***VAR_3 )
{
    FUNC_1( VAR_1, -1, "options" );
    if( FUNC_3( VAR_1, -1 ) )
    {
        FUNC_6( VAR_1 );
        while( FUNC_4( VAR_1, -2 ) )
        {
            if( FUNC_2( VAR_1, -1 ) )
            {
                char *VAR_4 = FUNC_10( FUNC_7( VAR_1, -1 ) );
                FUNC_8( VAR_0, "Option: %s", VAR_4 );
                FUNC_0( *VAR_2, *VAR_3, VAR_4 );
            }
            else
            {
                FUNC_9( VAR_0, "Option should be a string" );
            }
            FUNC_5( VAR_1, 1 );
        }
    }
    FUNC_5( VAR_1, 1 );
}
