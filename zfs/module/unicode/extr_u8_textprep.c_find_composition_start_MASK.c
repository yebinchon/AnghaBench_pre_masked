
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef size_t uchar_t ;
struct TYPE_2__ {size_t tbl_id; size_t base; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t** VAR_2 ;
 size_t*** VAR_3 ;
 TYPE_1__*** VAR_4 ;
 size_t*** VAR_5 ;
 size_t*** VAR_6 ;
 int ** VAR_7 ;

__attribute__((used)) static uchar_t *
FUNC_0(size_t VAR_8, uchar_t *VAR_9, size_t VAR_10)
{
 uint16_t VAR_11 = 0;
 uint16_t VAR_12 = 0;
 uint16_t VAR_13 = 0;
 uint16_t VAR_14;
 uint16_t VAR_15;
 uint16_t VAR_16 = 0;
 size_t VAR_17;
 size_t VAR_18;

 if (VAR_10 == 1) {
  VAR_16 = VAR_9[0];
 } else if (VAR_10 == 2) {
  VAR_13 = VAR_9[0];
  VAR_16 = VAR_9[1];
 } else if (VAR_10 == 3) {
  VAR_12 = VAR_9[0];
  VAR_13 = VAR_9[1];
  VAR_16 = VAR_9[2];
 } else if (VAR_10 == 4) {
  VAR_11 = VAR_9[0];
  VAR_12 = VAR_9[1];
  VAR_13 = VAR_9[2];
  VAR_16 = VAR_9[3];
 } else {




  return (((void*)0));
 }

 VAR_11 = VAR_2[VAR_8][VAR_11];
 if (VAR_11 == VAR_1)
  return (((void*)0));

 VAR_12 = VAR_3[VAR_8][VAR_11][VAR_12];
 if (VAR_12 == VAR_1)
  return (((void*)0));

 VAR_14 = VAR_4[VAR_8][VAR_12][VAR_13].tbl_id;
 if (VAR_14 == VAR_1)
  return (((void*)0));

 if (VAR_14 >= VAR_0) {
  VAR_14 -= VAR_0;
  VAR_17 = VAR_5[VAR_8][VAR_14][VAR_16];
  VAR_18 = VAR_5[VAR_8][VAR_14][VAR_16 + 1];
 } else {
  VAR_17 = VAR_6[VAR_8][VAR_14][VAR_16];
  VAR_18 = VAR_6[VAR_8][VAR_14][VAR_16 + 1];
 }

 if (VAR_17 >= VAR_18)
  return (((void*)0));

 VAR_15 = VAR_4[VAR_8][VAR_12][VAR_13].base;

 return ((uchar_t *)&(VAR_7[VAR_8][VAR_15 + VAR_17]));
}
