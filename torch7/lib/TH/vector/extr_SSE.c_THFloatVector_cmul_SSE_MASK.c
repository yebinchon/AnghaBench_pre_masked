
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ z ;
typedef scalar_t__ y ;
typedef scalar_t__ x ;
typedef int ptrdiff_t ;
typedef int n ;
typedef int __m128 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(float *VAR_0, const float *VAR_1, const float *VAR_2, const ptrdiff_t VAR_3) {
  ptrdiff_t VAR_4;
  for (VAR_4=0; VAR_4<=((VAR_3)-16); VAR_4+=16) {
    __m128 VAR_5 = FUNC_0((VAR_1)+VAR_4 );
    __m128 VAR_6 = FUNC_0((VAR_1)+VAR_4+ 4);
    __m128 VAR_7 = FUNC_0((VAR_1)+VAR_4+ 8);
    __m128 VAR_8 = FUNC_0((VAR_1)+VAR_4+12);
    __m128 VAR_9 = FUNC_0((VAR_2)+VAR_4 );
    __m128 VAR_10 = FUNC_0((VAR_2)+VAR_4+ 4);
    __m128 VAR_11 = FUNC_0((VAR_2)+VAR_4+ 8);
    __m128 VAR_12 = FUNC_0((VAR_2)+VAR_4+12);
    VAR_9 = FUNC_1(VAR_9, VAR_5);
    VAR_10 = FUNC_1(VAR_10, VAR_6);
    VAR_11 = FUNC_1(VAR_11, VAR_7);
    VAR_12 = FUNC_1(VAR_12, VAR_8);
    FUNC_2((VAR_0)+VAR_4 , VAR_9);
    FUNC_2((VAR_0)+VAR_4+ 4, VAR_10);
    FUNC_2((VAR_0)+VAR_4+ 8, VAR_11);
    FUNC_2((VAR_0)+VAR_4+12, VAR_12);
  }
  for (; VAR_4<(VAR_3); VAR_4++) {
    VAR_0[VAR_4] = VAR_1[VAR_4] * VAR_2[VAR_4];
  }
}
