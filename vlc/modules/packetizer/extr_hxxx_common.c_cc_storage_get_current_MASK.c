
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int i_reorder_depth; int i_708_channels; int i_608_channels; } ;
typedef TYPE_1__ decoder_cc_desc_t ;
struct TYPE_12__ {scalar_t__ b_reorder; int i_708channels; int i_608channels; int i_data; int p_data; } ;
struct TYPE_10__ {int i_flags; TYPE_7__ current; int i_dts; int i_pts; } ;
typedef TYPE_2__ cc_storage_t ;
struct TYPE_11__ {int i_flags; int i_pts; int i_dts; int p_buffer; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ,int ,int ) ;

block_t * FUNC_3( cc_storage_t *VAR_1, decoder_cc_desc_t *VAR_2 )
{
    block_t *VAR_3;

    if( !VAR_1->current.b_reorder && VAR_1->current.i_data <= 0 )
        return ((void*)0);

    VAR_3 = FUNC_0( VAR_1->current.i_data);
    if( VAR_3 )
    {
        FUNC_2( VAR_3->p_buffer, VAR_1->current.p_data, VAR_1->current.i_data );
        VAR_3->i_dts =
        VAR_3->i_pts = VAR_1->current.b_reorder ? VAR_1->i_pts : VAR_1->i_dts;
        VAR_3->i_flags = VAR_1->i_flags & VAR_0;

        VAR_2->i_608_channels = VAR_1->current.i_608channels;
        VAR_2->i_708_channels = VAR_1->current.i_708channels;
        VAR_2->i_reorder_depth = VAR_1->current.b_reorder ? 4 : -1;
    }
    FUNC_1( &VAR_1->current );

    return VAR_3;
}
