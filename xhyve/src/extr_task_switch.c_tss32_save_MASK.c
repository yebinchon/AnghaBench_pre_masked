
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
typedef void* uint16_t ;
struct vm_task_switch {scalar_t__ reason; } ;
struct tss32 {unsigned int tss_eflags; void* tss_eip; void* tss_gs; void* tss_fs; void* tss_ds; void* tss_ss; void* tss_cs; void* tss_es; void* tss_edi; void* tss_esi; void* tss_ebp; void* tss_esp; void* tss_ebx; void* tss_edx; void* tss_ecx; void* tss_eax; } ;
struct iovec {int dummy; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int FUNC_1 (struct tss32*,struct iovec*,int) ;

__attribute__((used)) static void
FUNC_2(int VAR_17, struct vm_task_switch *VAR_18,
    uint32_t VAR_19, struct tss32 *VAR_20, struct iovec *VAR_21)
{


 VAR_20->tss_eax = (uint32_t) FUNC_0(VAR_17, VAR_7);
 VAR_20->tss_ecx = (uint32_t) FUNC_0(VAR_17, VAR_10);
 VAR_20->tss_edx = (uint32_t) FUNC_0(VAR_17, VAR_12);
 VAR_20->tss_ebx = (uint32_t) FUNC_0(VAR_17, VAR_9);
 VAR_20->tss_esp = (uint32_t) FUNC_0(VAR_17, VAR_15);
 VAR_20->tss_ebp = (uint32_t) FUNC_0(VAR_17, VAR_8);
 VAR_20->tss_esi = (uint32_t) FUNC_0(VAR_17, VAR_14);
 VAR_20->tss_edi = (uint32_t) FUNC_0(VAR_17, VAR_11);


 VAR_20->tss_es = (uint16_t) FUNC_0(VAR_17, VAR_4);
 VAR_20->tss_cs = (uint16_t) FUNC_0(VAR_17, VAR_2);
 VAR_20->tss_ss = (uint16_t) FUNC_0(VAR_17, VAR_16);
 VAR_20->tss_ds = (uint16_t) FUNC_0(VAR_17, VAR_3);
 VAR_20->tss_fs = (uint16_t) FUNC_0(VAR_17, VAR_5);
 VAR_20->tss_gs = (uint16_t) FUNC_0(VAR_17, VAR_6);


 VAR_20->tss_eflags = (uint32_t) FUNC_0(VAR_17, VAR_13);
 if (VAR_18->reason == VAR_1)
  VAR_20->tss_eflags &= ~((unsigned) VAR_0);
 VAR_20->tss_eip = VAR_19;


 FUNC_1(VAR_20, VAR_21, sizeof(struct tss32));
}
