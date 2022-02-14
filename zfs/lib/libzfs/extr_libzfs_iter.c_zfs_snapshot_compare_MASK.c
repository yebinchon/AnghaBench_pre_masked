
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * zn_handle; } ;
typedef TYPE_1__ zfs_node_t ;
typedef int zfs_handle_t ;
typedef int uint64_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_1, const void *VAR_2)
{
 zfs_handle_t *VAR_3 = ((zfs_node_t *)VAR_1)->zn_handle;
 zfs_handle_t *VAR_4 = ((zfs_node_t *)VAR_2)->zn_handle;
 uint64_t VAR_5, VAR_6;





 VAR_5 = FUNC_1(VAR_3, VAR_0);
 VAR_6 = FUNC_1(VAR_4, VAR_0);

 return (FUNC_0(VAR_5, VAR_6));
}
