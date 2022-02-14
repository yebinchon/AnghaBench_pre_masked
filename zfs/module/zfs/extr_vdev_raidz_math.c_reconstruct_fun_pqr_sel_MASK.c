
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int raidz_rec_f ;
struct TYPE_5__ {TYPE_1__* rm_ops; } ;
typedef TYPE_2__ raidz_map_t ;
struct TYPE_4__ {int * rec; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;

__attribute__((used)) static raidz_rec_f
FUNC_0(raidz_map_t *VAR_10, const int *VAR_11,
    const int VAR_12)
{
 if (VAR_12 == 1) {
  if (VAR_11[VAR_0]) {
   return (VAR_10->rm_ops->rec[VAR_3]);
  } else if (VAR_11[VAR_1]) {
   return (VAR_10->rm_ops->rec[VAR_7]);
  } else if (VAR_11[VAR_2]) {
   return (VAR_10->rm_ops->rec[VAR_9]);
  }
 } else if (VAR_12 == 2) {
  if (VAR_11[VAR_0] && VAR_11[VAR_1]) {
   return (VAR_10->rm_ops->rec[VAR_4]);
  } else if (VAR_11[VAR_0] && VAR_11[VAR_2]) {
   return (VAR_10->rm_ops->rec[VAR_6]);
  } else if (VAR_11[VAR_1] && VAR_11[VAR_2]) {
   return (VAR_10->rm_ops->rec[VAR_8]);
  }
 } else if (VAR_12 == 3 &&
     VAR_11[VAR_0] && VAR_11[VAR_1] &&
     VAR_11[VAR_2]) {
  return (VAR_10->rm_ops->rec[VAR_5]);
 }
 return ((raidz_rec_f) ((void*)0));
}
