
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int lua_State ;


 int VAR_0 ;
 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*,char const*) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_1 )
{
    const char *VAR_2 = FUNC_0( VAR_1, 1 );
    int VAR_3 = FUNC_3( VAR_2 );
    int VAR_4 = (int)FUNC_2( VAR_1, 2, VAR_0 );
    if( !VAR_3 )
        return FUNC_1( VAR_1, "\"%s\" is not a valid osd icon.", VAR_2 );

    vout_thread_t *VAR_5 = FUNC_4(VAR_1);
    if( VAR_5 )
    {
        FUNC_5( VAR_5, VAR_4, VAR_3 );
        FUNC_6( VAR_5 );
    }
    return 0;
}
