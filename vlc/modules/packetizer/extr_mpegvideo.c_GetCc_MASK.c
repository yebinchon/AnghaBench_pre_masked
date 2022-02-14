
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_14__ {scalar_t__ i_data; scalar_t__ b_reorder; int i_708channels; int i_608channels; int p_data; } ;
struct TYPE_11__ {int i_cc_flags; TYPE_5__ cc; int i_cc_dts; int i_cc_pts; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_12__ {int i_reorder_depth; int i_708_channels; int i_608_channels; } ;
typedef TYPE_3__ decoder_cc_desc_t ;
struct TYPE_13__ {int i_flags; int i_pts; int i_dts; int p_buffer; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static block_t *FUNC_3( decoder_t *VAR_1, decoder_cc_desc_t *VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_1->p_sys;
    block_t *VAR_4;

    if( !VAR_3->cc.b_reorder && VAR_3->cc.i_data <= 0 )
        return ((void*)0);

    VAR_4 = FUNC_0( VAR_3->cc.i_data );
    if( VAR_4 )
    {
        FUNC_2( VAR_4->p_buffer, VAR_3->cc.p_data, VAR_3->cc.i_data );
        VAR_4->i_dts =
        VAR_4->i_pts = VAR_3->cc.b_reorder ? VAR_3->i_cc_pts : VAR_3->i_cc_dts;
        VAR_4->i_flags = VAR_3->i_cc_flags & VAR_0;

        VAR_2->i_608_channels = VAR_3->cc.i_608channels;
        VAR_2->i_708_channels = VAR_3->cc.i_708channels;
        VAR_2->i_reorder_depth = VAR_3->cc.b_reorder ? 0 : -1;
    }
    FUNC_1( &VAR_3->cc );
    return VAR_4;
}
