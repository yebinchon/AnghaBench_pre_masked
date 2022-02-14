
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_13__ {scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_10__ {TYPE_7__ dwSize; int srWindow; int dwCursorPosition; int wAttributes; } ;
struct TYPE_12__ {int BufferSize; int * Buffer; TYPE_1__ Info; int IsValid; } ;
struct TYPE_11__ {scalar_t__ Bottom; scalar_t__ Right; scalar_t__ Top; scalar_t__ Left; } ;
typedef TYPE_2__ SMALL_RECT ;
typedef TYPE_3__ ConsoleBuffer ;
typedef TYPE_4__ COORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_7__,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_7__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ,int *,int ,TYPE_4__,TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static BOOL
FUNC_7(
    ConsoleBuffer *VAR_3,
    BOOL VAR_4)
{
    COORD VAR_5;
    SMALL_RECT VAR_6;

    if (VAR_3 == ((void*)0) || !VAR_3->IsValid)
 return VAR_0;






    if (VAR_4)
 FUNC_0(VAR_3->Info.wAttributes);

    FUNC_1(VAR_3->Info.dwSize, VAR_1);
    if (!FUNC_3(VAR_2, VAR_3->Info.dwSize))
 return VAR_0;
    if (!FUNC_4(VAR_2, VAR_3->Info.wAttributes))
 return VAR_0;

    if (!VAR_4)
    {



 return VAR_1;
    }

    if (!FUNC_2(VAR_2, VAR_3->Info.dwCursorPosition))
 return VAR_0;
    if (!FUNC_5(VAR_2, VAR_1, &VAR_3->Info.srWindow))
 return VAR_0;




    if (VAR_3->Buffer != ((void*)0))
    {
 VAR_5.X = 0;
 VAR_5.Y = 0;
 VAR_6.Left = 0;
 VAR_6.Top = 0;
 VAR_6.Right = VAR_3->Info.dwSize.X - 1;
 VAR_6.Bottom = VAR_3->Info.dwSize.Y - 1;
 if (!FUNC_6(VAR_2,
  VAR_3->Buffer,
  VAR_3->BufferSize,
  VAR_5,
  &VAR_6))
 {
     return VAR_0;
 }
    }

    return VAR_1;
}
