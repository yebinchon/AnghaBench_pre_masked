
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct vm_guest_paging {int cpu_mode; } ;
struct vie {scalar_t__ num_valid; int num_processed; } ;
struct TYPE_3__ {scalar_t__ gla; scalar_t__ gpa; scalar_t__ cs_base; int cs_d; struct vm_guest_paging paging; struct vie vie; } ;
struct TYPE_4__ {TYPE_1__ inst_emul; } ;
struct vm_exit {int inst_length; scalar_t__ rip; TYPE_2__ u; } ;
struct vm {struct vcpu* vcpu; } ;
struct vcpu {int nextrip; struct vm_exit exitinfo; } ;
typedef int mem_region_write_t ;
typedef int mem_region_read_t ;
typedef enum vm_cpu_mode { ____Placeholder_vm_cpu_mode } vm_cpu_mode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vm*,int,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct vm*,int,scalar_t__,int,int,struct vie*) ;
 int FUNC_2 (struct vm*,int,scalar_t__,struct vie*,struct vm_guest_paging*,int ,int ,int*) ;
 int FUNC_3 (struct vm*,int,struct vm_guest_paging*,scalar_t__,int,struct vie*,int*) ;

__attribute__((used)) static int
FUNC_4(struct vm *VAR_13, int VAR_14, bool *VAR_15)
{
 struct vie *VAR_16;
 struct vcpu *VAR_17;
 struct vm_exit *VAR_18;
 uint64_t VAR_19, VAR_20, VAR_21;
 struct vm_guest_paging *VAR_22;
 mem_region_read_t VAR_23;
 mem_region_write_t VAR_24;
 enum vm_cpu_mode VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29;

 VAR_17 = &VAR_13->vcpu[VAR_14];
 VAR_18 = &VAR_17->exitinfo;

 VAR_19 = VAR_18->u.inst_emul.gla;
 VAR_20 = VAR_18->u.inst_emul.gpa;
 VAR_21 = VAR_18->u.inst_emul.cs_base;
 VAR_26 = VAR_18->u.inst_emul.cs_d;
 VAR_16 = &VAR_18->u.inst_emul.vie;
 VAR_22 = &VAR_18->u.inst_emul.paging;
 VAR_25 = VAR_22->cpu_mode;

 FUNC_0(VAR_13, VAR_14, "inst_emul fault accessing gpa %#llx", VAR_20);


 if (VAR_16->num_valid == 0) {




  VAR_29 = VAR_18->inst_length ? VAR_18->inst_length : VAR_3;
  VAR_27 = FUNC_3(VAR_13, VAR_14, VAR_22, VAR_18->rip +
      VAR_21, VAR_29, VAR_16, &VAR_28);
 } else {



  VAR_27 = VAR_28 = 0;
 }
 if (VAR_27 || VAR_28)
  return (VAR_27);

 if (FUNC_1(VAR_13, VAR_14, VAR_19, VAR_25, VAR_26, VAR_16) != 0) {
  FUNC_0(VAR_13, VAR_14, "Error decoding instruction at %#llx",
      VAR_18->rip + VAR_21);
  *VAR_15 = 1;
  return (0);
 }





 if (VAR_18->inst_length == 0) {
  VAR_18->inst_length = VAR_16->num_processed;
  VAR_17->nextrip += VAR_16->num_processed;
 }


 if (VAR_20 >= VAR_0 && VAR_20 < VAR_0 + VAR_6) {
  VAR_23 = VAR_7;
  VAR_24 = VAR_8;
 } else if (VAR_20 >= VAR_4 && VAR_20 < VAR_4 + VAR_5) {
  VAR_23 = VAR_11;
  VAR_24 = VAR_12;
 } else if (VAR_20 >= VAR_1 && VAR_20 < VAR_1 + VAR_2) {
  VAR_23 = VAR_9;
  VAR_24 = VAR_10;
 } else {
  *VAR_15 = 1;
  return (0);
 }

 VAR_27 = FUNC_2(VAR_13, VAR_14, VAR_20, VAR_16, VAR_22,
     VAR_23, VAR_24, VAR_15);

 return (VAR_27);
}
