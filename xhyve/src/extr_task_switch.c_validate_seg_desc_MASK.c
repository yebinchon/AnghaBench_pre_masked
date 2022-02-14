
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vm_guest_paging {int cpl; } ;
struct vm_task_switch {int ext; struct vm_guest_paging paging; } ;
struct user_segment_descriptor {int sd_type; int sd_dpl; int sd_p; } ;
struct seg_desc {int access; scalar_t__ limit; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (int,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;







 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (int,struct vm_guest_paging*,int,struct user_segment_descriptor*,int*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int,int,int ) ;
 int FUNC_10 (int) ;
 struct seg_desc FUNC_11 (struct user_segment_descriptor*) ;

__attribute__((used)) static int
FUNC_12(int VAR_4, struct vm_task_switch *VAR_5, int VAR_6,
 struct seg_desc *VAR_7, int *VAR_8)
{
 struct vm_guest_paging VAR_9;
 struct user_segment_descriptor VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;
 uint16_t VAR_16, VAR_17;
 bool VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

 VAR_18 = VAR_19 = VAR_20 = VAR_21 = 0;
 switch (VAR_6) {
 case 129:
  VAR_18 = 1;
  break;
 case 134:
  VAR_19 = 1;
  break;
 case 128:
  VAR_20 = 1;
  break;
 case 133:
 case 132:
 case 131:
 case 130:
  VAR_21 = 1;
  break;
 default:
  FUNC_3(0);
 }


 VAR_16 = (uint16_t) FUNC_0(VAR_4, VAR_6);


 if (VAR_18 && FUNC_2(VAR_16)) {
  FUNC_9(VAR_4, VAR_2, VAR_16, VAR_5->ext);
  return (1);
 }


 if (FUNC_6(VAR_4, VAR_16)) {
  FUNC_9(VAR_4, VAR_2, VAR_16, VAR_5->ext);
  return (1);
 }


 if (FUNC_1(VAR_16) == 0) {

  if (VAR_19 || VAR_20) {
   FUNC_9(VAR_4, VAR_2, VAR_16, VAR_5->ext);
   return (1);
  }
  VAR_7->base = 0;
  VAR_7->limit = 0;
  VAR_7->access = 0x10000;
  return (0);
 }


 VAR_9 = VAR_5->paging;
 VAR_9.cpl = 0;
 VAR_11 = FUNC_7(VAR_4, &VAR_9, VAR_16, &VAR_10, VAR_8);
 if (VAR_11 || *VAR_8)
  return (VAR_11);


 if ((VAR_18 && !FUNC_8(VAR_10.sd_type)) ||
     (VAR_19 && !FUNC_4(VAR_10.sd_type)) ||
     (VAR_21 && !FUNC_5(VAR_10.sd_type)) ||
     (VAR_20 && !FUNC_10(VAR_10.sd_type))) {
  FUNC_9(VAR_4, VAR_2, VAR_16, VAR_5->ext);
  return (1);
 }


 if (!VAR_10.sd_p) {
  if (VAR_18)
   VAR_12 = VAR_2;
  else if (VAR_20)
   VAR_12 = VAR_1;
  else
   VAR_12 = VAR_0;
  FUNC_9(VAR_4, VAR_12, VAR_16, VAR_5->ext);
  return (1);
 }

 VAR_17 = (uint16_t) FUNC_0(VAR_4, 134);
 VAR_13 = VAR_17 & VAR_3;
 VAR_15 = VAR_16 & VAR_3;
 VAR_14 = VAR_10.sd_dpl;

 if (VAR_20 && (VAR_15 != VAR_13 || VAR_14 != VAR_13)) {
  FUNC_9(VAR_4, VAR_2, VAR_16, VAR_5->ext);
  return (1);
 }

 if (VAR_19) {
  VAR_22 = (VAR_10.sd_type & 0x4) ? 1 : 0;
  if ((VAR_22 && (VAR_13 < VAR_14)) ||
      (!VAR_22 && (VAR_13 != VAR_14))) {
   FUNC_9(VAR_4, VAR_2, VAR_16, VAR_5->ext);
   return (1);
  }
 }

 if (VAR_21) {




  if (FUNC_4(VAR_10.sd_type) && (VAR_10.sd_type & 0x4) != 0)
   VAR_22 = 1;
  else
   VAR_22 = 0;

  if (!VAR_22 && (VAR_15 > VAR_14 || VAR_13 > VAR_14)) {
   FUNC_9(VAR_4, VAR_2, VAR_16, VAR_5->ext);
   return (1);
  }
 }
 *VAR_7 = FUNC_11(&VAR_10);
 return (0);
}
