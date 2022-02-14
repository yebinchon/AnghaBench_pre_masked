
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int subpicture_t ;
struct TYPE_13__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_14__ {int * p_block; scalar_t__ i_spu; scalar_t__ i_rle_size; scalar_t__ i_spu_size; int i_pts; int buffer; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_15__ {int i_pts; } ;
typedef TYPE_3__ block_t ;


 int * FUNC_0 (TYPE_1__*) ;
 TYPE_3__* FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5( decoder_t *VAR_1, block_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_1->p_sys;
    block_t *VAR_4;
    subpicture_t *VAR_5;

    if( VAR_2 == ((void*)0) )
        return VAR_0;
    VAR_4 = FUNC_1( VAR_1, VAR_2 );

    if( ! VAR_4 )
    {
        return VAR_0;
    }


    VAR_3->i_spu = FUNC_2( VAR_4, VAR_3->buffer, 65536 );
    VAR_3->i_pts = VAR_4->i_pts;
    FUNC_3( VAR_4 );


    VAR_5 = FUNC_0( VAR_1 );


    VAR_3->i_spu_size = 0;
    VAR_3->i_rle_size = 0;
    VAR_3->i_spu = 0;
    VAR_3->p_block = ((void*)0);

    if( VAR_5 != ((void*)0) )
        FUNC_4( VAR_1, VAR_5 );
    return VAR_0;
}
