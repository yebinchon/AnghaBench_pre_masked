
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nLevels; } ;
typedef TYPE_1__* PDNODE ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef scalar_t__ BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;

PDNODE
FUNC_1(
   INT VAR_3,
   INT VAR_4,
   HWND VAR_5)
{
   PDNODE VAR_6;

   while (VAR_2) {
      if (FUNC_0(VAR_5, VAR_1, VAR_4, (LPARAM)&VAR_6) == VAR_0)
         return ((void*)0);

      if (VAR_6->nLevels == (BYTE)VAR_3) {

         FUNC_0(VAR_5, VAR_1, VAR_4, (LPARAM)&VAR_6);
         return VAR_6;
      }

      VAR_4--;
   }
}
