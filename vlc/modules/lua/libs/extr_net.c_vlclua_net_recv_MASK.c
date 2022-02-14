
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,size_t,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_0 )
{
    int VAR_1 = FUNC_5( VAR_0, FUNC_0( VAR_0, 1 ) );
    size_t VAR_2 = (size_t)FUNC_1( VAR_0, 2, 1 );
    char VAR_3[VAR_2];

    ssize_t VAR_4 = (VAR_1 != -1) ? FUNC_4( VAR_1, VAR_3, VAR_2, 0 ) : -1;
    if( VAR_4 > 0 )
        FUNC_2( VAR_0, VAR_3, VAR_4 );
    else
        FUNC_3( VAR_0 );
    return 1;
}
