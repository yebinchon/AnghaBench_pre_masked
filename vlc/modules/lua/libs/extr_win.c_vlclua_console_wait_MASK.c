
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4( lua_State *VAR_1 )
{
    int VAR_2 = (int)FUNC_2( VAR_1, 1, 0 );
    DWORD VAR_3 = FUNC_1( FUNC_0( VAR_1 ), VAR_2 );
    FUNC_3( VAR_1, VAR_3 == VAR_0 );
    return 1;
}
