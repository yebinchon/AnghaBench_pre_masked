
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ i_data_size; scalar_t__ i_gathered; TYPE_5__* p_data; TYPE_5__** pp_last; } ;
struct TYPE_16__ {TYPE_2__ gather; } ;
typedef TYPE_3__ ts_stream_t ;
struct TYPE_14__ {TYPE_3__* p_stream; } ;
struct TYPE_17__ {TYPE_1__ u; } ;
typedef TYPE_4__ ts_pid_t ;
typedef int demux_t ;
struct TYPE_18__ {scalar_t__ i_buffer; } ;
typedef TYPE_5__ block_t ;


 int FUNC_0 (int *,TYPE_4__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__***,TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static bool FUNC_4( demux_t *VAR_0, ts_pid_t *VAR_1, block_t *VAR_2, bool VAR_3 )
{
    bool VAR_4 = 0;
    ts_stream_t *VAR_5 = VAR_1->u.p_stream;

    if ( VAR_3 && VAR_5->gather.p_data )
    {
        block_t *VAR_6 = VAR_5->gather.p_data;

        VAR_5->gather.p_data = ((void*)0);
        VAR_5->gather.i_data_size = 0;
        VAR_5->gather.i_gathered = 0;
        VAR_5->gather.pp_last = &VAR_5->gather.p_data;
        FUNC_0( VAR_0, VAR_1, VAR_6 );
        VAR_4 = 1;
    }

    if( VAR_2 == ((void*)0) )
        return VAR_4;

    if( !VAR_3 && VAR_5->gather.p_data == ((void*)0) )
    {

        FUNC_3( VAR_2 );
        return VAR_4;
    }

    FUNC_2( &VAR_5->gather.pp_last, VAR_2 );
    VAR_5->gather.i_gathered += VAR_2->i_buffer;

    if( VAR_5->gather.i_data_size > 0 &&
        VAR_5->gather.i_gathered >= VAR_5->gather.i_data_size )
    {

        FUNC_1(VAR_5->gather.p_data);
        return FUNC_4( VAR_0, VAR_1, ((void*)0), 1 );
    }

    return VAR_4;
}
