
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long style; void* lParam; void* cy; void* cx; void* y; void* x; int hOwner; int szTitle; int szClass; } ;
typedef TYPE_1__ MDICREATESTRUCT ;
typedef int LPWSTR ;
typedef long LPARAM ;
typedef void* INT ;
typedef int * HWND ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,long,long) ;
 int FUNC_5 (int *,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

HWND
FUNC_6(
   LPWSTR VAR_21,
   INT VAR_22,
   INT VAR_23,
   INT VAR_24,
   INT VAR_25,
   INT VAR_26)
{
   MDICREATESTRUCT VAR_27;
   HWND VAR_28;






   if (VAR_17 > 26) {

      FUNC_2(VAR_14, VAR_5, VAR_19, FUNC_0(VAR_19));
      FUNC_2(VAR_14, VAR_4, VAR_18, FUNC_0(VAR_18));
      FUNC_3(VAR_15, VAR_18, VAR_19, VAR_7 | VAR_6);
      return ((void*)0);
   }




   VAR_27.szClass = VAR_20;
   VAR_27.szTitle = VAR_21;
   VAR_27.hOwner = VAR_14;
   VAR_27.style = 0L;

   VAR_27.x = VAR_22;
   VAR_27.y = VAR_23;
   VAR_27.cx = VAR_24;
   VAR_27.cy = VAR_25;

   VAR_27.lParam = VAR_26;

   VAR_28 = (HWND)FUNC_4(VAR_16, VAR_9, 0, 0L);
   if (VAR_28 && FUNC_1(VAR_28, VAR_2) & VAR_10)
      VAR_27.style |= VAR_10;

   VAR_28 = (HWND)FUNC_4(VAR_16,
                            VAR_8,
                            0L, (LPARAM)&VAR_27);






   FUNC_5(VAR_28, VAR_3, VAR_13);
   FUNC_5(VAR_28, VAR_1, VAR_12);
   FUNC_5(VAR_28, VAR_0, VAR_11);

   return VAR_28;
}
