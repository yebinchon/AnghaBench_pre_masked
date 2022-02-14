
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static
void
FUNC_0(const int *VAR_0, int *VAR_1, int *VAR_2) {
  int *VAR_3, *VAR_4;
  int VAR_5, VAR_6;

  for(VAR_3 = VAR_1 + 1; VAR_3 < VAR_2; ++VAR_3) {
    for(VAR_5 = *VAR_3, VAR_4 = VAR_3 - 1; 0 > (VAR_6 = VAR_0[VAR_5] - VAR_0[*VAR_4]);) {
      do { *(VAR_4 + 1) = *VAR_4; } while((VAR_1 <= --VAR_4) && (*VAR_4 < 0));
      if(VAR_4 < VAR_1) { break; }
    }
    if(VAR_6 == 0) { *VAR_4 = ~*VAR_4; }
    *(VAR_4 + 1) = VAR_5;
  }
}
