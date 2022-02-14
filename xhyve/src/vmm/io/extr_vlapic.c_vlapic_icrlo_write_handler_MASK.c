
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int vcpu; int rip; } ;
struct TYPE_4__ {TYPE_1__ spinup_ap; } ;
struct vm_exit {TYPE_2__ u; int exitcode; } ;
struct vlapic {scalar_t__ vcpuid; scalar_t__ boot_state; int vm; struct LAPIC* apic_page; } ;
struct LAPIC {unsigned int icr_lo; scalar_t__ icr_hi; } ;
typedef int cpuset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (int *) ;
 int VAR_15 ;
 int FUNC_4 (struct vlapic*,char*,int) ;
 int FUNC_5 (struct vlapic*,char*,int,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int *,int,int,int,scalar_t__) ;
 int FUNC_8 (struct vlapic*,int ) ;
 int FUNC_9 (int ) ;
 struct vm_exit* FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,int) ;
 struct vlapic* FUNC_12 (int ,int) ;
 int FUNC_13 (int ,scalar_t__,int ,int,int) ;
 scalar_t__ FUNC_14 (struct vlapic*) ;

int
FUNC_15(struct vlapic *VAR_19, bool *VAR_20)
{
 int VAR_21;
 bool VAR_22;
 cpuset_t VAR_23;
 uint64_t VAR_24;
 uint32_t VAR_25, VAR_26, VAR_27;
 struct vlapic *VAR_28;
 struct vm_exit *VAR_29;
 struct LAPIC *VAR_30;

 VAR_30 = VAR_19->apic_page;
 VAR_30->icr_lo &= ~((unsigned) VAR_5);
 VAR_24 = ((uint64_t)VAR_30->icr_hi << 32) | VAR_30->icr_lo;

 if (FUNC_14(VAR_19))
  VAR_25 = VAR_24 >> 32;
 else
  VAR_25 = VAR_24 >> (32 + 24);
 VAR_26 = VAR_24 & VAR_11;
 VAR_27 = VAR_24 & VAR_2;

 if (VAR_27 == VAR_0 && VAR_26 < 16) {
  FUNC_8(VAR_19, VAR_8);
  FUNC_4(VAR_19, "Ignoring invalid IPI %d", VAR_26);
  return (0);
 }

 FUNC_5(VAR_19, "icrlo 0x%016llx triggered ipi %d", VAR_24, VAR_26);

 if (VAR_27 == VAR_0 || VAR_27 == VAR_3) {
  switch (VAR_24 & VAR_7) {
  case 129:
   VAR_22 = ((VAR_24 & VAR_6) == 0);
   FUNC_7(VAR_19->vm, &VAR_23, VAR_25, VAR_22, 0,
       FUNC_14(VAR_19));
   break;
  case 128:
   FUNC_2(((unsigned) VAR_19->vcpuid), &VAR_23);
   break;
  case 130:
   VAR_23 = FUNC_9(VAR_19->vm);
   break;
  case 131:
   VAR_23 = FUNC_9(VAR_19->vm);
   FUNC_0(((unsigned) VAR_19->vcpuid), &VAR_23);
   break;
  default:
   FUNC_3(&VAR_23);
   break;
  }

  while ((VAR_21 = FUNC_1(&VAR_23)) != 0) {
   VAR_21--;
   FUNC_0(((unsigned) VAR_21), &VAR_23);
   if (VAR_27 == VAR_0) {
    FUNC_6(VAR_19->vm, VAR_21, ((int) VAR_26));
    FUNC_13(VAR_19->vm, VAR_19->vcpuid,
          VAR_15, VAR_21, 1);
    FUNC_5(VAR_19, "vlapic sending ipi %d "
        "to vcpuid %d", VAR_26, VAR_21);
   } else {
    FUNC_11(VAR_19->vm, VAR_21);
    FUNC_4(VAR_19, "vlapic sending ipi nmi "
        "to vcpuid %d", VAR_21);
   }
  }

  return (0);
 }

 if (VAR_27 == VAR_1) {
  if ((VAR_24 & VAR_10) == VAR_9)
   return (0);

  if (VAR_19->vcpuid == 0 && VAR_25 != 0 && VAR_25 < VAR_17) {
   VAR_28 = FUNC_12(VAR_19->vm, ((int) VAR_25));


   if (VAR_28->boot_state == VAR_12) {
    VAR_28->boot_state = VAR_14;
   }

   return (0);
  }
 }

 if (VAR_27 == VAR_4) {
  if (VAR_19->vcpuid == 0 && VAR_25 != 0 && VAR_25 < VAR_17) {
   VAR_28 = FUNC_12(VAR_19->vm, ((int) VAR_25));




   if (VAR_28->boot_state != VAR_14)
    return (0);

   VAR_28->boot_state = VAR_13;

   *VAR_20 = 1;
   VAR_29 = FUNC_10(VAR_19->vm, VAR_19->vcpuid);
   VAR_29->exitcode = VAR_16;
   VAR_29->u.spinup_ap.vcpu = (int) VAR_25;
   VAR_29->u.spinup_ap.rip = VAR_26 << VAR_18;

   return (0);
  }
 }




 return (1);
}
