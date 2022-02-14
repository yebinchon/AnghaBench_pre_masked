
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;

int
FUNC_2(int VAR_2)
{
 static time_t VAR_3;
 int VAR_4 = -1;

 if (VAR_1 && VAR_2 > 0) {
  time_t VAR_5 = FUNC_0(((void*)0));

  if (!VAR_3 || VAR_3 + VAR_2 <= VAR_5) {
   FUNC_1(VAR_0);
   VAR_3 = VAR_5;
  }

  VAR_4 = (VAR_5 - VAR_3 + VAR_2) * 1000;
 }

 return VAR_4;
}
