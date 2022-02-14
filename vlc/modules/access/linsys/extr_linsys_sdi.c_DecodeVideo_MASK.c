
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct block_extension_t {int b_progressive; int i_nb_fields; int b_top_field_first; scalar_t__ i_aspect; } ;
struct TYPE_5__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_6__ {int i_block_size; TYPE_3__* p_current_picture; int p_es_video; int i_next_date; scalar_t__ i_aspect; scalar_t__ i_forced_aspect; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_7__ {int i_pts; int i_dts; int * p_buffer; } ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (int *,struct block_extension_t*,int) ;

__attribute__((used)) static void FUNC_2( demux_t *VAR_0 )
{
    demux_sys_t *VAR_1 = VAR_0->p_sys;
    struct block_extension_t VAR_2;


    VAR_2.b_progressive = 0;
    VAR_2.i_nb_fields = 2;
    VAR_2.b_top_field_first = 1;
    VAR_2.i_aspect = VAR_1->i_forced_aspect ? VAR_1->i_forced_aspect :
                   VAR_1->i_aspect;

    FUNC_1( &VAR_1->p_current_picture->p_buffer[VAR_1->i_block_size
                                     - sizeof(struct block_extension_t)],
            &VAR_2, sizeof(struct block_extension_t) );

    VAR_1->p_current_picture->i_dts = VAR_1->p_current_picture->i_pts
        = VAR_1->i_next_date;
    FUNC_0( VAR_0->out, VAR_1->p_es_video, VAR_1->p_current_picture );
}
