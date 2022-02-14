
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* p_si; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_3__ ts_pid_t ;
struct TYPE_5__ {int handle; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3( ts_pid_t *VAR_1, const uint8_t *VAR_2 )
{
    if( FUNC_2(VAR_1->type == VAR_0) &&
        FUNC_0( VAR_1->u.p_si->handle ) )
        FUNC_1( VAR_1->u.p_si->handle, (uint8_t *) VAR_2 );
}
