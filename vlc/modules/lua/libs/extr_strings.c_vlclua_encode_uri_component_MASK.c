
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_0 )
{
    int VAR_1 = FUNC_2( VAR_0 );
    int VAR_2;
    for( VAR_2 = 1; VAR_2 <= VAR_1; VAR_2++ )
    {
        const char *VAR_3 = FUNC_1( VAR_0, 1 );
        char *VAR_4 = FUNC_5( VAR_3 );
        FUNC_4( VAR_0,1 );
        FUNC_3( VAR_0, VAR_4 );
        FUNC_0( VAR_4 );
    }
    return VAR_1;
}
