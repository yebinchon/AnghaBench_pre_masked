
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPTSTR ;
typedef int HCURSOR ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

HCURSOR
FUNC_2()
{
   if (VAR_0) {

      return FUNC_0(VAR_1, (LPTSTR) FUNC_1(VAR_2 | 1));
   } else {

      return FUNC_0(VAR_1, (LPTSTR) FUNC_1(VAR_2 & ~1));
   }
}
