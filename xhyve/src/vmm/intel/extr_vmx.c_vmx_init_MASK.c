
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ) ;
 int VAR_31 ;
 int FUNC_1 (char*) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(void)
{
 int VAR_34 = FUNC_0(VAR_10);
 if (VAR_34) {
  if (VAR_34 == VAR_4) {
   FUNC_1("vmx_init: processor not supported by "
          "Hypervisor.framework\n");
   return (VAR_34);
  }
  else
   FUNC_4("hv_vm_create failed\n");
 }


 VAR_34 = FUNC_3(VAR_8,
          VAR_15,
          VAR_17, &VAR_32);
 if (VAR_34) {
  FUNC_1("vmx_init: processor does not support desired primary "
         "processor-based controls\n");
  return (VAR_34);
 }


 VAR_32 &= ~VAR_16;


 VAR_34 = FUNC_3(VAR_9,
          VAR_13,
          VAR_14, &VAR_33);
 if (VAR_34) {
  FUNC_1("vmx_init: processor does not support desired secondary "
         "processor-based controls\n");
  return (VAR_34);
 }


 VAR_34 = FUNC_3(VAR_7,
          VAR_11,
          VAR_12, &VAR_31);
 if (VAR_34) {
  FUNC_1("vmx_init: processor does not support desired "
         "pin-based controls\n");
  return (VAR_34);
 }


 VAR_34 = FUNC_3(VAR_6,
          VAR_20,
          VAR_21,
          &VAR_30);
 if (VAR_34) {
  FUNC_1("vmx_init: processor does not support desired "
      "exit controls\n");
  return (VAR_34);
 }


 VAR_34 = FUNC_3(VAR_5,
     VAR_18, VAR_19,
     &VAR_29);
 if (VAR_34) {
  FUNC_1("vmx_init: processor does not support desired "
      "entry controls\n");
  return (VAR_34);
 }





 VAR_22 = 1;
 VAR_23 = 1;
 VAR_24 = 1;




   VAR_25 = VAR_27 = 0;
   VAR_26 = VAR_28 = 0;

   VAR_25 |= (VAR_2 | VAR_1);
   VAR_26 |= (VAR_3 | VAR_0);
   VAR_27 = 0x2000;

 FUNC_2();

 return (0);
}
