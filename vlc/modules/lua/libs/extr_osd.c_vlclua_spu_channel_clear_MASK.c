
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int ssize_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5( lua_State *VAR_0 )
{
    ssize_t VAR_1 = FUNC_0( VAR_0, 1 );
    vout_thread_t *VAR_2 = FUNC_2(VAR_0);
    if( !VAR_2 )
        return FUNC_1( VAR_0, "Unable to find vout." );

    FUNC_4( VAR_2, VAR_1 );
    FUNC_3(VAR_2);
    return 0;
}
