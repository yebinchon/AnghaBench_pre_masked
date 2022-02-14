
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (float*,float*,float*,long,long,long) ;
 int FUNC_2 (float*,float*,float*,long,long,long) ;
 int FUNC_3 (float*,float*,float*,long,long,long) ;
 int FUNC_4 (float*,float*,float*,long,long,long) ;
 int FUNC_5 (float*,float*,float*,long,long,long) ;
 int FUNC_6 (float*,float*,float*,long,long,long) ;
 int FUNC_7 (float*,float*,float*,long,long,long) ;
 int FUNC_8 (float*,float*,float*,long,long,long) ;
 int FUNC_9 (float*,float*,float*,long,long,long,long) ;

void FUNC_10(float* VAR_0, float* VAR_1, float* VAR_2, long VAR_3, long VAR_4, long VAR_5, long VAR_6) {
  long VAR_7 = VAR_6;
  long VAR_8 = 0;
  float* VAR_9 = VAR_1;
  float* VAR_10 = VAR_0;
  float* VAR_11 = VAR_2;

  if((VAR_3 == 64) && (VAR_4 == 64)) {
    FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
    return;
  }

  if((VAR_3 == 32) && (VAR_4 == 32)) {
    FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
    return;
  }

  if((VAR_3 == 16) && (VAR_4 == 16)) {
    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
    return;
  }

  if((VAR_3 == 8) && (VAR_4 == 8)) {
    FUNC_8(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, VAR_6);
    return;
  }

  for(; VAR_8 < (VAR_3 / 6 ) * 6; VAR_8 += 6) {
    float *VAR_12 = VAR_9 + VAR_8*VAR_7;
    float *VAR_13 = VAR_11;
    float *VAR_14 = VAR_12;
    FUNC_7(VAR_10, VAR_14, VAR_13, VAR_4, VAR_5, VAR_7);
    VAR_10 += (VAR_5 * 6);
  }


  if((VAR_8 < (VAR_3 & 0xFFFFFFFE)) && ((VAR_8 % 4) != 0)) {

    float *VAR_15 = VAR_9 + VAR_8*VAR_7;
    float *VAR_16 = VAR_11;
    float *VAR_17 = VAR_15;
    FUNC_3(VAR_10, VAR_17, VAR_16, VAR_4, VAR_5, VAR_7);
    VAR_10 += (VAR_5 * 2);
    VAR_8 += 2;
  }

  for(; VAR_8 < (VAR_3 & 0xFFFFFFFC); VAR_8 += 4) {
    float *VAR_18 = VAR_9 + VAR_8*VAR_7;
    float *VAR_19 = VAR_11;
    float *VAR_20 = VAR_18;
    FUNC_5(VAR_10, VAR_20, VAR_19, VAR_4, VAR_5, VAR_7);
    VAR_10 += (VAR_5 * 4);
  }

  for(; VAR_8 < (VAR_3 & 0xFFFFFFFE); VAR_8 += 2) {
    float *VAR_21 = VAR_9 + VAR_8*VAR_7;
    float *VAR_22 = VAR_11;
    float *VAR_23 = VAR_21;
    FUNC_3(VAR_10, VAR_23, VAR_22, VAR_4, VAR_5, VAR_7);
    VAR_10 += (VAR_5 * 2);
  }

  for(; VAR_8 < VAR_3; VAR_8 += 1) {
    float *VAR_24 = VAR_9 + VAR_8*VAR_7;
    float *VAR_25 = VAR_11;
    float *VAR_26 = VAR_24;
    FUNC_2(VAR_10, VAR_26, VAR_25, VAR_4, VAR_5, VAR_7);
    VAR_10 += (VAR_5 * 1);
  }

  long VAR_27 = VAR_4 & 0xFFFFFFF8;
  long VAR_28 = VAR_4 - VAR_27;


  if( VAR_28 > 0) {
    FUNC_0();
    FUNC_9(&VAR_0[VAR_27], &VAR_1[VAR_27], VAR_2, VAR_3, VAR_28, VAR_5, VAR_6);
  }
}
