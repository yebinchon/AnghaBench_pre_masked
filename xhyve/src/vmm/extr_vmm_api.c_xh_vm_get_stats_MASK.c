
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timeval {int dummy; } ;


 int FUNC_0 (struct timeval*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int*,int *) ;

uint64_t *
FUNC_2(int VAR_1, struct timeval *VAR_2, int *VAR_3)
{
 static uint64_t VAR_4[64];
 struct timeval VAR_5;
 int VAR_6;
 int VAR_7;

 FUNC_0(&VAR_5);
 VAR_7 = FUNC_1(VAR_0, VAR_1, &VAR_6, ((uint64_t *) &VAR_4));

 if (VAR_7 == 0) {
  if (VAR_3) {
   *VAR_3 = VAR_6;
  }
  if (VAR_2) {
   *VAR_2 = VAR_5;
  }
  return (((uint64_t *) &VAR_4));
 } else {
  return (((void*)0));
 }
}
