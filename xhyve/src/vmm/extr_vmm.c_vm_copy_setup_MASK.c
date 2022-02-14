
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
struct vm_guest_paging {int dummy; } ;
struct vm_copyinfo {size_t gpa; size_t len; void* hva; } ;
struct vm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct vm_copyinfo*,int) ;
 size_t FUNC_2 (size_t,scalar_t__) ;
 int FUNC_3 (struct vm*,int,struct vm_copyinfo*,int) ;
 int FUNC_4 (struct vm*,int,struct vm_guest_paging*,size_t,int,size_t*,int*) ;
 void* FUNC_5 (struct vm*,size_t,size_t) ;

int
FUNC_6(struct vm *VAR_3, int VAR_4, struct vm_guest_paging *VAR_5,
    uint64_t VAR_6, size_t VAR_7, int VAR_8, struct vm_copyinfo *VAR_9,
    int VAR_10, int *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 size_t VAR_15, VAR_16, VAR_17;
 void *VAR_18;
 uint64_t VAR_19;

 FUNC_1(VAR_9, sizeof(struct vm_copyinfo) * ((unsigned) VAR_10));

 VAR_14 = 0;
 VAR_17 = VAR_7;
 while (VAR_17 > 0) {
  FUNC_0(VAR_14 < VAR_10, ("insufficient vm_copyinfo"));
  VAR_12 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8, &VAR_19, VAR_11);
  if (VAR_12 || *VAR_11)
   return (VAR_12);
  VAR_16 = VAR_19 & VAR_1;
  VAR_15 = FUNC_2(VAR_17, VAR_2 - VAR_16);
  VAR_9[VAR_14].gpa = VAR_19;
  VAR_9[VAR_14].len = VAR_15;
  VAR_17 -= VAR_15;
  VAR_6 += VAR_15;
  VAR_14++;
 }

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_18 = FUNC_5(VAR_3, VAR_9[VAR_13].gpa, VAR_9[VAR_13].len);
  if (VAR_18 == ((void*)0))
   break;
  VAR_9[VAR_13].hva = VAR_18;
 }

 if (VAR_13 != VAR_14) {
  FUNC_3(VAR_3, VAR_4, VAR_9, VAR_10);
  return (VAR_0);
 } else {
  *VAR_11 = 0;
  return (0);
 }
}
