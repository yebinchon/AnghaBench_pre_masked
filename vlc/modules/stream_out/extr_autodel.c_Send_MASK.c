
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_15__ {int p_next; scalar_t__ p_sys; } ;
typedef TYPE_3__ sout_stream_t ;
struct TYPE_16__ {int i_es_num; TYPE_2__** pp_es; } ;
typedef TYPE_4__ sout_stream_sys_t ;
struct TYPE_19__ {int i_id; } ;
struct TYPE_17__ {int b_error; int * id; TYPE_8__ fmt; int i_last; } ;
typedef TYPE_5__ sout_stream_id_sys_t ;
struct TYPE_18__ {int i_dts; } ;
typedef TYPE_6__ block_t ;
struct TYPE_13__ {scalar_t__ i_cat; } ;
struct TYPE_14__ {scalar_t__ i_last; int * id; TYPE_1__ fmt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_3__*,char*,int ) ;
 int * FUNC_2 (int ,TYPE_8__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,TYPE_6__*) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6( sout_stream_t *VAR_3, void *VAR_4, block_t *VAR_5 )
{
    sout_stream_sys_t *VAR_6 = (sout_stream_sys_t *)VAR_3->p_sys;
    sout_stream_id_sys_t *VAR_7 = (sout_stream_id_sys_t *)VAR_4;
    vlc_tick_t VAR_8 = FUNC_5();
    int VAR_9;

    VAR_7->i_last = VAR_5->i_dts;
    if ( !VAR_7->id && !VAR_7->b_error )
    {
        VAR_7->id = FUNC_2( VAR_3->p_next, &VAR_7->fmt );
        if ( VAR_7->id == ((void*)0) )
        {
            VAR_7->b_error = 1;
            FUNC_1( VAR_3, "couldn't create chain for id %d",
                     VAR_7->fmt.i_id );
        }
    }

    if ( !VAR_7->b_error )
        FUNC_4( VAR_3->p_next, VAR_7->id, VAR_5 );
    else
        FUNC_0( VAR_5 );

    for ( VAR_9 = 0; VAR_9 < VAR_6->i_es_num; VAR_9++ )
    {
        if ( VAR_6->pp_es[VAR_9]->id != ((void*)0)
              && (VAR_6->pp_es[VAR_9]->fmt.i_cat == VAR_1
                   || VAR_6->pp_es[VAR_9]->fmt.i_cat == VAR_0)
              && VAR_6->pp_es[VAR_9]->i_last < VAR_8 )
        {
            FUNC_3( VAR_3->p_next, VAR_6->pp_es[VAR_9]->id );
            VAR_6->pp_es[VAR_9]->id = ((void*)0);
        }
    }

    return VAR_2;
}
