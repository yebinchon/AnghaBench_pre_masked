
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm_memory_segment {size_t len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct vm_memory_segment*) ;

int
FUNC_1(uint64_t VAR_1, size_t *VAR_2)
{
 int VAR_3;

 struct vm_memory_segment VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_4);

 if (VAR_3 == 0) {
  *VAR_2 = VAR_4.len;
 }

 return (VAR_3);
}
