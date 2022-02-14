
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_10__ {TYPE_1__ ptDrop; int * hwndSink; int * hwndSource; } ;
struct TYPE_9__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_8__ {scalar_t__ left; scalar_t__ top; scalar_t__ bottom; int right; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ POINT ;
typedef int LPPOINT ;
typedef TYPE_4__* LPDROPSTRUCT ;
typedef int * HWND ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,int ,int ,long) ;
 int VAR_4 ;

VOID
FUNC_7(LPDROPSTRUCT VAR_5)
{
    HWND VAR_6;
    HWND VAR_7;

    RECT VAR_8;
    RECT VAR_9;
    POINT VAR_10;
    HWND VAR_11;

    VAR_6 = FUNC_3(VAR_5->hwndSource);
    VAR_7 = FUNC_3(VAR_5->hwndSink);


    if (VAR_5->hwndSink == ((void*)0))
    {
      VAR_8.left = VAR_8.top = 0;
    }
    else
    {
      FUNC_1(VAR_5->hwndSink, &VAR_8);
      FUNC_0(VAR_5->hwndSink, (LPPOINT)&VAR_8.left);
      FUNC_0(VAR_5->hwndSink, (LPPOINT)&VAR_8.right);
    }

    VAR_10.x = VAR_8.left + VAR_5->ptDrop.x;
    VAR_10.y = VAR_8.top + VAR_5->ptDrop.y;




    VAR_11 = VAR_7;
    if (VAR_11 == ((void*)0))
    {
      VAR_11 = VAR_6;
    }

    FUNC_1(VAR_11, &VAR_9);
    FUNC_0(VAR_11, (LPPOINT)&VAR_9.left);
    FUNC_0(VAR_11, (LPPOINT)&VAR_9.right);


    if (VAR_10.y < VAR_9.top || VAR_10.y > VAR_9.bottom)
    {

      HWND VAR_12 = FUNC_5(VAR_11);
      HWND VAR_13 = FUNC_4(VAR_11);
      HWND VAR_14 = ((void*)0);

      if (VAR_13)
      {
        VAR_14 = FUNC_2(VAR_13, VAR_0);
        if (VAR_14)
        {
            RECT VAR_15;
            FUNC_1(VAR_14, &VAR_15);
            FUNC_0(VAR_14, (LPPOINT)&VAR_15.left);


            if (VAR_10.x < VAR_15.left)
            {

                VAR_14 = ((void*)0);
            }
        }
      }

      if (VAR_14 == ((void*)0) && VAR_12)
      {

          VAR_14 = FUNC_2(VAR_12, VAR_1);
      }

      if (VAR_14)
      {
          FUNC_6(VAR_14, VAR_4, VAR_10.y < VAR_9.top ? VAR_3 : VAR_2, 0L);
      }
    }
}
