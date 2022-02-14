
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ x ;
typedef int ptrdiff_t ;
typedef int n ;
typedef int __m128 ;


 int FUNC_0 (float const) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(float *VAR_0, const float VAR_1, const ptrdiff_t VAR_2) {
  ptrdiff_t VAR_3;
  __m128 VAR_4 = FUNC_0(VAR_1);
  ptrdiff_t VAR_5;
  for (VAR_3=0; VAR_3<=((VAR_2)-16); VAR_3+=16) {
    FUNC_1((VAR_0)+VAR_3 , VAR_4);
    FUNC_1((VAR_0)+VAR_3+4, VAR_4);
    FUNC_1((VAR_0)+VAR_3+8, VAR_4);
    FUNC_1((VAR_0)+VAR_3+12, VAR_4);
  }
  VAR_5 = (VAR_2) - ((VAR_2)%16);
  for (VAR_3=0; VAR_3<((VAR_2)%16); VAR_3++) {
    VAR_0[VAR_5+VAR_3] = VAR_1;
  }
}
