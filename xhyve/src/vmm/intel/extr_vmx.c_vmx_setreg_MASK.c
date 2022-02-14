
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmx {int dummy; } ;
typedef scalar_t__ hv_x86_reg_t ;
typedef int hv_vcpuid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 scalar_t__* VAR_9 ;
 int FUNC_2 (int,scalar_t__,int) ;
 int FUNC_3 (int,int,int*) ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (struct vmx*,int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(void *VAR_10, int VAR_11, int VAR_12, uint64_t VAR_13)
{
 int VAR_14, VAR_15;
 uint64_t VAR_16;
 hv_x86_reg_t VAR_17;
 struct vmx *VAR_18 = VAR_10;

 if (VAR_12 == VAR_7)
  return (FUNC_5(VAR_18, VAR_11, VAR_13));

 VAR_17 = VAR_9[VAR_12];
 if (VAR_17 != VAR_1) {
  FUNC_2(VAR_11, VAR_17, VAR_13);
  return (0);
 }

 VAR_14 = FUNC_4(VAR_11, VAR_12, VAR_13);

 if (VAR_14 == 0) {





  if ((VAR_8 & VAR_4) != 0 &&
      (VAR_12 == VAR_6)) {
   FUNC_3(VAR_11, FUNC_0(VAR_2), &VAR_16);
   if (VAR_13 & VAR_0)
    VAR_16 |= VAR_3;
   else
    VAR_16 &= ~VAR_3;
   FUNC_4(VAR_11, FUNC_0(VAR_2), VAR_16);
  }

  VAR_15 = FUNC_6(VAR_12);
  if (VAR_15 > 0) {



   VAR_14 = FUNC_4(VAR_11, FUNC_0(VAR_15), VAR_13);
  }

  if (VAR_12 == VAR_5) {




   FUNC_1((hv_vcpuid_t) VAR_11);
  }
 }

 return (VAR_14);
}
