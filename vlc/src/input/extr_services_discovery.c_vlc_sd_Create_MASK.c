
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct services_discovery_owner_t {int dummy; } ;
struct TYPE_7__ {int * p_module; int psz_name; struct services_discovery_owner_t owner; int * description; int p_cfg; } ;
typedef TYPE_1__ services_discovery_t ;


 int FUNC_0 (int *,int *,char const*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (TYPE_1__*,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int *,int,char*) ;
 int FUNC_6 (TYPE_1__*) ;

services_discovery_t *FUNC_7(vlc_object_t *VAR_0, const char *VAR_1,
    const struct services_discovery_owner_t *restrict VAR_2)
{
    services_discovery_t *VAR_3 = FUNC_5(VAR_0, sizeof (*VAR_3),
                                                 "services discovery");
    if (FUNC_4(VAR_3 == ((void*)0)))
        return ((void*)0);

    FUNC_1(FUNC_0(&VAR_3->psz_name, &VAR_3->p_cfg, VAR_1));
    VAR_3->description = ((void*)0);
    VAR_3->owner = *VAR_2;

    VAR_3->p_module = FUNC_2(VAR_3, "services_discovery",
                               VAR_3->psz_name, 1);
    if (VAR_3->p_module == ((void*)0))
    {
        FUNC_3(VAR_3, "no suitable services discovery module");
        FUNC_6(VAR_3);
        VAR_3 = ((void*)0);
    }

    return VAR_3;
}
