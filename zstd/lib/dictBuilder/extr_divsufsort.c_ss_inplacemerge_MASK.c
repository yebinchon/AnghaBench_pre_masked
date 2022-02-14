
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*,int const*,int const*,int) ;
 int FUNC_1 (int*,int*,int*) ;

__attribute__((used)) static
void
FUNC_2(const unsigned char *VAR_0, const int *VAR_1,
                int *VAR_2, int *VAR_3, int *VAR_4,
                int VAR_5) {
  const int *VAR_6;
  int *VAR_7, *VAR_8;
  int VAR_9, VAR_10;
  int VAR_11, VAR_12;
  int VAR_13;

  for(;;) {
    if(*(VAR_4 - 1) < 0) { VAR_13 = 1; VAR_6 = VAR_1 + ~*(VAR_4 - 1); }
    else { VAR_13 = 0; VAR_6 = VAR_1 + *(VAR_4 - 1); }
    for(VAR_7 = VAR_2, VAR_9 = VAR_3 - VAR_2, VAR_10 = VAR_9 >> 1, VAR_12 = -1;
        0 < VAR_9;
        VAR_9 = VAR_10, VAR_10 >>= 1) {
      VAR_8 = VAR_7 + VAR_10;
      VAR_11 = FUNC_0(VAR_0, VAR_1 + ((0 <= *VAR_8) ? *VAR_8 : ~*VAR_8), VAR_6, VAR_5);
      if(VAR_11 < 0) {
        VAR_7 = VAR_8 + 1;
        VAR_10 -= (VAR_9 & 1) ^ 1;
      } else {
        VAR_12 = VAR_11;
      }
    }
    if(VAR_7 < VAR_3) {
      if(VAR_12 == 0) { *VAR_7 = ~*VAR_7; }
      FUNC_1(VAR_7, VAR_3, VAR_4);
      VAR_4 -= VAR_3 - VAR_7;
      VAR_3 = VAR_7;
      if(VAR_2 == VAR_3) { break; }
    }
    --VAR_4;
    if(VAR_13 != 0) { while(*--VAR_4 < 0) { } }
    if(VAR_3 == VAR_4) { break; }
  }
}
