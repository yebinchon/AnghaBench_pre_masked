
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vm {int num_mem_segs; TYPE_1__* mem_segs; } ;
struct TYPE_2__ {scalar_t__ gpa; size_t len; void* object; } ;


 int VAR_0 ;

int
FUNC_0(struct vm *VAR_1, uint64_t VAR_2, size_t VAR_3,
       uint64_t *VAR_4, void **VAR_5)
{
 int VAR_6;
 size_t VAR_7;
 uint64_t VAR_8;
 void *VAR_9;

 for (VAR_6 = 0; VAR_6 < VAR_1->num_mem_segs; VAR_6++) {
  if ((VAR_9 = VAR_1->mem_segs[VAR_6].object) == ((void*)0))
   continue;

  VAR_8 = VAR_1->mem_segs[VAR_6].gpa;
  VAR_7 = VAR_1->mem_segs[VAR_6].len;

  if ((VAR_2 >= VAR_8) && ((VAR_2 + VAR_3) <= (VAR_8 + VAR_7))) {
   *VAR_4 = VAR_2 - VAR_8;
   *VAR_5 = VAR_9;
   return (0);
  }
 }

 return (VAR_0);
}
