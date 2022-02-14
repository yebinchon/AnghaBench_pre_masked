
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_cat; } ;
typedef TYPE_1__ es_format_t ;
struct TYPE_7__ {int b_frame_drop_allowed; int fmt_out; int fmt_in; int * p_module; int * pf_flush; int * pf_packetize; int * pf_get_cc; int * pf_decode; scalar_t__ i_extra_picture_buffers; } ;
typedef TYPE_2__ decoder_t ;


 int FUNC_0 (int *,TYPE_1__ const*) ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2( decoder_t *VAR_0, const es_format_t *restrict VAR_1 )
{
    VAR_0->i_extra_picture_buffers = 0;
    VAR_0->b_frame_drop_allowed = 0;

    VAR_0->pf_decode = ((void*)0);
    VAR_0->pf_get_cc = ((void*)0);
    VAR_0->pf_packetize = ((void*)0);
    VAR_0->pf_flush = ((void*)0);
    VAR_0->p_module = ((void*)0);

    FUNC_0( &VAR_0->fmt_in, VAR_1 );
    FUNC_1( &VAR_0->fmt_out, VAR_1->i_cat, 0 );
}
