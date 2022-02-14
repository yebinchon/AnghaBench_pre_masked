
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ zfs_rangelock_type_t ;
struct TYPE_11__ {int rl_lock; int rl_tree; } ;
typedef TYPE_1__ zfs_rangelock_t ;
struct TYPE_12__ {int lr_count; void* lr_read_wanted; void* lr_write_wanted; void* lr_proxy; scalar_t__ lr_type; scalar_t__ lr_length; scalar_t__ lr_offset; TYPE_1__* lr_rangelock; } ;
typedef TYPE_2__ zfs_locked_range_t ;
typedef scalar_t__ uint64_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;

zfs_locked_range_t *
FUNC_8(zfs_rangelock_t *VAR_6, uint64_t VAR_7, uint64_t VAR_8,
    zfs_rangelock_type_t VAR_9)
{
 zfs_locked_range_t *VAR_10;

 FUNC_0(VAR_9 == VAR_3 || VAR_9 == VAR_4 || VAR_9 == VAR_2);

 VAR_10 = FUNC_3(sizeof (zfs_locked_range_t), VAR_1);
 VAR_10->lr_rangelock = VAR_6;
 VAR_10->lr_offset = VAR_7;
 if (VAR_8 + VAR_7 < VAR_7)
  VAR_8 = VAR_5 - VAR_7;
 VAR_10->lr_length = VAR_8;
 VAR_10->lr_count = 1;
 VAR_10->lr_type = VAR_9;
 VAR_10->lr_proxy = VAR_0;
 VAR_10->lr_write_wanted = VAR_0;
 VAR_10->lr_read_wanted = VAR_0;

 FUNC_4(&VAR_6->rl_lock);
 if (VAR_9 == VAR_3) {



  if (FUNC_2(&VAR_6->rl_tree) == 0)
   FUNC_1(&VAR_6->rl_tree, VAR_10);
  else
   FUNC_6(VAR_6, VAR_10);
 } else {

  FUNC_7(VAR_6, VAR_10);
 }
 FUNC_5(&VAR_6->rl_lock);
 return (VAR_10);
}
