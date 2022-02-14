
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef long LPARAM ;
typedef int INT ;
typedef size_t DRIVEIND ;
typedef scalar_t__ DRIVE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int,long) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;

VOID
FUNC_4(DRIVEIND VAR_6)
{
   INT VAR_7;
   DRIVE VAR_8;

   VAR_7 = (INT)FUNC_2(VAR_4, VAR_1, 0, 0L);

   FUNC_2(VAR_4, VAR_0, VAR_6, 0L);

   VAR_8 = VAR_5[VAR_6];





   if (FUNC_1(VAR_8) || FUNC_0(VAR_8))
      FUNC_3(VAR_8);





   FUNC_2(VAR_4, VAR_2,VAR_6, (LPARAM)VAR_8);

   if (VAR_7!=-1) {

      FUNC_2(VAR_4, VAR_3, VAR_7, 0L);
   }
}
