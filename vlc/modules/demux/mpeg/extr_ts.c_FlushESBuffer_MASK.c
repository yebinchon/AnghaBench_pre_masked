
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i_saved; int * p_data; int ** pp_last; scalar_t__ i_data_size; scalar_t__ i_gathered; } ;
struct TYPE_5__ {scalar_t__ p_proc; TYPE_1__ gather; } ;
typedef TYPE_2__ ts_stream_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2( ts_stream_t *VAR_0 )
{
    if( VAR_0->gather.p_data )
    {
        VAR_0->gather.i_gathered = VAR_0->gather.i_data_size = 0;
        FUNC_0( VAR_0->gather.p_data );
        VAR_0->gather.p_data = ((void*)0);
        VAR_0->gather.pp_last = &VAR_0->gather.p_data;
        VAR_0->gather.i_saved = 0;
    }
    if( VAR_0->p_proc )
        FUNC_1( VAR_0->p_proc );
}
