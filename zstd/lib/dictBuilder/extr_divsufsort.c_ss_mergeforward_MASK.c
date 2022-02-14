
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (unsigned char const*,int const*,int const*,int) ;

__attribute__((used)) static
void
FUNC_2(const unsigned char *VAR_0, const int *VAR_1,
                int *VAR_2, int *VAR_3, int *VAR_4,
                int *VAR_5, int VAR_6) {
  int *VAR_7, *VAR_8, *VAR_9, *VAR_10;
  int VAR_11;
  int VAR_12;

  VAR_10 = VAR_5 + (VAR_3 - VAR_2) - 1;
  FUNC_0(VAR_5, VAR_2, VAR_3 - VAR_2);

  for(VAR_11 = *(VAR_7 = VAR_2), VAR_8 = VAR_5, VAR_9 = VAR_3;;) {
    VAR_12 = FUNC_1(VAR_0, VAR_1 + *VAR_8, VAR_1 + *VAR_9, VAR_6);
    if(VAR_12 < 0) {
      do {
        *VAR_7++ = *VAR_8;
        if(VAR_10 <= VAR_8) { *VAR_10 = VAR_11; return; }
        *VAR_8++ = *VAR_7;
      } while(*VAR_8 < 0);
    } else if(VAR_12 > 0) {
      do {
        *VAR_7++ = *VAR_9, *VAR_9++ = *VAR_7;
        if(VAR_4 <= VAR_9) {
          while(VAR_8 < VAR_10) { *VAR_7++ = *VAR_8, *VAR_8++ = *VAR_7; }
          *VAR_7 = *VAR_8, *VAR_8 = VAR_11;
          return;
        }
      } while(*VAR_9 < 0);
    } else {
      *VAR_9 = ~*VAR_9;
      do {
        *VAR_7++ = *VAR_8;
        if(VAR_10 <= VAR_8) { *VAR_10 = VAR_11; return; }
        *VAR_8++ = *VAR_7;
      } while(*VAR_8 < 0);

      do {
        *VAR_7++ = *VAR_9, *VAR_9++ = *VAR_7;
        if(VAR_4 <= VAR_9) {
          while(VAR_8 < VAR_10) { *VAR_7++ = *VAR_8, *VAR_8++ = *VAR_7; }
          *VAR_7 = *VAR_8, *VAR_8 = VAR_11;
          return;
        }
      } while(*VAR_9 < 0);
    }
  }
}
