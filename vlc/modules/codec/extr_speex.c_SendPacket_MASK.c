
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_10__ {TYPE_1__* p_header; int end_date; } ;
typedef TYPE_3__ decoder_sys_t ;
struct TYPE_11__ {scalar_t__ i_pts; scalar_t__ i_length; scalar_t__ i_dts; } ;
typedef TYPE_4__ block_t ;
struct TYPE_8__ {int frame_size; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;

__attribute__((used)) static block_t *FUNC_2( decoder_t *VAR_0, block_t *VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_0->p_sys;


    VAR_1->i_dts = VAR_1->i_pts = FUNC_0( &VAR_2->end_date );

    VAR_1->i_length =
        FUNC_1( &VAR_2->end_date,
                            VAR_2->p_header->frame_size ) -
        VAR_1->i_pts;

    return VAR_1;
}
