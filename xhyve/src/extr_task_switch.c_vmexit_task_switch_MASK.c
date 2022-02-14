
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct vm_guest_paging {scalar_t__ cpu_mode; scalar_t__ cpl; } ;
struct vm_task_switch {int tsssel; int ext; int reason; int errcode; struct vm_guest_paging paging; scalar_t__ errcode_valid; } ;
struct TYPE_2__ {struct vm_task_switch task_switch; } ;
struct vm_exit {int rip; scalar_t__ inst_length; TYPE_1__ u; } ;
struct user_segment_descriptor {int sd_type; } ;
struct tss32 {int tss_eip; } ;
struct seg_desc {scalar_t__ access; scalar_t__ limit; int base; } ;
struct iovec {int dummy; } ;
typedef enum task_switch_reason { ____Placeholder_task_switch_reason } task_switch_reason ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,int ,int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,struct vm_guest_paging*,int,struct user_segment_descriptor*,int*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct iovec*) ;
 int FUNC_13 (int,struct vm_guest_paging*,int,int ,int*) ;
 int FUNC_14 (int,struct vm_task_switch*,int,struct user_segment_descriptor*,int*) ;
 int FUNC_15 (int,int ,int,int) ;
 int VAR_19 ;
 int FUNC_16 (int,struct vm_task_switch*,int,struct tss32*,struct iovec*,int*) ;
 int FUNC_17 (int,struct vm_task_switch*,scalar_t__,struct tss32*,struct iovec*) ;
 int FUNC_18 (int,int ,struct seg_desc*) ;
 struct seg_desc FUNC_19 (struct user_segment_descriptor*) ;
 int FUNC_20 (int,struct vm_guest_paging*,int,size_t,int,struct iovec*,int ,int*) ;
 int FUNC_21 (struct iovec*,struct tss32*,size_t) ;
 int FUNC_22 (int,int ,int*,scalar_t__*,scalar_t__*) ;
 int FUNC_23 (int,int ) ;
 int FUNC_24 (int,int ,int ) ;

int
FUNC_25(struct vm_exit *VAR_20, int *VAR_21)
{
 struct seg_desc VAR_22;
 struct tss32 VAR_23, VAR_24;
 struct vm_task_switch *VAR_25;
 struct vm_guest_paging *VAR_26, VAR_27;
 struct user_segment_descriptor VAR_28, VAR_29;
 struct iovec VAR_30[2], VAR_31[2];
 uint64_t VAR_32, VAR_33;
 uint32_t VAR_34, VAR_35, VAR_36;
 int VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43;
 enum task_switch_reason VAR_44;
 uint16_t VAR_45, VAR_46;

 VAR_25 = &VAR_20->u.task_switch;
 VAR_45 = VAR_25->tsssel;
 VAR_38 = VAR_20->u.task_switch.ext;
 VAR_44 = VAR_20->u.task_switch.reason;
 VAR_26 = &VAR_20->u.task_switch.paging;
 VAR_43 = *VAR_21;

 FUNC_9(VAR_26->cpu_mode == VAR_0);




 VAR_34 = (uint32_t) (VAR_20->rip + ((uint64_t) VAR_20->inst_length));







 VAR_27 = *VAR_26;
 VAR_27.cpl = 0;


 VAR_37 = FUNC_14(VAR_43, VAR_25, VAR_45, &VAR_28,
     &VAR_39);
 FUNC_0(VAR_37, VAR_39);

 VAR_22 = FUNC_19(&VAR_28);


 VAR_41 = FUNC_5(VAR_22.access);
 if (VAR_41 != VAR_7 && VAR_41 != VAR_8 &&
     VAR_41 != VAR_5 && VAR_41 != VAR_6) {
  FUNC_15(VAR_43, VAR_4, VAR_45, VAR_38);
  goto done;
 }


 if (!FUNC_4(VAR_22.access)) {
  FUNC_15(VAR_43, VAR_3, VAR_45, VAR_38);
  goto done;
 }





 if (VAR_41 == VAR_7 || VAR_41 == VAR_8)
  VAR_40 = 104 - 1;
 else if (VAR_41 == VAR_5 || VAR_41 == VAR_6)
  VAR_40 = 44 - 1;
 else
  VAR_40 = 0;

 FUNC_9(VAR_40 > 0);
 if (VAR_22.limit < ((uint32_t) VAR_40)) {
  FUNC_15(VAR_43, VAR_4, VAR_45, VAR_38);
  goto done;
 }


 if (VAR_44 == VAR_10 && !FUNC_8(VAR_41)) {
  FUNC_15(VAR_43, VAR_4, VAR_45, VAR_38);
  goto done;
 }





 if (VAR_44 != VAR_10 && FUNC_8(VAR_41)) {
  FUNC_15(VAR_43, VAR_2, VAR_45, VAR_38);
  goto done;
 }


 VAR_37 = FUNC_20(VAR_43, &VAR_27, VAR_22.base,
  ((size_t) (VAR_40 + 1)), (VAR_17 | VAR_18), VAR_30,
  FUNC_12(VAR_30), &VAR_39);
 FUNC_0(VAR_37, VAR_39);
 FUNC_21(VAR_30, &VAR_24, ((size_t) (VAR_40 + 1)));


 VAR_46 = (uint16_t) FUNC_1(VAR_43, VAR_16);
 if (FUNC_3(VAR_46) || FUNC_2(VAR_46) == 0) {






  FUNC_15(VAR_43, VAR_4, VAR_46, VAR_25->ext);
  goto done;
 }


 VAR_37 = FUNC_22(VAR_43, VAR_16, &VAR_33, &VAR_35,
     &VAR_36);
 FUNC_9(VAR_37 == 0);
 FUNC_9(!FUNC_6(VAR_36) && FUNC_4(VAR_36));
 VAR_42 = FUNC_5(VAR_36);
 FUNC_9(VAR_42 == VAR_7 || VAR_42 == VAR_5);


 VAR_37 = FUNC_14(VAR_43, VAR_25, VAR_46, &VAR_29,
     &VAR_39);
 FUNC_0(VAR_37, VAR_39);


 VAR_37 = FUNC_20(VAR_43, &VAR_27, VAR_33,
  ((size_t) (VAR_40 + 1)), (VAR_17 | VAR_18),
  VAR_31, FUNC_12(VAR_31), &VAR_39);
 FUNC_0(VAR_37, VAR_39);
 FUNC_21(VAR_31, &VAR_23, ((size_t) (VAR_40 + 1)));





 if (VAR_44 == VAR_10 || VAR_44 == VAR_11) {
  VAR_29.sd_type &= ~0x2;
  VAR_37 = FUNC_10(VAR_43, &VAR_27, VAR_46,
      &VAR_29, &VAR_39);
  FUNC_0(VAR_37, VAR_39);
 }

 if (VAR_41 == VAR_5 || VAR_41 == VAR_6) {
  FUNC_11(VAR_19, "Task switch to 16-bit TSS not supported\n");
  return (VAR_12);
 }


 FUNC_17(VAR_43, VAR_25, VAR_34, &VAR_23, VAR_31);





 if (VAR_44 != VAR_10) {
  VAR_28.sd_type |= 0x2;
  VAR_37 = FUNC_10(VAR_43, &VAR_27, VAR_45,
      &VAR_28, &VAR_39);
  FUNC_0(VAR_37, VAR_39);
 }


 FUNC_7(VAR_43, VAR_16, VAR_45);


 VAR_22 = FUNC_19(&VAR_28);
 FUNC_18(VAR_43, VAR_16, &VAR_22);


 VAR_32 = FUNC_1(VAR_43, VAR_14);
 FUNC_7(VAR_43, VAR_14, VAR_32 | VAR_1);






 VAR_37 = FUNC_24(VAR_43, VAR_15, VAR_24.tss_eip);
 FUNC_9(VAR_37 == 0);


 VAR_37 = FUNC_16(VAR_43, VAR_25, VAR_46, &VAR_24, VAR_30,
     &VAR_39);
 FUNC_0(VAR_37, VAR_39);






 if (VAR_25->errcode_valid) {
  FUNC_9(VAR_25->ext);
  FUNC_9(VAR_25->reason == VAR_9);
  VAR_37 = FUNC_13(VAR_43, &VAR_25->paging, VAR_41,
      VAR_25->errcode, &VAR_39);
  FUNC_0(VAR_37, VAR_39);
 }
 if (VAR_25->reason == VAR_9) {
  VAR_37 = FUNC_23(VAR_43, 0);
  FUNC_9(VAR_37 == 0);
 }




done:
 return (VAR_13);
}
