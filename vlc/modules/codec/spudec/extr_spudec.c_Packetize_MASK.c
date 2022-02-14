
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_13__ {int * p_block; scalar_t__ i_spu; scalar_t__ i_rle_size; scalar_t__ i_spu_size; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_14__ {int i_length; int i_pts; int i_dts; } ;
typedef TYPE_3__ block_t ;


 TYPE_3__* FUNC_0 (TYPE_1__*,TYPE_3__*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static block_t *FUNC_2( decoder_t *VAR_1, block_t **VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_1->p_sys;
    if( VAR_2 == ((void*)0) )
        return ((void*)0);
    block_t *VAR_4 = *VAR_2; *VAR_2 = ((void*)0);
    if( VAR_4 == ((void*)0) )
        return ((void*)0);

    block_t *VAR_5 = FUNC_0( VAR_1, VAR_4 );

    if( ! VAR_5 )
    {
        return ((void*)0);
    }

    VAR_5->i_dts = VAR_5->i_pts;
    VAR_5->i_length = VAR_0;


    VAR_3->i_spu_size = 0;
    VAR_3->i_rle_size = 0;
    VAR_3->i_spu = 0;
    VAR_3->p_block = ((void*)0);

    return FUNC_1( VAR_5 );
}
