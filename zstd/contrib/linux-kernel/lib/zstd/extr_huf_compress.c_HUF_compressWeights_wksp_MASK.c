
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int S16 ;
typedef int FSE_CTable ;
typedef int BYTE ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t,int ) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int *,int *,int,int,void*,size_t) ;
 int FUNC_6 (int *,int,void const*,size_t,int *) ;
 int FUNC_7 (int*,int*,void const*,size_t) ;
 int FUNC_8 (int *,int,int*,size_t,int) ;
 int FUNC_9 (int,size_t,int) ;
 int FUNC_10 (int *,int,int *,int,int) ;
 int FUNC_11 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;

size_t FUNC_12(void *VAR_6, size_t VAR_7, const void *VAR_8, size_t VAR_9, void *VAR_10, size_t VAR_11)
{
 BYTE *const VAR_12 = (BYTE *)VAR_6;
 BYTE *VAR_13 = VAR_12;
 BYTE *const VAR_14 = VAR_12 + VAR_7;

 U32 VAR_15 = VAR_0;
 U32 VAR_16 = VAR_1;

 FSE_CTable *VAR_17;
 U32 *VAR_18;
 S16 *VAR_19;
 size_t VAR_20 = 0;

 FUNC_11(sizeof(FSE_CTable) == sizeof(U32));

 VAR_17 = (FSE_CTable *)((U32 *)VAR_10 + VAR_20);
 VAR_20 += FUNC_4(VAR_1, VAR_0);
 VAR_18 = (U32 *)VAR_10 + VAR_20;
 VAR_20 += VAR_0 + 1;
 VAR_19 = (S16 *)((U32 *)VAR_10 + VAR_20);
 VAR_20 += FUNC_0(sizeof(S16) * (VAR_0 + 1), sizeof(U32)) >> 2;

 if ((VAR_20 << 2) > VAR_11)
  return FUNC_3(VAR_5);
 VAR_10 = (U32 *)VAR_10 + VAR_20;
 VAR_11 -= (VAR_20 << 2);


 if (VAR_9 <= 1)
  return 0;


 {
  FUNC_2(VAR_4, FUNC_7(VAR_18, &VAR_15, VAR_8, VAR_9));
  if (VAR_4 == VAR_9)
   return 1;
  if (VAR_4 == 1)
   return 0;
 }

 VAR_16 = FUNC_9(VAR_16, VAR_9, VAR_15);
 FUNC_1(FUNC_8(VAR_19, VAR_16, VAR_18, VAR_9, VAR_15));


 {
  FUNC_2(VAR_3, FUNC_10(VAR_13, VAR_14 - VAR_13, VAR_19, VAR_15, VAR_16));
  VAR_13 += VAR_3;
 }


 FUNC_1(FUNC_5(VAR_17, VAR_19, VAR_15, VAR_16, VAR_10, VAR_11));
 {
  FUNC_2(VAR_2, FUNC_6(VAR_13, VAR_14 - VAR_13, VAR_8, VAR_9, VAR_17));
  if (VAR_2 == 0)
   return 0;
  VAR_13 += VAR_2;
 }

 return VAR_13 - VAR_12;
}
