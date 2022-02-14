
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int p_filer; int i_cmd_r; TYPE_4__* p_cmd; } ;
typedef TYPE_3__ ts_storage_t ;
struct TYPE_10__ {TYPE_5__* p_block; int i_offset; } ;
struct TYPE_11__ {TYPE_1__ send; } ;
struct TYPE_13__ {scalar_t__ i_type; TYPE_2__ u; } ;
typedef TYPE_4__ ts_cmd_t ;
struct TYPE_14__ {int i_buffer; struct TYPE_14__* p_buffer; int i_nb_samples; int i_length; int i_flags; int i_pts; int i_dts; } ;
typedef TYPE_5__ block_t ;
typedef int block ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int,int,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5( ts_storage_t *VAR_2, ts_cmd_t *VAR_3, bool VAR_4 )
{
    FUNC_1( !FUNC_0( VAR_2 ) );

    *VAR_3 = VAR_2->p_cmd[VAR_2->i_cmd_r++];
    if( VAR_3->i_type == VAR_0 )
    {
        block_t VAR_5;

        if( !VAR_4 &&
            !FUNC_4( VAR_2->p_filer, VAR_3->u.send.i_offset, VAR_1 ) &&
            FUNC_3( &VAR_5, sizeof(VAR_5), 1, VAR_2->p_filer ) == 1 )
        {
            block_t *VAR_6 = FUNC_2( VAR_5.i_buffer );
            if( VAR_6 )
            {
                VAR_6->i_dts = VAR_5.i_dts;
                VAR_6->i_pts = VAR_5.i_pts;
                VAR_6->i_flags = VAR_5.i_flags;
                VAR_6->i_length = VAR_5.i_length;
                VAR_6->i_nb_samples = VAR_5.i_nb_samples;
                VAR_6->i_buffer = FUNC_3( VAR_6->p_buffer, 1, VAR_5.i_buffer, VAR_2->p_filer );
            }
            VAR_3->u.send.p_block = VAR_6;
        }
        else
        {

            VAR_3->u.send.p_block = FUNC_2( 1 );
        }
    }
}
