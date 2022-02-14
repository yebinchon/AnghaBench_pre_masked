
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int fdc; int* fdv; } ;
typedef TYPE_1__ vlclua_dtable_t ;
typedef int lua_State ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( lua_State *VAR_0, unsigned VAR_1 )
{
    vlclua_dtable_t *VAR_2 = FUNC_1( VAR_0 );
    int VAR_3;

    if( VAR_1 < 3u )
        return;

    VAR_1 -= 3;
    if( VAR_1 >= VAR_2->fdc )
        return;

    VAR_3 = VAR_2->fdv[VAR_1];
    VAR_2->fdv[VAR_1] = -1;
    while( VAR_2->fdc > 0 && VAR_2->fdv[VAR_2->fdc - 1] == -1 )
        VAR_2->fdc--;


    for( unsigned VAR_4 = 0; VAR_4 < VAR_2->fdc; VAR_4++ )
        FUNC_0( VAR_2->fdv[VAR_4] != VAR_3 );



}
