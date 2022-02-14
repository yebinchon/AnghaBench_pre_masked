
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef enum vm_mmap_style { ____Placeholder_vm_mmap_style } vm_mmap_style ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 size_t VAR_5 ;
 void* VAR_6 ;
 size_t VAR_7 ;
 void* VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (unsigned long long,size_t,int const,void**) ;

int
FUNC_2(size_t VAR_11, enum vm_mmap_style VAR_12)
{
 void **VAR_13;
 int VAR_14;
    const uint64_t VAR_15 = VAR_3 | VAR_4 | VAR_2;


 FUNC_0(VAR_12 == VAR_1 || VAR_12 == VAR_0);

 VAR_10 = VAR_12;






 VAR_7 = (VAR_11 > VAR_9) ? VAR_9 : VAR_11;
 VAR_5 = (VAR_11 > VAR_9) ? (VAR_11 - VAR_7) : 0;

 if (VAR_7 > 0) {
  VAR_13 = (VAR_12 == VAR_0) ? &VAR_8 : ((void*)0);
  if ((VAR_14 = FUNC_1(0, VAR_7, VAR_15, VAR_13))) {
   return (VAR_14);
  }
 }

 if (VAR_5 > 0) {
  VAR_13 = (VAR_12 == VAR_0) ? &VAR_6 : ((void*)0);
  if ((VAR_14 = FUNC_1((4ull << 30), VAR_5, VAR_15, VAR_13))) {
   return (VAR_14);
  }
 }

 return (0);
}
