
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int fdc; int* fdv; int interrupt; } ;
typedef TYPE_1__ vlclua_dtable_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

void FUNC_3( vlclua_dtable_t *VAR_0 )
{
    for( unsigned VAR_1 = 0; VAR_1 < VAR_0->fdc; VAR_1++ )
        if( VAR_0->fdv[VAR_1] != -1 )
            FUNC_1( VAR_0->fdv[VAR_1] );
    FUNC_0( VAR_0->fdv );
    FUNC_2(VAR_0->interrupt);
}
