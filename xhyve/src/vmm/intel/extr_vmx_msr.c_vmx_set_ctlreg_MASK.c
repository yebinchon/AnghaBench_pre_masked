
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int hv_vmx_capability_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(hv_vmx_capability_t VAR_2, uint32_t VAR_3,
 uint32_t VAR_4, uint32_t *VAR_5)
{
 int VAR_6;
 uint64_t VAR_7;
 bool VAR_8, VAR_9;


 if ((VAR_3 ^ VAR_4) != (VAR_3 | VAR_4)) {
  return VAR_0;
 }

 if (FUNC_1(VAR_2, &VAR_7)) {
  return VAR_0;
 }

 for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
  VAR_8 = FUNC_2(VAR_7, VAR_6);
  VAR_9 = FUNC_3(VAR_7, VAR_6);

  if (VAR_9 && !VAR_8) {

   if (VAR_3 & (1 << VAR_6)) {
    FUNC_0(VAR_1,
     "vmx_set_ctlreg: cap_field: %d bit: %d must be zero\n",
     VAR_2, VAR_6);
    return (VAR_0);
   }
   *VAR_5 &= ~(1 << VAR_6);
  } else if (VAR_8 && !VAR_9) {

   if (VAR_4 & (1 << VAR_6)) {
    FUNC_0(VAR_1,
     "vmx_set_ctlreg: cap_field: %d bit: %d must be one\n",
     VAR_2, VAR_6);
    return (VAR_0);
   }
   *VAR_5 |= 1 << VAR_6;
  } else {

   if (VAR_4 & (1 << VAR_6)){
    *VAR_5 &= ~(1 << VAR_6);
   } else if (VAR_3 & (1 << VAR_6)) {
    *VAR_5 |= 1 << VAR_6;
   } else {

    FUNC_0(VAR_1,
     "vmx_set_ctlreg: cap_field: %d bit: %d unspecified "
     "don't care\n", VAR_2, VAR_6);
    return (VAR_0);
   }
  }
 }

 return (0);
}
