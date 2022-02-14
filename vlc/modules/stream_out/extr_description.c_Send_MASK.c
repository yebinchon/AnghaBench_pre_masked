
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_stream_t ;
struct TYPE_7__ {scalar_t__ i_stream_start; TYPE_1__* data; } ;
typedef TYPE_3__ sout_stream_sys_t ;
typedef int block_t ;
struct TYPE_5__ {int sem; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5( sout_stream_t *VAR_1, void *VAR_2, block_t *VAR_3 )
{
    FUNC_1(VAR_2);
    sout_stream_sys_t *VAR_4 = VAR_1->p_sys;

    FUNC_2( VAR_3 );

    if( VAR_4->i_stream_start + FUNC_0(1500) < FUNC_4() )
        FUNC_3(VAR_4->data->sem);

    return VAR_0;
}
