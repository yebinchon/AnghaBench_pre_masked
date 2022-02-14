
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * zpool_config; int * zpool_old_config; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int nvlist_t ;



nvlist_t *
FUNC_0(zpool_handle_t *VAR_0, nvlist_t **VAR_1)
{
 if (VAR_1)
  *VAR_1 = VAR_0->zpool_old_config;
 return (VAR_0->zpool_config);
}
