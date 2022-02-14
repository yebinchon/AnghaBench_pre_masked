
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zc_nvlist_dst; scalar_t__ zc_nvlist_src; scalar_t__ zc_nvlist_conf; } ;
typedef TYPE_1__ zfs_cmd_t ;


 int FUNC_0 (void*) ;

void
FUNC_1(zfs_cmd_t *VAR_0)
{
 FUNC_0((void *)(uintptr_t)VAR_0->zc_nvlist_conf);
 FUNC_0((void *)(uintptr_t)VAR_0->zc_nvlist_src);
 FUNC_0((void *)(uintptr_t)VAR_0->zc_nvlist_dst);
 VAR_0->zc_nvlist_conf = 0;
 VAR_0->zc_nvlist_src = 0;
 VAR_0->zc_nvlist_dst = 0;
}
