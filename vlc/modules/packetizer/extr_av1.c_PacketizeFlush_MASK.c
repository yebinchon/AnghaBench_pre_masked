
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_8__ {int b_has_visible_frame; void* pts; void* dts; } ;
struct TYPE_7__ {int p_chain; } ;
struct TYPE_10__ {int i_next_block_flags; scalar_t__ i_seen; TYPE_2__ tu; TYPE_1__ obus; int * p_sequence_header_block; int * p_sequence_header; } ;
typedef TYPE_4__ av1_sys_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 void* VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(decoder_t *VAR_3)
{
    av1_sys_t *VAR_4 = VAR_3->p_sys;

    FUNC_3(FUNC_2(VAR_3, 0));

    if(VAR_4->p_sequence_header)
    {
        FUNC_0(VAR_4->p_sequence_header);
        VAR_4->p_sequence_header = ((void*)0);
    }
    if(VAR_4->p_sequence_header_block)
    {
        FUNC_4(VAR_4->p_sequence_header_block);
        VAR_4->p_sequence_header_block = ((void*)0);
    }

    FUNC_3(VAR_4->obus.p_chain);
    FUNC_1(VAR_2);

    VAR_4->tu.dts = VAR_1;
    VAR_4->tu.pts = VAR_1;
    VAR_4->tu.b_has_visible_frame = 0;
    VAR_4->i_seen = 0;
    VAR_4->i_next_block_flags = VAR_0;
}
