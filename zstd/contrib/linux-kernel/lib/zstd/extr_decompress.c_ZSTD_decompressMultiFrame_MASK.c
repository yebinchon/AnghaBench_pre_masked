
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_DDict ;
typedef int ZSTD_DCtx ;
typedef int U32 ;
typedef void BYTE ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 void* FUNC_2 (int const*) ;
 size_t FUNC_3 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (int *,void const*,size_t) ;
 size_t FUNC_6 (int *,void*,size_t,void const**,size_t*) ;
 size_t VAR_3 ;
 scalar_t__ FUNC_7 (size_t const) ;
 size_t FUNC_8 (void const*) ;
 int FUNC_9 (int *,int const*) ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static size_t FUNC_10(ZSTD_DCtx *VAR_7, void *VAR_8, size_t VAR_9, const void *VAR_10, size_t VAR_11, const void *VAR_12, size_t VAR_13,
     const ZSTD_DDict *VAR_14)
{
 void *const VAR_15 = VAR_8;

 if (VAR_14) {
  if (VAR_12) {

   return FUNC_1(VAR_0);
  }

  VAR_12 = FUNC_2(VAR_14);
  VAR_13 = FUNC_3(VAR_14);
 }

 while (VAR_11 >= VAR_3) {
  U32 VAR_16;

  VAR_16 = FUNC_8(VAR_10);
  if (VAR_16 != VAR_1) {
   if ((VAR_16 & 0xFFFFFFF0U) == VAR_2) {
    size_t VAR_17;
    if (VAR_11 < VAR_4)
     return FUNC_1(VAR_6);
    VAR_17 = FUNC_8((const BYTE *)VAR_10 + 4) + VAR_4;
    if (VAR_11 < VAR_17) {
     return FUNC_1(VAR_6);
    }

    VAR_10 = (const BYTE *)VAR_10 + VAR_17;
    VAR_11 -= VAR_17;
    continue;
   } else {
    return FUNC_1(VAR_5);
   }
  }

  if (VAR_14) {

   FUNC_9(VAR_7, VAR_14);
  } else {


   FUNC_0(FUNC_5(VAR_7, VAR_12, VAR_13));
  }
  FUNC_4(VAR_7, VAR_8);

  {
   const size_t VAR_18 = FUNC_6(VAR_7, VAR_8, VAR_9, &VAR_10, &VAR_11);
   if (FUNC_7(VAR_18))
    return VAR_18;


   VAR_8 = (BYTE *)VAR_8 + VAR_18;
   VAR_9 -= VAR_18;
  }
 }

 if (VAR_11)
  return FUNC_1(VAR_6);

 return (BYTE *)VAR_8 - (BYTE *)VAR_15;
}
