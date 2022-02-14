
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,char const*) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (char const*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8( lua_State *VAR_1 )
{
    int VAR_2 = FUNC_0( VAR_1, 1 );
    const char *VAR_3 = FUNC_1( VAR_1, 2 );
    int VAR_4 = FUNC_4( VAR_3 );
    int VAR_5 = (int)FUNC_3( VAR_1, 3, VAR_0 );
    if( !VAR_4 )
        return FUNC_2( VAR_1, "\"%s\" is not a valid slider type.",
                           VAR_3 );

    vout_thread_t *VAR_6 = FUNC_5(VAR_1);
    if( VAR_6 )
    {
        FUNC_6( VAR_6, VAR_5, VAR_2, VAR_4 );
        FUNC_7( VAR_6 );
    }
    return 0;
}
