
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
struct vm {size_t num_mem_segs; struct mem_seg* mem_segs; } ;
struct mem_seg {size_t gpa; size_t len; void* object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct vm*,size_t) ;
 void* FUNC_1 (size_t,size_t,size_t) ;

int
FUNC_2(struct vm *VAR_6, uint64_t VAR_7, size_t VAR_8, uint64_t VAR_9)
{
 int VAR_10, VAR_11;
 struct mem_seg *VAR_12;
 void *VAR_13;
 uint64_t VAR_14;

 if ((VAR_7 & VAR_4) || (VAR_8 & VAR_4) || VAR_8 == 0)
  return (VAR_1);

 VAR_10 = VAR_11 = 0;
 VAR_14 = VAR_7;
 while (VAR_14 < VAR_7 + VAR_8) {
  if (FUNC_0(VAR_6, VAR_14))
   VAR_11++;
  else
   VAR_10++;

  VAR_14 += VAR_5;
 }





 if (VAR_11 && VAR_10)
  return (VAR_1);





 if (VAR_11 && VAR_10 == 0)
  return (0);

 if (VAR_6->num_mem_segs >= VAR_3)
  return (VAR_0);

 VAR_12 = &VAR_6->mem_segs[VAR_6->num_mem_segs];

 if ((VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_9)) == ((void*)0))
  return (VAR_2);

 VAR_12->gpa = VAR_7;
 VAR_12->len = VAR_8;
 VAR_12->object = VAR_13;

 VAR_6->num_mem_segs++;

 return (0);
}
