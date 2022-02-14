
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

__attribute__((used)) static raidz_rec_f
FUNC_0(raidz_map_t *VAR_2, const int *VAR_3,
    const int VAR_4)
{
 if (VAR_4 == 1 && VAR_3[VAR_0]) {
  return (VAR_2->rm_ops->rec[VAR_1]);
 }
 return ((raidz_rec_f) ((void*)0));
}
