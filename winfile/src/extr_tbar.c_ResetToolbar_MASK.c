
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_4__ {scalar_t__ idM; } ;
struct TYPE_3__ {scalar_t__ fsStyle; scalar_t__ idCommand; } ;
typedef scalar_t__ LPTBBUTTON ;
typedef int LPARAM ;
typedef scalar_t__ INT ;
typedef scalar_t__ HWND ;
typedef int HMENU ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__* VAR_17 ;
 TYPE_1__* VAR_18 ;

VOID
FUNC_6(void)
{
   INT VAR_19;
   INT VAR_20, VAR_21;
   HMENU VAR_22;
   UINT VAR_23;

   HWND VAR_24;



   for (VAR_19=(INT)FUNC_5(VAR_16, VAR_8, 0, 0L)-1;
      VAR_19>=0; --VAR_19)

      FUNC_5(VAR_16, VAR_10, VAR_19, 0L);



   FUNC_5(VAR_16, VAR_7, VAR_5,
      (LPARAM)(LPTBBUTTON)VAR_18);



   FUNC_0(VAR_12);



   VAR_22 = FUNC_2(VAR_14);

   VAR_24 = (HWND) FUNC_5(VAR_15, VAR_13, 0, 0L);

   if (VAR_24 && FUNC_4(0xffff, VAR_22, VAR_24)) {
      for (VAR_20=0; VAR_20<VAR_5; ++VAR_20) {
         if (VAR_18[VAR_20].fsStyle == VAR_6)
            continue;

         VAR_21 = VAR_18[VAR_20].idCommand;
         VAR_23 = FUNC_3(VAR_22, VAR_21, VAR_0);

         FUNC_5(VAR_16, VAR_9, VAR_21, VAR_23&VAR_1);
         FUNC_5(VAR_16, VAR_11, VAR_21,
            !(VAR_23&(VAR_2|VAR_3)));
      }

      for (VAR_20=0; VAR_20<VAR_4; ++VAR_20) {
         VAR_21 = VAR_17[VAR_20].idM;
         VAR_23 = FUNC_3(VAR_22, VAR_21, VAR_0);
         FUNC_5(VAR_16, VAR_9, VAR_21, VAR_23&VAR_1);
         FUNC_5(VAR_16, VAR_11, VAR_21,
            !(VAR_23&(VAR_2|VAR_3)));
      }
   } else {
      FUNC_1();
   }
}
