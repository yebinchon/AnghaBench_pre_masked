
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int huffNodeTable ;
typedef unsigned int U32 ;
typedef scalar_t__ HUF_repeat ;
typedef int HUF_CElt ;
typedef int BYTE ;


 int FUNC_0 (size_t const,int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (unsigned int*,unsigned int*,int const*,size_t,unsigned int*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_3 (int *,unsigned int*,unsigned int,unsigned int,void*,size_t) ;
 size_t FUNC_4 (int * const,int *,int * const,void const*,size_t,unsigned int,int *) ;
 size_t FUNC_5 (int *,unsigned int*,unsigned int) ;
 unsigned int FUNC_6 (unsigned int,size_t,unsigned int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *,unsigned int*,unsigned int) ;
 int FUNC_8 (int *,size_t,int *,unsigned int,unsigned int,void*,size_t) ;
 size_t const VAR_8 ;
 size_t VAR_9 ;
 size_t const VAR_10 ;
 int FUNC_9 (int *,int *,size_t const) ;
 int FUNC_10 (int *,int ,size_t const) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static size_t FUNC_11(void *VAR_13, size_t VAR_14, const void *VAR_15, size_t VAR_16, unsigned VAR_17, unsigned VAR_18,
        unsigned VAR_19, void *VAR_20, size_t VAR_21, HUF_CElt *VAR_22, HUF_repeat *VAR_23, int VAR_24)
{
 BYTE *const VAR_25 = (BYTE *)VAR_13;
 BYTE *const VAR_26 = VAR_25 + VAR_14;
 BYTE *VAR_27 = VAR_25;

 U32 *VAR_28;
 size_t const VAR_29 = sizeof(U32) * (VAR_2 + 1);
 HUF_CElt *VAR_30;
 size_t const VAR_31 = sizeof(HUF_CElt) * (VAR_2 + 1);


 if (VAR_21 < sizeof(huffNodeTable) + VAR_29 + VAR_31)
  return FUNC_1(VAR_0);
 if (!VAR_16)
  return 0;
 if (!VAR_14)
  return 0;
 if (VAR_16 > VAR_1)
  return FUNC_1(VAR_11);
 if (VAR_18 > VAR_4)
  return FUNC_1(VAR_12);
 if (!VAR_17)
  VAR_17 = VAR_2;
 if (!VAR_18)
  VAR_18 = VAR_3;

 VAR_28 = (U32 *)VAR_20;
 VAR_20 = (BYTE *)VAR_20 + VAR_29;
 VAR_21 -= VAR_29;
 VAR_30 = (HUF_CElt *)VAR_20;
 VAR_20 = (BYTE *)VAR_20 + VAR_31;
 VAR_21 -= VAR_31;


 if (VAR_24 && VAR_23 && *VAR_23 == VAR_7) {
  return FUNC_4(VAR_25, VAR_27, VAR_26, VAR_15, VAR_16, VAR_19, VAR_22);
 }


 {
  FUNC_0(VAR_9, FUNC_2(VAR_28, &VAR_17, (const BYTE *)VAR_15, VAR_16, (U32 *)VAR_20));
  if (VAR_9 == VAR_16) {
   *VAR_25 = ((const BYTE *)VAR_15)[0];
   return 1;
  }
  if (VAR_9 <= (VAR_16 >> 7) + 1)
   return 0;
 }


 if (VAR_23 && *VAR_23 == VAR_5 && !FUNC_7(VAR_22, VAR_28, VAR_17)) {
  *VAR_23 = VAR_6;
 }

 if (VAR_24 && VAR_23 && *VAR_23 != VAR_6) {
  return FUNC_4(VAR_25, VAR_27, VAR_26, VAR_15, VAR_16, VAR_19, VAR_22);
 }


 VAR_18 = FUNC_6(VAR_18, VAR_16, VAR_17);
 {
  FUNC_0(VAR_10, FUNC_3(VAR_30, VAR_28, VAR_17, VAR_18, VAR_20, VAR_21));
  VAR_18 = (U32)VAR_10;

  FUNC_10(VAR_30 + VAR_17 + 1, 0, VAR_31 - (VAR_17 + 1) * sizeof(HUF_CElt));
 }


 {
  FUNC_0(VAR_8, FUNC_8(VAR_27, VAR_14, VAR_30, VAR_17, VAR_18, VAR_20, VAR_21));

  if (VAR_23 && *VAR_23 != VAR_6) {
   size_t const VAR_32 = FUNC_5(VAR_22, VAR_28, VAR_17);
   size_t const VAR_33 = FUNC_5(VAR_30, VAR_28, VAR_17);
   if (VAR_32 <= VAR_8 + VAR_33 || VAR_8 + 12 >= VAR_16) {
    return FUNC_4(VAR_25, VAR_27, VAR_26, VAR_15, VAR_16, VAR_19, VAR_22);
   }
  }

  if (VAR_8 + 12ul >= VAR_16) {
   return 0;
  }
  VAR_27 += VAR_8;
  if (VAR_23) {
   *VAR_23 = VAR_6;
  }
  if (VAR_22) {
   FUNC_9(VAR_22, VAR_30, VAR_31);
  }
 }
 return FUNC_4(VAR_25, VAR_27, VAR_26, VAR_15, VAR_16, VAR_19, VAR_30);
}
