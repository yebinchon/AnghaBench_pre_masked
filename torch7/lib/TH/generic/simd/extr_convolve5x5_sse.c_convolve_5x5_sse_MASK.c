
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,float*,float*,long,long,long) ;
 int FUNC_1 (float*,float*,float*,long,long,long) ;
 int FUNC_2 (float*,float*,float*,long,long,long) ;
 int FUNC_3 (float*,float*,float*,long,long,long) ;
 int FUNC_4 (float*,float*,float*,long,long,long) ;
 int FUNC_5 (float*,float*,float*,long,long,long) ;
 int FUNC_6 (float*,float*,float*,long,long,long) ;
 int FUNC_7 (float*,float*,float*,long,long,long) ;

void FUNC_8(float* VAR_0, float* VAR_1, float* VAR_2, long VAR_3, long VAR_4, long VAR_5, long VAR_6) {
  long VAR_7 = 0;
  float* VAR_8 = VAR_1;
  float* VAR_9 = VAR_0;
  float* VAR_10 = VAR_2;
  for(; VAR_7 < (VAR_3 / 6 ) * 6; VAR_7 += 6) {
    float *VAR_11 = VAR_8 + VAR_7*VAR_6;
    float *VAR_12 = VAR_10;
    float *VAR_13 = VAR_11;
    FUNC_6(VAR_9, VAR_13, VAR_12, VAR_4, VAR_5, VAR_6);
    VAR_9 += (VAR_5 * 6);
  }

  if((VAR_7 < (VAR_3 & 0xFFFFFFFE)) && ((VAR_7 % 4) != 0)) {

    float *VAR_14 = VAR_8 + VAR_7*VAR_6;
    float *VAR_15 = VAR_10;
    float *VAR_16 = VAR_14;
    FUNC_2(VAR_9, VAR_16, VAR_15, VAR_4, VAR_5, VAR_6);
    VAR_9 += (VAR_5 * 2);
    VAR_7 += 2;
  }

  for(; VAR_7 < (VAR_3 & 0xFFFFFFFC); VAR_7 += 4) {
    float *VAR_17 = VAR_8 + VAR_7*VAR_6;
    float *VAR_18 = VAR_10;
    float *VAR_19 = VAR_17;
    FUNC_4(VAR_9, VAR_19, VAR_18, VAR_4, VAR_5, VAR_6);
    VAR_9 += (VAR_5 * 4);
  }

  for(; VAR_7 < (VAR_3 & 0xFFFFFFFE); VAR_7 += 2) {
    float *VAR_20 = VAR_8 + VAR_7*VAR_6;
    float *VAR_21 = VAR_10;
    float *VAR_22 = VAR_20;
    FUNC_2(VAR_9, VAR_22, VAR_21, VAR_4, VAR_5, VAR_6);
    VAR_9 += (VAR_5 * 2);
  }

  for(; VAR_7 < VAR_3; VAR_7 += 1) {
    float *VAR_23 = VAR_8 + VAR_7*VAR_6;
    float *VAR_24 = VAR_10;
    float *VAR_25 = VAR_23;
    FUNC_1(VAR_9, VAR_25, VAR_24, VAR_4, VAR_5, VAR_6);
    VAR_9 += (VAR_5 * 1);
  }
}
