
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_13__ {int i_nb_streams; TYPE_1__** pp_streams; } ;
typedef TYPE_2__ sout_stream_sys_t ;
struct TYPE_14__ {scalar_t__* pp_ids; } ;
typedef TYPE_3__ sout_stream_id_sys_t ;
struct TYPE_15__ {struct TYPE_15__* p_next; } ;
typedef TYPE_4__ block_t ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,TYPE_4__*) ;

__attribute__((used)) static int FUNC_3( sout_stream_t *VAR_1, void *VAR_2, block_t *VAR_3 )
{
    sout_stream_sys_t *VAR_4 = VAR_1->p_sys;
    sout_stream_id_sys_t *VAR_5 = (sout_stream_id_sys_t *)VAR_2;
    sout_stream_t *VAR_6;
    int VAR_7;


    while( VAR_3 )
    {
        block_t *VAR_8 = VAR_3->p_next;

        VAR_3->p_next = ((void*)0);

        for( VAR_7 = 0; VAR_7 < VAR_4->i_nb_streams - 1; VAR_7++ )
        {
            VAR_6 = VAR_4->pp_streams[VAR_7];

            if( VAR_5->pp_ids[VAR_7] )
            {
                block_t *VAR_9 = FUNC_0( VAR_3 );

                if( VAR_9 )
                    FUNC_2( VAR_6, VAR_5->pp_ids[VAR_7], VAR_9 );
            }
        }

        if( VAR_7 < VAR_4->i_nb_streams && VAR_5->pp_ids[VAR_7] )
        {
            VAR_6 = VAR_4->pp_streams[VAR_7];
            FUNC_2( VAR_6, VAR_5->pp_ids[VAR_7], VAR_3 );
        }
        else
        {
            FUNC_1( VAR_3 );
        }

        VAR_3 = VAR_8;
    }
    return VAR_0;
}
