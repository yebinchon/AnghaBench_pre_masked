
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct vm_guest_paging {int cpl; int cpu_mode; } ;
struct seg_desc {int access; int limit; int base; } ;
struct iovec {int dummy; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iovec*) ;
 int FUNC_5 (int,int ,scalar_t__,int) ;
 scalar_t__ FUNC_6 (int ,int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int ,struct seg_desc*,scalar_t__,int,int,int ,scalar_t__*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,struct vm_guest_paging*,scalar_t__,size_t,int ,struct iovec*,int ,int*) ;
 int FUNC_10 (scalar_t__*,struct iovec*,size_t) ;
 int FUNC_11 (int,int ,int *,int *,int *) ;

__attribute__((used)) static int
FUNC_12(int VAR_8, struct vm_guest_paging *VAR_9, int VAR_10,
 uint32_t VAR_11, int *VAR_12)
{
 struct iovec VAR_13[2];
 struct seg_desc VAR_14;
 int VAR_15, VAR_16, VAR_17;
 uint64_t VAR_18, VAR_19, VAR_20;
 uint32_t VAR_21;
 uint16_t VAR_22;

 *VAR_12 = 0;

 VAR_19 = FUNC_0(VAR_8, VAR_3);
 VAR_20 = FUNC_0(VAR_8, VAR_4);
 VAR_22 = (uint16_t) FUNC_0(VAR_8, VAR_6);

 VAR_17 = FUNC_11(VAR_8, VAR_6, &VAR_14.base,
     &VAR_14.limit, &VAR_14.access);
 FUNC_3(VAR_17 == 0);






 if (VAR_10 == VAR_1 || VAR_10 == VAR_2)
  VAR_16 = 4;
 else
  VAR_16 = 2;






 if (FUNC_1(VAR_14.access))
  VAR_15 = 4;
 else
  VAR_15 = 2;

 VAR_21 = (uint32_t) FUNC_0(VAR_8, VAR_5);
 VAR_21 -= (uint32_t) VAR_16;

 if (FUNC_7(VAR_9->cpu_mode, VAR_6, &VAR_14, VAR_21,
  VAR_16, VAR_15, VAR_7, &VAR_18))
 {
  FUNC_5(VAR_8, VAR_0, VAR_22, 1);
  *VAR_12 = 1;
  return (0);
 }

 if (FUNC_6(VAR_9->cpl, VAR_16, VAR_19, VAR_20, VAR_18)) {
  FUNC_8(VAR_8, 1);
  *VAR_12 = 1;
  return (0);
 }

 VAR_17 = FUNC_9(VAR_8, VAR_9, VAR_18, ((size_t) VAR_16),
  VAR_7, VAR_13, FUNC_4(VAR_13), VAR_12);
 if (VAR_17 || *VAR_12)
  return (VAR_17);

 FUNC_10(&VAR_11, VAR_13, ((size_t) VAR_16));
 FUNC_2(VAR_8, VAR_5, VAR_21);
 return (0);
}
