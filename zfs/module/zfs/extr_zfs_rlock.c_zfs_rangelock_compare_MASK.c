
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lr_offset; } ;
typedef TYPE_1__ zfs_locked_range_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const zfs_locked_range_t *VAR_2 = (const zfs_locked_range_t *)VAR_0;
 const zfs_locked_range_t *VAR_3 = (const zfs_locked_range_t *)VAR_1;

 return (FUNC_0(VAR_2->lr_offset, VAR_3->lr_offset));
}
