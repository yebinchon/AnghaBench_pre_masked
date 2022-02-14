
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int i_file_size; int i_cmd_w; TYPE_4__* p_cmd; int p_filew; } ;
typedef TYPE_3__ ts_storage_t ;
struct TYPE_12__ {int i_offset; TYPE_5__* p_block; } ;
struct TYPE_13__ {TYPE_1__ send; } ;
struct TYPE_15__ {scalar_t__ i_type; TYPE_2__ u; } ;
typedef TYPE_4__ ts_cmd_t ;
struct TYPE_16__ {int i_buffer; struct TYPE_16__* p_buffer; } ;
typedef TYPE_5__ block_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__ const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,int,int,int ) ;

__attribute__((used)) static void FUNC_6( ts_storage_t *VAR_1, const ts_cmd_t *VAR_2, bool VAR_3 )
{
    ts_cmd_t VAR_4 = *VAR_2;

    FUNC_1( !FUNC_0( VAR_1, VAR_2 ) );

    if( VAR_4.i_type == VAR_0 )
    {
        block_t *VAR_5 = VAR_4.u.send.p_block;

        VAR_4.u.send.p_block = ((void*)0);
        VAR_4.u.send.i_offset = FUNC_4( VAR_1->p_filew );

        if( FUNC_5( VAR_5, sizeof(*VAR_5), 1, VAR_1->p_filew ) != 1 )
        {
            FUNC_2( VAR_5 );
            return;
        }
        VAR_1->i_file_size += sizeof(*VAR_5);
        if( VAR_5->i_buffer > 0 )
        {
            if( FUNC_5( VAR_5->p_buffer, VAR_5->i_buffer, 1, VAR_1->p_filew ) != 1 )
            {
                FUNC_2( VAR_5 );
                return;
            }
        }
        VAR_1->i_file_size += VAR_5->i_buffer;
        FUNC_2( VAR_5 );

        if( VAR_3 )
            FUNC_3( VAR_1->p_filew );
    }
    VAR_1->p_cmd[VAR_1->i_cmd_w++] = VAR_4;
}
