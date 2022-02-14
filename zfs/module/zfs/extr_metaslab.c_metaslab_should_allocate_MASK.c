
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_3__ {scalar_t__ ms_max_size; scalar_t__ ms_unload_time; unsigned long long ms_weight; scalar_t__ ms_loaded; } ;
typedef TYPE_1__ metaslab_t ;
typedef int boolean_t ;


 unsigned long long VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long long) ;
 int FUNC_2 (unsigned long long) ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;

boolean_t
FUNC_4(metaslab_t *VAR_2, uint64_t VAR_3, boolean_t VAR_4)
{







 if (VAR_2->ms_loaded ||
     (VAR_2->ms_max_size != 0 && !VAR_4 && FUNC_3() <
     VAR_2->ms_unload_time + FUNC_0(VAR_1)))
  return (VAR_2->ms_max_size >= VAR_3);

 boolean_t VAR_5;
 if (!FUNC_2(VAR_2->ms_weight)) {






  VAR_5 = (VAR_3 <
      1ULL << (FUNC_1(VAR_2->ms_weight) + 1));
 } else {
  VAR_5 = (VAR_3 <=
      (VAR_2->ms_weight & ~VAR_0));
 }

 return (VAR_5);
}
