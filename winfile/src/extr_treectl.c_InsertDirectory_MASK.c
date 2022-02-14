
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {scalar_t__ nLevels; int wFlags; scalar_t__ dwAttribs; int szName; scalar_t__ dwNetType; struct TYPE_9__* pParent; } ;
typedef int TCHAR ;
typedef TYPE_1__* PDNODE ;
typedef int LPTSTR ;
typedef long LPARAM ;
typedef int INT ;
typedef int HWND ;
typedef scalar_t__ DWORD ;
typedef int DNODE ;
typedef scalar_t__ BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int *,scalar_t__*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (int ,int ,int,long) ;
 int FUNC_11 (int ,int ,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ) ;

INT
FUNC_14(
   HWND VAR_15,
   PDNODE VAR_16,
   INT VAR_17,
   LPTSTR VAR_18,
   PDNODE *VAR_19,
   BOOL VAR_20,
   BOOL VAR_21,
   DWORD VAR_22)
{
   UINT VAR_23, VAR_24, VAR_25;
   PDNODE VAR_26, VAR_27;
   HWND VAR_28;
   INT VAR_29, VAR_30, VAR_31;
   TCHAR VAR_32[VAR_9 * 2];


   VAR_23 = FUNC_13(VAR_18);

   VAR_26 = (PDNODE)FUNC_9(VAR_8, sizeof(DNODE) + FUNC_0(VAR_23));
   if (!VAR_26)
   {
      if (VAR_19)
      {
         *VAR_19 = ((void*)0);
      }
      return (0);
   }

   VAR_26->pParent = VAR_16;
   VAR_26->nLevels = VAR_16 ? (VAR_16->nLevels + (BYTE)1) : (BYTE)0;
   VAR_26->wFlags = 0;
   VAR_26->dwNetType = (DWORD)-1;
   if (!VAR_20)
      VAR_26->wFlags |= VAR_14;

   FUNC_12(VAR_26->szName, VAR_18);

   if (VAR_16)
      VAR_16->wFlags |= VAR_11 | VAR_10;

   VAR_28 = FUNC_3(VAR_15, VAR_1);





   VAR_24 = FUNC_5(VAR_26, VAR_28, ((void*)0), &VAR_23);
   VAR_24 = FUNC_1(VAR_26);

   VAR_25 = FUNC_7(VAR_15, VAR_0);
   if (VAR_24 > VAR_25)
   {
       FUNC_11(VAR_15, VAR_0, VAR_24);
       FUNC_10(VAR_28, VAR_7, VAR_24, 0L);
   }

   VAR_30 = (INT)FUNC_10(VAR_28, VAR_4, 0, 0L);

   if (VAR_30 > 0)
   {


      VAR_29 = VAR_17 + 1;
      VAR_30--;




      FUNC_10(VAR_28, VAR_5, VAR_30, (LPARAM)&VAR_27);

      if (VAR_21 && FUNC_2(VAR_26, VAR_27) > 0)
      {
         VAR_30++;
      }
      else
      {
      int VAR_33;
         do
         {
            VAR_31 = (VAR_30 + VAR_29) / 2;

            FUNC_10(VAR_28, VAR_5, VAR_31, (LPARAM)&VAR_27);

            VAR_33 = FUNC_2(VAR_26, VAR_27);
            if (VAR_33 == 0)
            {
                VAR_30 = VAR_29 = VAR_31;
            }
            else if (VAR_33 > 0)
               VAR_29 = VAR_31 + 1;
            else
               VAR_30 = VAR_31 - 1;

         } while (VAR_30 > VAR_29);





         FUNC_10(VAR_28, VAR_5, VAR_30, (LPARAM)&VAR_27);
         VAR_33 = FUNC_2(VAR_26, VAR_27);
         if (VAR_33 == 0)
         {
             if (VAR_19)
             {
                 *VAR_19 = VAR_27;
             }
             return VAR_30;
         }

        if (VAR_33 > 0)
        {
            VAR_30++;
        }
      }
   }






   VAR_31 = VAR_30 - 1;

   while (VAR_31 >= 0)
   {
      FUNC_10(VAR_28, VAR_5, VAR_31--, (LPARAM)&VAR_27);
      if (VAR_27->nLevels == VAR_26->nLevels)
      {
         VAR_27->wFlags &= ~VAR_12;
         break;
      }
      else if (VAR_27->nLevels < VAR_26->nLevels)
      {
         break;
      }
   }




   if (((INT)FUNC_10(VAR_28, VAR_5, VAR_30, (LPARAM)&VAR_27) == VAR_3) ||
       (VAR_27->nLevels < VAR_26->nLevels))
   {
      VAR_26->wFlags |= VAR_12;
   }




   if (VAR_22 == VAR_2)
   {
       FUNC_6(VAR_26, VAR_32);
       if ((VAR_26->dwAttribs = FUNC_4(VAR_32)) == VAR_2)
       {
           VAR_26->dwAttribs = 0;
       }
   }
   else
   {
       VAR_26->dwAttribs = VAR_22;
   }

   FUNC_10(VAR_28, VAR_6, VAR_30, (LPARAM)VAR_26);

   if (VAR_19)
   {
      *VAR_19 = VAR_26;
   }

   return (VAR_30);
}
