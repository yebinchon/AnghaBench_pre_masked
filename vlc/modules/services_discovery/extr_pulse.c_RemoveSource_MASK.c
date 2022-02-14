
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_5__ {int root; } ;
typedef TYPE_2__ services_discovery_sys_t ;


 int FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,int *,int ) ;
 void** FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_3 (services_discovery_t *VAR_1, uint32_t VAR_2)
{
    services_discovery_sys_t *VAR_3 = VAR_1->p_sys;

    void **VAR_4 = FUNC_2 (&VAR_2, &VAR_3->root, VAR_0);
    if (VAR_4 == ((void*)0))
        return;

    struct device *VAR_5 = *VAR_4;
    FUNC_1 (VAR_5, &VAR_3->root, VAR_0);
    FUNC_0 (VAR_5);
}
