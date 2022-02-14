
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int sm_content ;
typedef char WCHAR ;
struct TYPE_25__ {char* cFileName; } ;
struct TYPE_24__ {unsigned int cItems; TYPE_6__* fgd; } ;
struct TYPE_23__ {unsigned short member_0; int member_3; unsigned int lindex; int member_4; int member_2; int * member_1; } ;
struct TYPE_22__ {TYPE_1__* lpVtbl; } ;
struct TYPE_21__ {int hGlobal; int pstm; int member_2; int member_1; int member_0; } ;
struct TYPE_20__ {scalar_t__ (* QueryGetData ) (TYPE_3__*,TYPE_4__*) ;scalar_t__ (* GetData ) (TYPE_3__*,TYPE_4__*,TYPE_2__*) ;} ;
typedef char TCHAR ;
typedef TYPE_2__ STGMEDIUM ;
typedef char* LPWSTR ;
typedef TYPE_3__ IDataObject ;
typedef scalar_t__ HRESULT ;
typedef int HLOCAL ;
typedef TYPE_4__ FORMATETC ;
typedef TYPE_5__ FILEGROUPDESCRIPTOR ;
typedef TYPE_6__ FILEDESCRIPTOR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 unsigned short FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_10 (int ,char*) ;
 char* FUNC_11 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_15 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_16 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_17 (TYPE_3__*,TYPE_4__*,TYPE_2__*) ;
 scalar_t__ FUNC_18 (TYPE_3__*,TYPE_4__*,TYPE_2__*) ;
 int FUNC_19 (char*) ;

LPWSTR FUNC_20(IDataObject *VAR_9)
{
    FILEGROUPDESCRIPTOR *VAR_10;
    FILEDESCRIPTOR VAR_11;
 HRESULT VAR_12;
 LPWSTR VAR_13 = ((void*)0);

    unsigned short VAR_14 = FUNC_8(VAR_1);
    unsigned short VAR_15 = FUNC_8(VAR_0);


    FORMATETC VAR_16 = {VAR_14, ((void*)0), VAR_2, -1, VAR_7};
    FORMATETC VAR_17 = {VAR_15, ((void*)0), VAR_2, -1, VAR_8};


    VAR_12 = VAR_9->lpVtbl->QueryGetData(VAR_9, &VAR_16);
    if (VAR_12 == VAR_6)
 {

        VAR_12 = VAR_9->lpVtbl->QueryGetData(VAR_9, &VAR_17);
        if (VAR_12 == VAR_6)
  {

            STGMEDIUM VAR_18= {0,0,0};
            STGMEDIUM VAR_19 = {0,0,0};
   unsigned int VAR_20, VAR_21, VAR_22;
            WCHAR VAR_23[VAR_5+1];

            VAR_12 = VAR_9->lpVtbl->GetData(VAR_9, &VAR_16, &VAR_18);
   if (VAR_12 != VAR_6)
    return ((void*)0);

            VAR_10 = (FILEGROUPDESCRIPTOR *) FUNC_3(VAR_18.hGlobal);

   FUNC_2(VAR_5, VAR_23);
   VAR_21 = FUNC_19(VAR_23);


   VAR_22 = 0;
            for (VAR_20 = 0; VAR_20 < VAR_10->cItems; VAR_20++)
   {
                VAR_11 = VAR_10->fgd[VAR_20];
    VAR_22 += 1 + VAR_21 + 1 + FUNC_19(VAR_11.cFileName) + 2;
   }

   VAR_13 = (LPWSTR)FUNC_5(VAR_3, VAR_22 * sizeof(WCHAR));
   VAR_13[0] = '\0';


            for (VAR_20 = 0; VAR_20 < VAR_10->cItems; VAR_20++)
   {
                VAR_11 = VAR_10->fgd[VAR_20];
                VAR_17.lindex = VAR_20;
    FUNC_14(&VAR_19, 0, sizeof(VAR_19));
                VAR_12 = VAR_9->lpVtbl->GetData(VAR_9, &VAR_17, &VAR_19);

                if (VAR_12 == VAR_6)
    {

     TCHAR VAR_24[VAR_4*2+1];

     FUNC_13(VAR_24, VAR_23);
              FUNC_0(VAR_24);
        FUNC_12(VAR_24, VAR_11.cFileName);




     VAR_12 = FUNC_10(VAR_19.pstm, VAR_24);

     if (VAR_12 == VAR_6)
     {
      FUNC_1(VAR_24);

      if (VAR_13[0] != '\0')
       FUNC_12(VAR_13, FUNC_11(" "));
      FUNC_12(VAR_13, VAR_24);
     }

     FUNC_9(&VAR_19);
                }
            }

            FUNC_4(VAR_18.hGlobal);
            FUNC_9(&VAR_18);

   if (VAR_13[0] == '\0')
   {

    FUNC_7(0);
    FUNC_6((HLOCAL)VAR_13);
    VAR_13 = ((void*)0);
   }
        }
 }
    return VAR_13;
}
