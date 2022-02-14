
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_10__ {int X; scalar_t__ Y; } ;
struct TYPE_15__ {TYPE_1__ dwSize; } ;
struct TYPE_14__ {int X; scalar_t__ Y; } ;
struct TYPE_13__ {scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_12__ {int * Buffer; TYPE_6__ BufferSize; TYPE_9__ Info; void* IsValid; } ;
struct TYPE_11__ {int Right; scalar_t__ Bottom; scalar_t__ Top; scalar_t__ Left; } ;
typedef TYPE_2__ SMALL_RECT ;
typedef int * PCHAR_INFO ;
typedef int DWORD ;
typedef TYPE_3__ ConsoleBuffer ;
typedef TYPE_4__ COORD ;
typedef int CHAR_INFO ;
typedef void* BOOL ;


 void* VAR_0 ;
 int FUNC_0 (int ,TYPE_9__*) ;
 int FUNC_1 (int ,int *,TYPE_6__,TYPE_4__,TYPE_2__*) ;
 void* VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static BOOL
FUNC_4(
    ConsoleBuffer *VAR_3)
{
    DWORD VAR_4;
    COORD VAR_5;
    SMALL_RECT VAR_6;
    WORD VAR_7, VAR_8;

    if (VAR_3 == ((void*)0))
 return VAR_0;

    if (!FUNC_0(VAR_2, &VAR_3->Info))
    {
 VAR_3->IsValid = VAR_0;
 return VAR_0;
    }
    VAR_3->IsValid = VAR_1;






    if (!VAR_3->IsValid || VAR_3->Buffer == ((void*)0) ||
     VAR_3->BufferSize.X != VAR_3->Info.dwSize.X ||
     VAR_3->BufferSize.Y != VAR_3->Info.dwSize.Y)
    {
 VAR_3->BufferSize.X = VAR_3->Info.dwSize.X;
 VAR_3->BufferSize.Y = VAR_3->Info.dwSize.Y;
 VAR_4 = VAR_3->BufferSize.X * VAR_3->BufferSize.Y;
 FUNC_3(VAR_3->Buffer);
 VAR_3->Buffer = (PCHAR_INFO)FUNC_2(VAR_4 * sizeof(CHAR_INFO));
 if (VAR_3->Buffer == ((void*)0))
     return VAR_0;
    }
    VAR_5.X = 0;
    VAR_6.Left = 0;
    VAR_6.Right = VAR_3->Info.dwSize.X - 1;
    VAR_8 = 12000 / VAR_3->Info.dwSize.X;
    for (VAR_7 = 0; VAR_7 < VAR_3->BufferSize.Y; VAR_7 += VAR_8)
    {



 VAR_5.Y = VAR_7;






 VAR_6.Top = VAR_7;
 VAR_6.Bottom = VAR_7 + VAR_8 - 1;
 if (!FUNC_1(VAR_2,
  VAR_3->Buffer,
  VAR_3->BufferSize,
  VAR_5,
  &VAR_6))
 {
     FUNC_3(VAR_3->Buffer);
     VAR_3->Buffer = ((void*)0);
     return VAR_0;
 }
    }

    return VAR_1;
}
