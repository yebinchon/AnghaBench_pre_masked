
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* p_pat; } ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ i_pid; TYPE_2__ u; } ;
typedef TYPE_3__ ts_pid_t ;
struct TYPE_5__ {int handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,void*) ;
 scalar_t__ FUNC_1 (int) ;

bool FUNC_2( ts_pid_t *VAR_3, void *VAR_4 )
{
    if( FUNC_1(VAR_3->type != VAR_2 || VAR_3->i_pid != VAR_1) )
        return 0;
    return FUNC_0( VAR_3->u.p_pat->handle, VAR_0, VAR_4 );
}
