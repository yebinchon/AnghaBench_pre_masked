
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U16 ;
typedef int HUF_CElt ;
typedef int BYTE ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,int,int const*,size_t const,int const*) ;
 int FUNC_2 (int * const,int ) ;
 scalar_t__ VAR_0 ;

size_t FUNC_3(void *VAR_1, size_t VAR_2, const void *VAR_3, size_t VAR_4, const HUF_CElt *VAR_5)
{
 size_t const VAR_6 = (VAR_4 + 3) / 4;
 const BYTE *VAR_7 = (const BYTE *)VAR_3;
 const BYTE *const VAR_8 = VAR_7 + VAR_4;
 BYTE *const VAR_9 = (BYTE *)VAR_1;
 BYTE *const VAR_10 = VAR_9 + VAR_2;
 BYTE *VAR_11 = VAR_9;

 if (VAR_2 < 6 + 1 + 1 + 1 + 8)
  return 0;
 if (VAR_4 < 12)
  return 0;
 VAR_11 += 6;

 {
  FUNC_0(VAR_0, FUNC_1(VAR_11, VAR_10 - VAR_11, VAR_7, VAR_6, VAR_5));
  if (VAR_0 == 0)
   return 0;
  FUNC_2(VAR_9, (U16)VAR_0);
  VAR_11 += VAR_0;
 }

 VAR_7 += VAR_6;
 {
  FUNC_0(VAR_0, FUNC_1(VAR_11, VAR_10 - VAR_11, VAR_7, VAR_6, VAR_5));
  if (VAR_0 == 0)
   return 0;
  FUNC_2(VAR_9 + 2, (U16)VAR_0);
  VAR_11 += VAR_0;
 }

 VAR_7 += VAR_6;
 {
  FUNC_0(VAR_0, FUNC_1(VAR_11, VAR_10 - VAR_11, VAR_7, VAR_6, VAR_5));
  if (VAR_0 == 0)
   return 0;
  FUNC_2(VAR_9 + 4, (U16)VAR_0);
  VAR_11 += VAR_0;
 }

 VAR_7 += VAR_6;
 {
  FUNC_0(VAR_0, FUNC_1(VAR_11, VAR_10 - VAR_11, VAR_7, VAR_8 - VAR_7, VAR_5));
  if (VAR_0 == 0)
   return 0;
  VAR_11 += VAR_0;
 }

 return VAR_11 - VAR_9;
}
