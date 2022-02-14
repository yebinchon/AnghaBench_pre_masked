
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int hv_memory_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*,int,size_t,int ) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;

void *
FUNC_3(uint64_t VAR_6, size_t VAR_7, uint64_t VAR_8)
{
 void *VAR_9;
    hv_memory_flags_t VAR_10;

 VAR_9 = FUNC_1(VAR_7);

 if (!VAR_9) {
  FUNC_2("vmm_mem_alloc failed\n");
 }

    VAR_10 = (VAR_8 & VAR_4) ? VAR_1 : 0;
    VAR_10 |= (VAR_8 & VAR_5) ? VAR_2 : 0;
    VAR_10 |= (VAR_8 & VAR_3) ? VAR_0 : 0;

 if (FUNC_0(VAR_9, VAR_6, VAR_7, VAR_10))
 {
  FUNC_2("hv_vm_map failed\n");
 }

 return VAR_9;
}
