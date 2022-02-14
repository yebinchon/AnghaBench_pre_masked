
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {long QuadPart; int LowPart; } ;
typedef int TCHAR ;
typedef int * LPTSTR ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef size_t INT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_3 (int *,int *,int,...) ;

LPTSTR
FUNC_4(LPTSTR VAR_6, LARGE_INTEGER VAR_7)
{
   INT VAR_8;
   UINT VAR_9, VAR_10, VAR_11;
   TCHAR VAR_12[10], VAR_13[20];

   LARGE_INTEGER VAR_14;
   DWORD VAR_15;

   VAR_14.QuadPart = 1024L;

   if (VAR_7.QuadPart < VAR_14.QuadPart)
   {
      FUNC_3(VAR_12, VAR_1, *FUNC_1(VAR_7.LowPart));
      VAR_8 = 0;
      goto AddOrder;
   }

   VAR_14.QuadPart = (1024L * 1000L - 1);

   for ( VAR_8 = 1;
         (VAR_7.QuadPart > VAR_14.QuadPart);
   VAR_7.QuadPart = VAR_7.QuadPart / 1024L, ++VAR_8)


      ;

   VAR_15 = VAR_7.LowPart;

   VAR_9 = (UINT) (VAR_15 / 1024);
   VAR_10 = FUNC_3(VAR_12, VAR_1, VAR_9);
   if (VAR_10 < 3) {
      VAR_11 = (VAR_15 - VAR_9 * 1024L) * 1000 / 1024;





      VAR_11 /= 10;
      if (VAR_10 == 2) {
         VAR_11 /= 10;
      }





      VAR_5[4] = VAR_0 + 3 - VAR_10;
      VAR_10 += FUNC_3(VAR_12+VAR_10, VAR_5, VAR_4, VAR_11);
   }

AddOrder:
   FUNC_2(VAR_2, VAR_3[VAR_8], VAR_13, FUNC_0(VAR_13));
   FUNC_3(VAR_6, VAR_13, VAR_12);

   return(VAR_6);
}
