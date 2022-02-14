
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vimep_dst; } ;
typedef TYPE_1__ vdev_indirect_mapping_entry_phys_t ;
typedef scalar_t__ const uint64_t ;


 scalar_t__ const FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__ const* const) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const uint64_t * const VAR_2 = VAR_0;
 const vdev_indirect_mapping_entry_phys_t * const VAR_3 =
     VAR_1;
 uint64_t VAR_4 = FUNC_1(VAR_3);

 if (*VAR_2 < VAR_4) {
  return (-1);
 } else if (*VAR_2 < VAR_4 + FUNC_0(&VAR_3->vimep_dst)) {
  return (0);
 } else {
  return (1);
 }
}
