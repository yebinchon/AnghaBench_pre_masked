
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ mg_max_alloc_queue_depth; scalar_t__* mg_cur_max_alloc_queue_depth; TYPE_1__* mg_class; } ;
typedef TYPE_2__ metaslab_group_t ;
struct TYPE_4__ {int * mc_alloc_max_slots; } ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(metaslab_group_t *VAR_0, int VAR_1)
{
 uint64_t VAR_2 = VAR_0->mg_max_alloc_queue_depth;
 uint64_t VAR_3 = VAR_0->mg_cur_max_alloc_queue_depth[VAR_1];
 while (VAR_3 < VAR_2) {
  if (FUNC_0(&VAR_0->mg_cur_max_alloc_queue_depth[VAR_1],
      VAR_3, VAR_3 + 1) == VAR_3) {
   FUNC_1(
       &VAR_0->mg_class->mc_alloc_max_slots[VAR_1]);
   return;
  }
  VAR_3 = VAR_0->mg_cur_max_alloc_queue_depth[VAR_1];
 }
}
