
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int byte ;
struct TYPE_6__ {TYPE_1__* lpVtbl; } ;
struct TYPE_5__ {scalar_t__ (* Read ) (TYPE_2__*,int *,int,int *) ;} ;
typedef int TCHAR ;
typedef TYPE_2__ IStream ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int,int,int *,int ,int ,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (scalar_t__,int *,int ,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int *,int,int *) ;

__attribute__((used)) static HRESULT FUNC_9(IStream *VAR_9, TCHAR *VAR_10)
{
    byte VAR_11[VAR_0];
    DWORD VAR_12;
    DWORD VAR_13;
    HRESULT VAR_14;
 HANDLE VAR_15;

    VAR_15 = FUNC_1( VAR_10,
          VAR_3 | VAR_6,
          VAR_4 | VAR_5,
          ((void*)0),
          VAR_1,
          VAR_2,
          ((void*)0) );

    if (VAR_15 != VAR_7) {
        do {
            VAR_14 = VAR_9->lpVtbl->Read(VAR_9, VAR_11, VAR_0, &VAR_12);
   VAR_13 = 0;
            if (FUNC_6(VAR_14) && VAR_12)
   {
    if (!FUNC_7(VAR_15, VAR_11, VAR_12, &VAR_13, ((void*)0)))
    {
     VAR_14 = FUNC_5(FUNC_4());
     VAR_13 = 0;
    }
   }
        } while (VAR_8 == VAR_14 && VAR_13 != 0);
        FUNC_0(VAR_15);
  if (FUNC_3(VAR_14))
   FUNC_2(VAR_10);
  else
   VAR_14 = VAR_8;
    }
    else
     VAR_14 = FUNC_5(FUNC_4());

    return VAR_14;
}
