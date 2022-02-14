
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z ;
typedef int y ;
typedef int x ;
typedef int ptrdiff_t ;
typedef int n ;
typedef int __m128 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (float const) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(float *VAR_0, const float *VAR_1, const float *VAR_2, const float VAR_3, const ptrdiff_t VAR_4) {
  ptrdiff_t VAR_5;
  __m128 VAR_6 = FUNC_3(VAR_3);
  __m128 VAR_7, VAR_8;
  for (VAR_5=0; VAR_5<=((VAR_4)-4); VAR_5+=4) {
    VAR_7 = FUNC_1((VAR_1)+VAR_5);
    VAR_8 = FUNC_1((VAR_2)+VAR_5);
    VAR_8 = FUNC_2(VAR_8, VAR_6);
    VAR_8 = FUNC_0(VAR_7, VAR_8);
    FUNC_4((VAR_0)+VAR_5, VAR_8);
  }
  for (; VAR_5<(VAR_4); VAR_5++) {
    VAR_0[VAR_5] = VAR_1[VAR_5] + VAR_3 * VAR_2[VAR_5];
  }
}
