
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t zc_nvlist_dst_size; scalar_t__ zc_nvlist_dst; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int libzfs_handle_t ;


 scalar_t__ FUNC_0 (int *,size_t) ;

int
FUNC_1(libzfs_handle_t *VAR_0, zfs_cmd_t *VAR_1, size_t VAR_2)
{
 if (VAR_2 == 0)
  VAR_2 = 256 * 1024;
 VAR_1->zc_nvlist_dst_size = VAR_2;
 VAR_1->zc_nvlist_dst =
     (uint64_t)(uintptr_t)FUNC_0(VAR_0, VAR_1->zc_nvlist_dst_size);
 if (VAR_1->zc_nvlist_dst == 0)
  return (-1);

 return (0);
}
