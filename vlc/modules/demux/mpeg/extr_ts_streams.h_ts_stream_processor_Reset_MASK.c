
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* pf_reset ) (TYPE_1__*) ;} ;
typedef TYPE_1__ ts_stream_processor_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1( ts_stream_processor_t *VAR_0 )
{
    if( VAR_0 && VAR_0->pf_reset )
        VAR_0->pf_reset( VAR_0 );
}
