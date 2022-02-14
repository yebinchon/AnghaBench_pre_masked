
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int szName; struct TYPE_3__* pParent; } ;
typedef scalar_t__ TCHAR ;
typedef TYPE_1__* PDNODE ;
typedef scalar_t__* LPTSTR ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__*) ;

BOOL
FUNC_3(
   HWND VAR_8,
   LPTSTR VAR_9,
   BOOL VAR_10,
   DWORD *VAR_11,
   PDNODE *VAR_12)
{
  register DWORD VAR_13;
  register LPTSTR VAR_14;
  PDNODE VAR_15;
  DWORD VAR_16;
  PDNODE VAR_17;
  TCHAR VAR_18[1+VAR_6+1];

  if (VAR_11) {
   *VAR_11 = (DWORD)-1;
  }
  if (VAR_12) {
   *VAR_12 = ((void*)0);
  }

  if (!VAR_9 || FUNC_2(VAR_9) < 3 || VAR_9[1] != VAR_1) {
      return VAR_3;
  }

  VAR_13 = 0;
  VAR_16 = (DWORD)-1;
  VAR_17 = ((void*)0);

  while (*VAR_9)
    {



      VAR_18[1] = VAR_2;


      VAR_14 = VAR_18;

      while (*VAR_9 && *VAR_9 != VAR_0)
          *VAR_14++ = *VAR_9++;



      if (VAR_18[1] == VAR_1)
          *VAR_14++ = VAR_0;


      *VAR_14 = VAR_2;



      if (*VAR_9)
          VAR_9++;

      else if (VAR_10)
        {



    if (VAR_11) {
     *VAR_11 = VAR_16;
    }
          if (VAR_12) {
              *VAR_12 = VAR_17;
          }
          return VAR_7;
        }

      while (VAR_7)
        {

    if (FUNC_0(VAR_8, VAR_5, VAR_13, (LPARAM)&VAR_15) == VAR_4)
    {
     if (VAR_11) {
      *VAR_11 = VAR_16;
     }
     if (VAR_12) {
      *VAR_12 = VAR_17;
     }
              return VAR_3;
    }

          if (VAR_15->pParent == VAR_17)
            {
              if (!FUNC_1(VAR_18, VAR_15->szName))
                {

      VAR_16 = VAR_13;
                  VAR_17 = VAR_15;
                  break;
                }
            }
          VAR_13++;
        }
    }
  if (VAR_11) {
   *VAR_11 = VAR_16;
  }
  if (VAR_12) {
      *VAR_12 = VAR_17;
  }

  return VAR_7;
}
