
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ y ;
typedef scalar_t__ x ;
typedef int ptrdiff_t ;
typedef int n ;
typedef int __m128 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (float const) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(float *VAR_0, const float *VAR_1, const float VAR_2, const ptrdiff_t VAR_3) {
  ptrdiff_t VAR_4;
  __m128 VAR_5 = FUNC_2(VAR_2);
  __m128 VAR_6, VAR_7;
  for (VAR_4=0; VAR_4<=((VAR_3)-8); VAR_4+=8) {
    VAR_6 = FUNC_1((VAR_1)+VAR_4);
    VAR_7 = FUNC_1((VAR_1)+VAR_4+4);
    VAR_6 = FUNC_0(VAR_6, VAR_5);
    VAR_7 = FUNC_0(VAR_7, VAR_5);
    FUNC_3((VAR_0)+VAR_4, VAR_6);
    FUNC_3((VAR_0)+VAR_4+4, VAR_7);
  }
  for (; VAR_4<(VAR_3); VAR_4++) {
    VAR_0[VAR_4] = VAR_1[VAR_4] + VAR_2;
  }
}
