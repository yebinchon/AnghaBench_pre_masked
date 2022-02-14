
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_nit; int p_sdt; int p_pat; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ b_use_nit; TYPE_1__ local; } ;
typedef TYPE_2__ scan_session_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned FUNC_0( const scan_session_t *VAR_1 )
{
    unsigned VAR_2 = 0;
    if( !VAR_1->local.p_pat )
    {
        VAR_2 = 500;
    }
    else if( !VAR_1->local.p_sdt )
    {
        VAR_2 = 2*1000;
    }
    else if( !VAR_1->local.p_nit && VAR_1->b_use_nit )
    {
        if( VAR_1->type == VAR_0 )
            VAR_2 = 6000;
        else
            VAR_2 = 5000;
    }

    return VAR_2 * 2 * 1000;
}
