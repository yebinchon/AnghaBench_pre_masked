
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_11__ {int p_ccs; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_12__ {int i_buffer; int* p_buffer; } ;
typedef TYPE_3__ block_t ;


 TYPE_3__* FUNC_0 (TYPE_1__*,int*,TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_3__*) ;

__attribute__((used)) static block_t *FUNC_2(void *VAR_0, bool *VAR_1, block_t *VAR_2)
{
    decoder_t *VAR_3 = VAR_0;
    decoder_sys_t *VAR_4 = VAR_3->p_sys;


    while (VAR_2->i_buffer > 5 && VAR_2->p_buffer[VAR_2->i_buffer-1] == 0x00 )
        VAR_2->i_buffer--;

    VAR_2 = FUNC_0( VAR_3, VAR_1, VAR_2 );
    if( VAR_2 )
        FUNC_1( VAR_4->p_ccs, VAR_2 );

    return VAR_2;
}
