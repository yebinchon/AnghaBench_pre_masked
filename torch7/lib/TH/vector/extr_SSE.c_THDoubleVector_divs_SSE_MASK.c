
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int n ;
typedef int __m128d ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (double const*) ;
 int FUNC_2 (double const) ;
 int FUNC_3 (double*,int ) ;

__attribute__((used)) static void FUNC_4(double *VAR_0, const double *VAR_1, const double VAR_2, const ptrdiff_t VAR_3) {
  ptrdiff_t VAR_4;
  __m128d VAR_5 = FUNC_2(VAR_2);
  __m128d VAR_6, VAR_7;
  for (VAR_4=0; VAR_4<=((VAR_3)-4); VAR_4+=4) {
    VAR_6 = FUNC_1(VAR_1+VAR_4);
    VAR_7 = FUNC_1(VAR_1+VAR_4+2);
    VAR_6 = FUNC_0(VAR_6, VAR_5);
    VAR_7 = FUNC_0(VAR_7, VAR_5);
    FUNC_3(VAR_0+VAR_4, VAR_6);
    FUNC_3(VAR_0+VAR_4+2, VAR_7);
  }
  for (; VAR_4<(VAR_3); VAR_4++) {
    VAR_0[VAR_4] = VAR_1[VAR_4] / VAR_2;
  }
}
