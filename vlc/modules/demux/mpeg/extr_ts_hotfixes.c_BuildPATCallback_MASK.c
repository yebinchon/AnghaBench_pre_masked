
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* p_pat; } ;
struct TYPE_9__ {TYPE_2__ u; } ;
typedef TYPE_3__ ts_pid_t ;
struct TYPE_10__ {int p_buffer; } ;
typedef TYPE_4__ block_t ;
struct TYPE_7__ {int handle; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2( void *VAR_0, block_t *VAR_1 )
{
    ts_pid_t *VAR_2 = (ts_pid_t *) VAR_0;
    FUNC_1( VAR_2->u.p_pat->handle, VAR_1->p_buffer );
    FUNC_0( VAR_1 );
}
