
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int left; int right; int top; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int POINT ;
typedef int INT ;
typedef scalar_t__ HWND ;
typedef scalar_t__ DRIVEIND ;


 int FUNC_0 (scalar_t__,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

INT
FUNC_3(HWND VAR_6, POINT VAR_7)
{
   RECT VAR_8, VAR_9;
   INT VAR_10, VAR_11;

   DRIVEIND VAR_12;

   if (!VAR_0 || VAR_6 != VAR_5)
      return -1;

   FUNC_0(VAR_5, &VAR_8);

   VAR_10 = 0;
   VAR_11 = 0;
   VAR_12 = 0;

   for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
      VAR_9.left = VAR_10;
      VAR_9.right = VAR_10 + VAR_2;
      VAR_9.top = VAR_11;
      VAR_9.bottom = VAR_11 + VAR_4;
      FUNC_1(&VAR_9, -VAR_3, -VAR_3);

      if (FUNC_2(&VAR_9, VAR_7))
         return VAR_12;

      VAR_10 += VAR_2;

      if (VAR_10 + VAR_2 > VAR_8.right) {
         VAR_10 = 0;
         VAR_11 += VAR_4;
      }
   }

   return -1;
}
