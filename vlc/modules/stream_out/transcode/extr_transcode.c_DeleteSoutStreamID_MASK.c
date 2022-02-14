
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct TYPE_6__ {TYPE_1__ fifo; } ;
typedef TYPE_2__ sout_stream_id_sys_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( sout_stream_id_sys_t *VAR_0 )
{
    if( VAR_0 )
    {
        FUNC_1(&VAR_0->fifo.lock);
        FUNC_0( VAR_0 );
    }
}
