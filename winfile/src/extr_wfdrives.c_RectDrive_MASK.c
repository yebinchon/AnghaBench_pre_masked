
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int RECT ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int DRIVEIND ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

VOID
FUNC_10(DRIVEIND VAR_4, BOOL VAR_5)
{
   RECT VAR_6, VAR_7;
   HBRUSH VAR_8;
   HDC VAR_9;

   FUNC_4(VAR_4, &VAR_6);
   VAR_7 = VAR_6;
   FUNC_6(&VAR_6, -VAR_2, -VAR_2);

   if (VAR_5) {

      VAR_9 = FUNC_3(VAR_3);

      if ((VAR_8 = FUNC_0(FUNC_5(VAR_0)))) {
         FUNC_2(VAR_9, &VAR_6, VAR_8);
         FUNC_1(VAR_8);
      }

      FUNC_8(VAR_3, VAR_9);

   } else {
      FUNC_7(VAR_3, &VAR_7, VAR_1);
      FUNC_9(VAR_3);
   }
}
