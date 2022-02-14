
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * zpool_props; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int nvlist_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

int
FUNC_2(zpool_handle_t *VAR_0)
{
 nvlist_t *VAR_1;

 VAR_1 = VAR_0->zpool_props;

 if (FUNC_1(VAR_0) != 0)
  return (-1);

 FUNC_0(VAR_1);
 return (0);
}
