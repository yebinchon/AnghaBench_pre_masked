
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int fdc; int* fdv; } ;
typedef TYPE_1__ vlclua_dtable_t ;
typedef int lua_State ;


 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1( lua_State *VAR_0, unsigned VAR_1 )
{
    vlclua_dtable_t *VAR_2 = FUNC_0( VAR_0 );

    if( VAR_1 < 3u )
        return VAR_1;
    VAR_1 -= 3;
    return (VAR_1 < VAR_2->fdc) ? VAR_2->fdv[VAR_1] : -1;
}
