
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ y ;
typedef scalar_t__ x ;
typedef int ptrdiff_t ;
typedef int n ;
typedef int __m128d ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (double const) ;
 int FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(double *VAR_0, const double *VAR_1, const double VAR_2, const ptrdiff_t VAR_3) {
  ptrdiff_t VAR_4;
  __m128d VAR_5 = FUNC_2(VAR_2);
  for (VAR_4=0; VAR_4<=((VAR_3)-8); VAR_4+=8) {
    __m128d VAR_6 = FUNC_0((VAR_1)+VAR_4 );
    __m128d VAR_7 = FUNC_0((VAR_1)+VAR_4+2);
    __m128d VAR_8 = FUNC_0((VAR_1)+VAR_4+4);
    __m128d VAR_9 = FUNC_0((VAR_1)+VAR_4+6);
    __m128d VAR_10 = FUNC_1(VAR_5, VAR_6);
    __m128d VAR_11 = FUNC_1(VAR_5, VAR_7);
    __m128d VAR_12 = FUNC_1(VAR_5, VAR_8);
    __m128d VAR_13 = FUNC_1(VAR_5, VAR_9);
    FUNC_3((VAR_0)+VAR_4 , VAR_10);
    FUNC_3((VAR_0)+VAR_4+2, VAR_11);
    FUNC_3((VAR_0)+VAR_4+4, VAR_12);
    FUNC_3((VAR_0)+VAR_4+6, VAR_13);
  }
  for (; VAR_4<(VAR_3); VAR_4++) {
    VAR_0[VAR_4] = VAR_1[VAR_4] * VAR_2;
  }
}
