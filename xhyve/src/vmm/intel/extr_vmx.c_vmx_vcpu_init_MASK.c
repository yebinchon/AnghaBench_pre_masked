
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
struct vmx {TYPE_2__* state; TYPE_1__* cap; } ;
typedef scalar_t__ hv_vcpuid_t ;
struct TYPE_4__ {int nextrip; } ;
struct TYPE_3__ {void* proc_ctls2; void* proc_ctls; scalar_t__ set; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 void* VAR_15 ;
 void* VAR_16 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int) ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int ,void*) ;
 int FUNC_4 (struct vmx*,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int
FUNC_8(void *VAR_20, int VAR_21) {
 uint32_t VAR_22;
 struct vmx *VAR_23;
 hv_vcpuid_t VAR_24;
 int VAR_25;

 VAR_23 = (struct vmx *) VAR_20;

 if (FUNC_0(&VAR_24, VAR_0)) {
  FUNC_7("hv_vcpu_create failed\n");
 }

 if (VAR_24 != ((hv_vcpuid_t) VAR_21)) {

  FUNC_7("vcpu id mismatch\n");
 }

 if (FUNC_1(VAR_24, VAR_3, 1) ||
  FUNC_1(VAR_24, VAR_2, 1) ||
  FUNC_1(VAR_24, VAR_5, 1) ||
  FUNC_1(VAR_24, VAR_7, 1) ||
  FUNC_1(VAR_24, VAR_6, 1) ||
  FUNC_1(VAR_24, VAR_8, 1) ||
  FUNC_1(VAR_24, VAR_4, 1))
 {
  FUNC_7("vmx_vcpu_init: error setting guest msr access\n");
 }

 FUNC_4(VAR_23, VAR_21);

 FUNC_3(VAR_21, VAR_12, VAR_17);
 FUNC_3(VAR_21, VAR_13, VAR_18);
 FUNC_3(VAR_21, VAR_14, VAR_19);
 FUNC_3(VAR_21, VAR_11, VAR_16);
 FUNC_3(VAR_21, VAR_9, VAR_15);


 if (FUNC_2())
  VAR_22 = 0xffffffff;
 else
  VAR_22 = 1 << VAR_1;

 FUNC_3(VAR_21, VAR_10, VAR_22);

 VAR_23->cap[VAR_21].set = 0;
 VAR_23->cap[VAR_21].proc_ctls = VAR_18;
 VAR_23->cap[VAR_21].proc_ctls2 = VAR_19;
 VAR_23->state[VAR_21].nextrip = ~(uint64_t) 0;







 VAR_25 = FUNC_5(VAR_21, 0x60000010);
 if (VAR_25 != 0)
  FUNC_7("vmx_setup_cr0_shadow %d\n", VAR_25);

 VAR_25 = FUNC_6(VAR_21, 0);

 if (VAR_25 != 0)
  FUNC_7("vmx_setup_cr4_shadow %d\n", VAR_25);

 return (0);
}
