
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_3__ {int * zpool_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;

int
FUNC_1(zfs_handle_t *VAR_1, int *VAR_2)
{
 zpool_handle_t *VAR_3 = VAR_1->zpool_hdl;

 if (VAR_3 == ((void*)0))
  return (-1);

 *VAR_2 = FUNC_0(VAR_3,
     VAR_0, ((void*)0));
 return (0);
}
