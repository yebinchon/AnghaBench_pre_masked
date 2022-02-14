
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int rl_lock; int rl_tree; } ;
typedef TYPE_1__ zfs_rangelock_t ;
struct TYPE_13__ {scalar_t__ lr_offset; scalar_t__ lr_length; scalar_t__ lr_type; int lr_read_cv; void* lr_read_wanted; scalar_t__ lr_write_wanted; } ;
typedef TYPE_2__ zfs_locked_range_t ;
typedef scalar_t__ uint64_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,TYPE_2__*) ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*,int *) ;
 TYPE_2__* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,TYPE_2__*,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_6(zfs_rangelock_t *VAR_5, zfs_locked_range_t *VAR_6)
{
 avl_tree_t *VAR_7 = &VAR_5->rl_tree;
 zfs_locked_range_t *VAR_8, *VAR_9;
 avl_index_t VAR_10;
 uint64_t VAR_11 = VAR_6->lr_offset;
 uint64_t VAR_12 = VAR_6->lr_length;




retry:
 VAR_8 = FUNC_1(VAR_7, VAR_6, &VAR_10);
 if (VAR_8 == ((void*)0))
  VAR_8 = FUNC_2(VAR_7, VAR_10, VAR_1);




 if (VAR_8 && (VAR_11 < VAR_8->lr_offset + VAR_8->lr_length)) {
  if ((VAR_8->lr_type == VAR_4) || (VAR_8->lr_write_wanted)) {
   if (!VAR_8->lr_read_wanted) {
    FUNC_3(&VAR_8->lr_read_cv,
        ((void*)0), VAR_3, ((void*)0));
    VAR_8->lr_read_wanted = VAR_2;
   }
   FUNC_4(&VAR_8->lr_read_cv, &VAR_5->rl_lock);
   goto retry;
  }
  if (VAR_11 + VAR_12 < VAR_8->lr_offset + VAR_8->lr_length)
   goto got_lock;
 }





 if (VAR_8 != ((void*)0))
  VAR_9 = FUNC_0(VAR_7, VAR_8);
 else
  VAR_9 = FUNC_2(VAR_7, VAR_10, VAR_0);
 for (; VAR_9 != ((void*)0); VAR_9 = FUNC_0(VAR_7, VAR_9)) {
  if (VAR_11 + VAR_12 <= VAR_9->lr_offset)
   goto got_lock;
  if ((VAR_9->lr_type == VAR_4) || (VAR_9->lr_write_wanted)) {
   if (!VAR_9->lr_read_wanted) {
    FUNC_3(&VAR_9->lr_read_cv,
        ((void*)0), VAR_3, ((void*)0));
    VAR_9->lr_read_wanted = VAR_2;
   }
   FUNC_4(&VAR_9->lr_read_cv, &VAR_5->rl_lock);
   goto retry;
  }
  if (VAR_11 + VAR_12 <= VAR_9->lr_offset + VAR_9->lr_length)
   goto got_lock;
 }

got_lock:




 FUNC_5(VAR_7, VAR_6, VAR_8, VAR_10);
}
