
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(float *VAR_0, const float VAR_1, const ptrdiff_t VAR_2) {
  long VAR_3 = 0;

  for(; VAR_3 < VAR_2-4; VAR_3 += 4)
  {
    VAR_0[VAR_3] = VAR_1;
    VAR_0[VAR_3+1] = VAR_1;
    VAR_0[VAR_3+2] = VAR_1;
    VAR_0[VAR_3+3] = VAR_1;
  }

  for(; VAR_3 < VAR_2; VAR_3++)
    VAR_0[VAR_3] = VAR_1;

}
