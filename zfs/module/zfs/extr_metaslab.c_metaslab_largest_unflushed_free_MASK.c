
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int range_seg_t ;
struct TYPE_3__ {int ms_freed; int * ms_defer; int * ms_unflushed_frees; int ms_unflushed_frees_by_size; int ms_lock; } ;
typedef TYPE_1__ metaslab_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;

uint64_t
FUNC_8(metaslab_t *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_1->ms_lock));

 if (VAR_1->ms_unflushed_frees == ((void*)0))
  return (0);

 if (FUNC_7(&VAR_1->ms_unflushed_frees_by_size) == 0)
  FUNC_2(VAR_1->ms_unflushed_frees);
 range_seg_t *VAR_2 = FUNC_6(&VAR_1->ms_unflushed_frees_by_size,
     ((void*)0));
 if (VAR_2 == ((void*)0))
  return (0);
 uint64_t VAR_3 = FUNC_5(VAR_2, VAR_1->ms_unflushed_frees);
 uint64_t VAR_4 = FUNC_4(VAR_2, VAR_1->ms_unflushed_frees) - VAR_3;
 for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  uint64_t VAR_6 = 0;
  uint64_t VAR_7 = 0;
  boolean_t VAR_8 = FUNC_3(VAR_1->ms_defer[VAR_5], VAR_3,
      VAR_4, &VAR_6, &VAR_7);
  if (VAR_8) {
   if (VAR_3 == VAR_6)
    return (0);
   VAR_4 = VAR_6 - VAR_3;
  }
 }

 uint64_t VAR_9 = 0;
 uint64_t VAR_10 = 0;
 boolean_t VAR_11 = FUNC_3(VAR_1->ms_freed, VAR_3,
     VAR_4, &VAR_9, &VAR_10);
 if (VAR_11)
  VAR_4 = VAR_9 - VAR_3;

 return (VAR_4);
}
