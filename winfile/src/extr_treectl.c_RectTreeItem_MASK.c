
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_15__ {int nLevels; } ;
struct TYPE_14__ {scalar_t__ left; scalar_t__ right; } ;
struct TYPE_13__ {scalar_t__ cx; } ;
typedef int TCHAR ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* PDNODE ;
typedef scalar_t__ LPRECT ;
typedef int LPCTSTR ;
typedef long LPARAM ;
typedef int INT ;
typedef scalar_t__ HWND ;
typedef int HDC ;
typedef int HBRUSH ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 int FUNC_3 (scalar_t__,TYPE_2__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int *,int *,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_10 (scalar_t__,TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (scalar_t__,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_12 (scalar_t__,int ,int,long) ;
 int FUNC_13 (int,int,int ,int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ VAR_14 ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;

BOOL
FUNC_16(HWND VAR_23, INT VAR_24, BOOL VAR_25)
{
   INT VAR_26;
   HDC VAR_27;
   RECT VAR_28;
   RECT VAR_29;
   BOOL VAR_30;
   WORD VAR_31;
   PDNODE VAR_32;
   HBRUSH VAR_33;
   TCHAR VAR_34[VAR_9];
   SIZE VAR_35;

   if (VAR_24 == -1) {

EmptyStatusAndReturn:
      FUNC_12(VAR_21, VAR_11, VAR_10|255,
         (LPARAM)VAR_22);
      FUNC_15(VAR_21);
      return VAR_2;
   }



   VAR_30 = (BOOL)FUNC_12(VAR_23, VAR_7, VAR_24, 0L);

   if (VAR_30 && (VAR_20 == VAR_23))
      goto EmptyStatusAndReturn;

   if (FUNC_12(VAR_23, VAR_8, VAR_24, (LPARAM)&VAR_32) == VAR_5)
      goto EmptyStatusAndReturn;

   FUNC_12(VAR_23, VAR_6, VAR_24, (LPARAM)(LPRECT)&VAR_28);

   VAR_27 = FUNC_4(VAR_23);




   VAR_35.cx = FUNC_5(VAR_32, ((void*)0), VAR_34, &VAR_26);
   VAR_35.cx += VAR_17;
   FUNC_3(VAR_23, &VAR_29);

   VAR_28.left = VAR_32->nLevels * VAR_16 * 2 -
      (VAR_28.right - (VAR_29.right-VAR_29.left));

   VAR_28.right = VAR_28.left + VAR_15 + VAR_35.cx + 4 * VAR_18;

   FUNC_9(&VAR_28, &VAR_28, &VAR_29);

   if (VAR_25) {

      FUNC_7(VAR_32, VAR_34);
      FUNC_14(VAR_34);

      FUNC_13(VAR_10|255, VAR_12|VAR_13,
               (LPCTSTR)(DWORD)(VAR_19 ? VAR_3 : VAR_4),
               VAR_34);
      FUNC_15(VAR_21);

      if (VAR_30) {
          VAR_31 = VAR_0;
          FUNC_8(&VAR_28, -VAR_17, -VAR_17);
      } else
          VAR_31 = VAR_1;
      if ((VAR_33 = FUNC_0(FUNC_6(VAR_31)))) {
        FUNC_2(VAR_27, &VAR_28, VAR_33);
        FUNC_1(VAR_33);
      }
   } else {
      FUNC_10(VAR_23, &VAR_28, VAR_14);
      FUNC_15(VAR_23);
   }
   FUNC_11(VAR_23, VAR_27);
   return VAR_14;
}
