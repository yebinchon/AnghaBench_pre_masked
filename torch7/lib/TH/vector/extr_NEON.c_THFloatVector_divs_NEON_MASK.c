
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(float *VAR_0, const float *VAR_1, const float VAR_2, const ptrdiff_t VAR_3) {
  long VAR_4 = 0;

  for(;VAR_4 < VAR_3-4; VAR_4 += 4)
  {
    VAR_0[VAR_4] = VAR_1[VAR_4] / VAR_2;
    VAR_0[VAR_4+1] = VAR_1[VAR_4+1] / VAR_2;
    VAR_0[VAR_4+2] = VAR_1[VAR_4+2] / VAR_2;
    VAR_0[VAR_4+3] = VAR_1[VAR_4+3] / VAR_2;
  }

  for(; VAR_4 < VAR_3; VAR_4++)
    VAR_0[VAR_4] = VAR_1[VAR_4] / VAR_2;
}
