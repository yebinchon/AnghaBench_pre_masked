
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vm_memory_segment {scalar_t__ gpa; int len; } ;
struct vm {int num_mem_segs; TYPE_1__* mem_segs; } ;
struct TYPE_2__ {scalar_t__ gpa; int len; } ;



int
FUNC_0(struct vm *VAR_0, uint64_t VAR_1,
    struct vm_memory_segment *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_mem_segs; VAR_3++) {
  if (VAR_1 == VAR_0->mem_segs[VAR_3].gpa) {
   VAR_2->gpa = VAR_0->mem_segs[VAR_3].gpa;
   VAR_2->len = VAR_0->mem_segs[VAR_3].len;
   return (0);
  }
 }
 return (-1);
}
