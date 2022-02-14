
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,struct rlimit*) ;

void
FUNC_2(int VAR_3)
{
 const int VAR_4 = 256;
 int VAR_5;
 struct rlimit VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_5 = VAR_2;

 if (FUNC_1(VAR_0, &VAR_6) < 0) {
  VAR_7 = VAR_4;
 } else if (VAR_6.rlim_max == VAR_1) {
  VAR_7 = VAR_4;
 } else {
  VAR_7 = VAR_6.rlim_max;
 }
 for (VAR_8 = VAR_3; VAR_8 < VAR_7; VAR_8++)
  (void) FUNC_0(VAR_8);

 VAR_2 = VAR_5;
}
