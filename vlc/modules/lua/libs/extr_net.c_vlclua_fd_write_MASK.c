
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int,size_t*) ;
 scalar_t__ FUNC_2 (int *,int,size_t) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,char const*,size_t) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_0 )
{
    int VAR_1 = FUNC_5( VAR_0, FUNC_0( VAR_0, 1 ) );
    size_t VAR_2;
    const char *VAR_3 = FUNC_1( VAR_0, 2, &VAR_2 );

    VAR_2 = (size_t)FUNC_2( VAR_0, 3, VAR_2 );
    FUNC_3( VAR_0, (VAR_1 != -1) ? FUNC_4( VAR_1, VAR_3, VAR_2 ) : -1 );
    return 1;
}
