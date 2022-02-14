
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef void BYTE ;


 unsigned long long FUNC_0 (int ) ;
 unsigned long long VAR_0 ;
 int const VAR_1 ;
 size_t FUNC_1 (void const*,size_t) ;
 size_t VAR_2 ;
 unsigned long long FUNC_2 (void const*,size_t) ;
 scalar_t__ FUNC_3 (size_t const) ;
 size_t FUNC_4 (void const*) ;
 size_t VAR_3 ;
 int VAR_4 ;

unsigned long long FUNC_5(const void *VAR_5, size_t VAR_6)
{
 {
  unsigned long long VAR_7 = 0;
  while (VAR_6 >= VAR_2) {
   const U32 VAR_8 = FUNC_4(VAR_5);

   if ((VAR_8 & 0xFFFFFFF0U) == VAR_1) {
    size_t VAR_9;
    if (VAR_6 < VAR_3)
     return FUNC_0(VAR_4);
    VAR_9 = FUNC_4((const BYTE *)VAR_5 + 4) + VAR_3;
    if (VAR_6 < VAR_9) {
     return VAR_0;
    }

    VAR_5 = (const BYTE *)VAR_5 + VAR_9;
    VAR_6 -= VAR_9;
    continue;
   }

   {
    unsigned long long const VAR_10 = FUNC_2(VAR_5, VAR_6);
    if (VAR_10 >= VAR_0)
     return VAR_10;


    if (VAR_7 + VAR_10 < VAR_7)
     return VAR_0;
    VAR_7 += VAR_10;
   }
   {
    size_t const VAR_11 = FUNC_1(VAR_5, VAR_6);
    if (FUNC_3(VAR_11)) {
     return VAR_0;
    }

    VAR_5 = (const BYTE *)VAR_5 + VAR_11;
    VAR_6 -= VAR_11;
   }
  }

  if (VAR_6) {
   return VAR_0;
  }

  return VAR_7;
 }
}
