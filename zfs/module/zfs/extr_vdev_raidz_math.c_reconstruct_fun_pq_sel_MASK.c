
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

__attribute__((used)) static raidz_rec_f
FUNC_0(raidz_map_t *VAR_5, const int *VAR_6,
    const int VAR_7)
{
 if (VAR_7 == 1) {
  if (VAR_6[VAR_0]) {
   return (VAR_5->rm_ops->rec[VAR_2]);
  } else if (VAR_6[VAR_1]) {
   return (VAR_5->rm_ops->rec[VAR_4]);
  }
 } else if (VAR_7 == 2 &&
     VAR_6[VAR_0] && VAR_6[VAR_1]) {
  return (VAR_5->rm_ops->rec[VAR_3]);
 }
 return ((raidz_rec_f) ((void*)0));
}
