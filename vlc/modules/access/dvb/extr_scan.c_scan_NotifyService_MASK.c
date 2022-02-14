
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p_cbdata; int (* pf_notify_service ) (TYPE_1__*,int ,TYPE_2__*,int ,int) ;} ;
typedef TYPE_1__ scan_t ;
struct TYPE_8__ {int stickyref; int type; } ;
typedef TYPE_2__ scan_service_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_2( scan_t *VAR_0, scan_service_t *VAR_1, bool VAR_2 )
{
    if( !VAR_0->pf_notify_service || !FUNC_0( VAR_1->type ) )
        return;
    VAR_1->stickyref = VAR_0->pf_notify_service( VAR_0, VAR_0->p_cbdata,
                                                      VAR_1, VAR_1->stickyref,
                                                      VAR_2 );
}
