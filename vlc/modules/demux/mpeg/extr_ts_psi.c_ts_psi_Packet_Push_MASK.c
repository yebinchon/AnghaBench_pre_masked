
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_2__* p_pmt; TYPE_1__* p_pat; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_3__ u; } ;
typedef TYPE_4__ ts_pid_t ;
struct TYPE_7__ {int handle; } ;
struct TYPE_6__ {int handle; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1( ts_pid_t *VAR_2, const uint8_t *VAR_3 )
{
    if( VAR_2->type == VAR_0 )
        FUNC_0( VAR_2->u.p_pat->handle, (uint8_t *) VAR_3 );
    else if( VAR_2->type == VAR_1 )
        FUNC_0( VAR_2->u.p_pmt->handle, (uint8_t *) VAR_3 );
}
