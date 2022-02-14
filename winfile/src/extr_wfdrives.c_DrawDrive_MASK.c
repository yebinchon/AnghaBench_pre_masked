
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {int iOffset; } ;
struct TYPE_7__ {int left; int right; int top; int bottom; } ;
typedef scalar_t__ TCHAR ;
typedef TYPE_1__ RECT ;
typedef int INT ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int DWORD ;
typedef size_t DRIVEIND ;
typedef size_t DRIVE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int,int,int,int,int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_5 ;
 int FUNC_10 (int ,int,int,scalar_t__*,int) ;
 TYPE_2__* VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t* VAR_16 ;

VOID
FUNC_11(HDC VAR_17, INT VAR_18, INT VAR_19, DRIVEIND VAR_20, BOOL VAR_21, BOOL VAR_22)
{
   RECT VAR_23;
   TCHAR VAR_24[2];
   DWORD VAR_25;
   DRIVE VAR_26;

   VAR_26 = VAR_16[VAR_20];

   VAR_23.left = VAR_18;
   VAR_23.right = VAR_18 + VAR_8;
   VAR_23.top = VAR_19;
   VAR_23.bottom = VAR_19 + VAR_11;

   VAR_25 = FUNC_6(VAR_0);

   if (VAR_21) {
      HBRUSH VAR_27;

      if ((VAR_27 = FUNC_1(FUNC_6(VAR_1)))) {
         if (VAR_22) {
            VAR_25 = FUNC_6(VAR_2);
            FUNC_4(VAR_17, &VAR_23, VAR_27);
         } else {
            FUNC_7(&VAR_23, -VAR_10, -VAR_10);
            FUNC_5(VAR_17, &VAR_23, VAR_27);
         }
         FUNC_2(VAR_27);
      }
   }

   if (VAR_22)
      FUNC_3(VAR_17, &VAR_23);

   VAR_24[0] = (TCHAR)(VAR_7 + VAR_16[VAR_20]);
   FUNC_8(VAR_17, VAR_5);

   VAR_25 = FUNC_9(VAR_17, VAR_25);
   FUNC_10(VAR_17, VAR_18 + VAR_9+(VAR_10*6), VAR_19 + (VAR_11 - VAR_14) / 2, VAR_24, 1);
   FUNC_9(VAR_17, VAR_25);

   FUNC_0(VAR_17, VAR_18 + 4*VAR_10, VAR_19 + (VAR_11 - VAR_12) / 2, VAR_9, VAR_12,
      VAR_15, VAR_6[VAR_26].iOffset, 2 * VAR_13, VAR_4 | VAR_3);
}
