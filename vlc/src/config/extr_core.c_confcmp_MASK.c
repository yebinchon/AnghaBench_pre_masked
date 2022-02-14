
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int psz_name; } ;
typedef TYPE_1__ module_config_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1 (const void *VAR_0, const void *VAR_1)
{
    const module_config_t *const *VAR_2 = VAR_0, *const *VAR_3 = VAR_1;

    return FUNC_0 ((*VAR_2)->psz_name, (*VAR_3)->psz_name);
}
