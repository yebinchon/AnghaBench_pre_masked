
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* p_prev_s16_buff; struct TYPE_3__* peaks; } ;
typedef TYPE_1__ spectrometer_data ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( void *VAR_0 )
{
    spectrometer_data *VAR_1 = VAR_0;

    if( VAR_1 != ((void*)0) )
    {
        FUNC_0( VAR_1->peaks );
        FUNC_0( VAR_1->p_prev_s16_buff );
        FUNC_0( VAR_1 );
    }
}
