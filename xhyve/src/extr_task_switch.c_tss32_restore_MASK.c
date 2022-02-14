
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ paging_mode; int cr3; int cpl; } ;
struct vm_task_switch {scalar_t__ reason; TYPE_1__ paging; } ;
struct tss32 {int tss_eflags; int tss_ldt; unsigned int tss_cr3; int tss_eip; int tss_eax; int tss_ecx; int tss_edx; int tss_ebx; int tss_esp; int tss_ebp; int tss_esi; int tss_edi; int tss_es; int tss_cs; int tss_ss; int tss_ds; int tss_fs; int tss_gs; int tss_link; } ;
struct seg_desc {int dummy; } ;
struct iovec {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int* FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int,int ,struct seg_desc*) ;
 int FUNC_3 (int,struct vm_task_switch*,int ,struct seg_desc*,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct tss32*,struct iovec*,int) ;

__attribute__((used)) static int
FUNC_6(int VAR_28, struct vm_task_switch *VAR_29, uint16_t VAR_30,
 struct tss32 *VAR_31, struct iovec *VAR_32, int *VAR_33)
{
 struct seg_desc VAR_34, VAR_35;
 uint64_t *VAR_36, VAR_37, VAR_38;
 uint32_t VAR_39;
 int VAR_40, VAR_41;
 bool VAR_42;

 VAR_42 = 0;
 if (VAR_29->reason != VAR_4 && VAR_29->reason != VAR_5) {
  VAR_31->tss_link = VAR_30;
  VAR_42 = 1;
 }

 VAR_39 = VAR_31->tss_eflags;
 if (VAR_42)
  VAR_39 |= VAR_2;


 FUNC_0(VAR_28, VAR_12, VAR_31->tss_ldt);


 if (VAR_29->paging.paging_mode != VAR_0) {
  if (VAR_29->paging.paging_mode == VAR_1) {



   VAR_37 = (1UL << 36) - 1;
   VAR_36 = FUNC_1(VAR_31->tss_cr3 & ~((unsigned) 0x1f), 32);
   for (VAR_41 = 0; VAR_41 < 4; VAR_41++) {

    if (!(VAR_36[VAR_41] & 0x1))
     continue;




    VAR_38 = ~VAR_37 | 0x1E6;
    if (VAR_36[VAR_41] & VAR_38) {
     FUNC_4(VAR_28);
     return (1);
    }
   }
   FUNC_0(VAR_28, VAR_13, VAR_36[0]);
   FUNC_0(VAR_28, VAR_14, VAR_36[1]);
   FUNC_0(VAR_28, VAR_15, VAR_36[2]);
   FUNC_0(VAR_28, VAR_16, VAR_36[3]);
  }
  FUNC_0(VAR_28, VAR_6, VAR_31->tss_cr3);
  VAR_29->paging.cr3 = VAR_31->tss_cr3;
 }


 FUNC_0(VAR_28, VAR_23, VAR_39);
 FUNC_0(VAR_28, VAR_24, VAR_31->tss_eip);


 FUNC_0(VAR_28, VAR_17, VAR_31->tss_eax);
 FUNC_0(VAR_28, VAR_20, VAR_31->tss_ecx);
 FUNC_0(VAR_28, VAR_22, VAR_31->tss_edx);
 FUNC_0(VAR_28, VAR_19, VAR_31->tss_ebx);
 FUNC_0(VAR_28, VAR_26, VAR_31->tss_esp);
 FUNC_0(VAR_28, VAR_18, VAR_31->tss_ebp);
 FUNC_0(VAR_28, VAR_25, VAR_31->tss_esi);
 FUNC_0(VAR_28, VAR_21, VAR_31->tss_edi);


 FUNC_0(VAR_28, VAR_9, VAR_31->tss_es);
 FUNC_0(VAR_28, VAR_7, VAR_31->tss_cs);
 FUNC_0(VAR_28, VAR_27, VAR_31->tss_ss);
 FUNC_0(VAR_28, VAR_8, VAR_31->tss_ds);
 FUNC_0(VAR_28, VAR_10, VAR_31->tss_fs);
 FUNC_0(VAR_28, VAR_11, VAR_31->tss_gs);





 if (VAR_42)
  FUNC_5(VAR_31, VAR_32, sizeof(*VAR_31));


 VAR_40 = FUNC_3(VAR_28, VAR_29, VAR_12, &VAR_34,
     VAR_33);
 if (VAR_40 || *VAR_33)
  return (VAR_40);
 FUNC_2(VAR_28, VAR_12, &VAR_34);
 VAR_40 = FUNC_3(VAR_28, VAR_29, VAR_7, &VAR_34,
     VAR_33);
 if (VAR_40 || *VAR_33)
  return (VAR_40);

 VAR_40 = FUNC_3(VAR_28, VAR_29, VAR_27, &VAR_35,
     VAR_33);
 if (VAR_40 || *VAR_33)
  return (VAR_40);
 FUNC_2(VAR_28, VAR_7, &VAR_34);
 FUNC_2(VAR_28, VAR_27, &VAR_35);
 VAR_29->paging.cpl = VAR_31->tss_cs & VAR_3;

 VAR_40 = FUNC_3(VAR_28, VAR_29, VAR_8, &VAR_34,
     VAR_33);
 if (VAR_40 || *VAR_33)
  return (VAR_40);
 FUNC_2(VAR_28, VAR_8, &VAR_34);

 VAR_40 = FUNC_3(VAR_28, VAR_29, VAR_9, &VAR_34,
     VAR_33);
 if (VAR_40 || *VAR_33)
  return (VAR_40);
 FUNC_2(VAR_28, VAR_9, &VAR_34);

 VAR_40 = FUNC_3(VAR_28, VAR_29, VAR_10, &VAR_34,
     VAR_33);
 if (VAR_40 || *VAR_33)
  return (VAR_40);
 FUNC_2(VAR_28, VAR_10, &VAR_34);

 VAR_40 = FUNC_3(VAR_28, VAR_29, VAR_11, &VAR_34,
     VAR_33);
 if (VAR_40 || *VAR_33)
  return (VAR_40);
 FUNC_2(VAR_28, VAR_11, &VAR_34);

 return (0);
}
