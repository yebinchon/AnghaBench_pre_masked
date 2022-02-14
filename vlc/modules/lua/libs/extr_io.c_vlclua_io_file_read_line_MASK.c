
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int lua_State ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char**,size_t*,int *) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3( lua_State *VAR_0, FILE* VAR_1 )
{
    char* VAR_2 = ((void*)0);
    size_t VAR_3;
    ssize_t VAR_4 = FUNC_1( &VAR_2, &VAR_3, VAR_1 );
    if ( VAR_4 == -1 )
        return 0;
    if( VAR_2[VAR_4 - 1] == '\n' )
        VAR_2[--VAR_4] = 0;
    FUNC_2( VAR_0, VAR_2 );
    FUNC_0( VAR_2 );
    return 1;
}
