
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
struct vm_guest_paging {int dummy; } ;
struct iovec {size_t iov_len; void* iov_base; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (size_t,scalar_t__) ;
 int FUNC_2 (int,struct vm_guest_paging*,size_t,int,size_t*,int*) ;
 void* FUNC_3 (size_t,size_t) ;

int
FUNC_4(int VAR_3, struct vm_guest_paging *VAR_4, uint64_t VAR_5, size_t VAR_6,
 int VAR_7, struct iovec *VAR_8, int VAR_9, int *VAR_10)
{
 void *VAR_11;
 uint64_t VAR_12;
 size_t VAR_13, VAR_14;
 int VAR_15, VAR_16;

 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
  VAR_8[VAR_15].iov_base = 0;
  VAR_8[VAR_15].iov_len = 0;
 }

 while (VAR_6) {
  FUNC_0(VAR_9 > 0);

  VAR_16 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_7, &VAR_12, VAR_10);
  if ((VAR_16) || *VAR_10) {
   return (VAR_16);
  }

  VAR_14 = VAR_12 & VAR_1;
  VAR_13 = FUNC_1(VAR_6, VAR_2 - VAR_14);

  VAR_11 = FUNC_3(VAR_12, VAR_13);
  if (VAR_11 == ((void*)0)) {
   return (VAR_0);
  }

  VAR_8->iov_base = VAR_11;
  VAR_8->iov_len = VAR_13;
  VAR_8++;
  VAR_9--;

  VAR_5 += VAR_13;
  VAR_6 -= VAR_13;
 }

 return (0);
}
