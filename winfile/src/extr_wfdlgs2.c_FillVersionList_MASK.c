
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef size_t UINT ;
struct TYPE_2__ {int idString; scalar_t__ pszName; } ;
typedef int LPVOID ;
typedef scalar_t__ LPTSTR ;
typedef long LPARAM ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef int DWORD ;


 void* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,int ) ;
 size_t VAR_9 ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,long) ;
 int FUNC_6 (char*) ;
 int VAR_10 ;
 size_t FUNC_7 (int ,void**,size_t) ;
 scalar_t__ FUNC_8 (int ,void**,size_t,int *,int *,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int FUNC_9 (void**,int ) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 size_t FUNC_11 (void**) ;
 void** VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 void** VAR_21 ;
 TYPE_1__* VAR_22 ;

VOID
FUNC_12(HWND VAR_23)
{
   LPTSTR VAR_24, VAR_25;

   DWORD VAR_26;
   UINT VAR_27, VAR_28, VAR_29;
   INT VAR_30;
   HWND VAR_31;

   VAR_31 = FUNC_2(VAR_23, VAR_1);

   VAR_21[VAR_10 - 1] = VAR_0;

   for (VAR_28=0; FUNC_8(VAR_15,
                                VAR_21,
                                VAR_28,
                                (LPVOID*)&VAR_24,
                                (LPVOID*)&VAR_25,
                                &VAR_26); VAR_28++) {

      if (!FUNC_10(VAR_24, VAR_18) ||
          !FUNC_10(VAR_24, VAR_19)) {

          continue;
      }

      for (VAR_27=0; VAR_27<VAR_9; VAR_27++)
         if (!FUNC_10(VAR_22[VAR_27].pszName, VAR_24))
            break;

      if (VAR_27 != VAR_9 && FUNC_3(VAR_14, VAR_22[VAR_27].idString, VAR_20, FUNC_0(VAR_20)))
         VAR_24=VAR_20;

      VAR_30 = (INT)FUNC_5(VAR_31, VAR_5, 0, (LPARAM)VAR_24);





      if (VAR_30 != VAR_6)
         FUNC_5(VAR_31, VAR_8, VAR_30, (LPARAM)VAR_25);
   }






   if (VAR_16 == ((void*)0) || VAR_17 == ((void*)0))
      goto Done;

   if (!FUNC_3(VAR_14, (VAR_12 == 1) ? VAR_2 : VAR_3,
      VAR_20, FUNC_0(VAR_20)))

      goto Done;

   VAR_30 = FUNC_5(VAR_31, VAR_5, 0, (LPARAM)VAR_20);
   if (VAR_30 == VAR_6)
      goto Done;

   VAR_17[0] = VAR_0;
   VAR_29 = 0;
   for (VAR_27=0; VAR_27<VAR_12; VAR_27++) {
      if (VAR_29 + 2 > VAR_13)
         break;
      if (VAR_27 != 0) {
         FUNC_9(VAR_17, FUNC_6(", "));
         VAR_29 += 2;
      }

      if (FUNC_7(VAR_16[VAR_27*2],
                          VAR_17+VAR_29,
                          VAR_13-VAR_29
                          ) > VAR_13 - VAR_29)

         break;

      VAR_29 += FUNC_11(VAR_17+VAR_29);
   }
   VAR_17[VAR_13-1] = VAR_0;

   FUNC_5(VAR_31, VAR_8, VAR_30, (LPARAM)VAR_17);

Done:

   FUNC_5(VAR_31, VAR_7, 0, 0L);
   FUNC_4(VAR_23, VAR_11, FUNC_1(VAR_1, ((void*)0), VAR_4));
}
