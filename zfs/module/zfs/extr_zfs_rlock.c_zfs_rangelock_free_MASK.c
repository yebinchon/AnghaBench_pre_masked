
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lr_read_cv; scalar_t__ lr_read_wanted; int lr_write_cv; scalar_t__ lr_write_wanted; } ;
typedef TYPE_1__ zfs_locked_range_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2(zfs_locked_range_t *VAR_0)
{
 if (VAR_0->lr_write_wanted)
  FUNC_0(&VAR_0->lr_write_cv);

 if (VAR_0->lr_read_wanted)
  FUNC_0(&VAR_0->lr_read_cv);

 FUNC_1(VAR_0, sizeof (zfs_locked_range_t));
}
