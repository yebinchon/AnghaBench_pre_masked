
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ Right; scalar_t__ Left; scalar_t__ Bottom; scalar_t__ Top; } ;
struct TYPE_9__ {TYPE_3__ srWindow; } ;
struct TYPE_8__ {scalar_t__ X; scalar_t__ Y; } ;
typedef TYPE_1__ COORD ;
typedef TYPE_2__ CONSOLE_SCREEN_BUFFER_INFO ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_3__) ;
 scalar_t__ FUNC_2 (TYPE_3__) ;
 int FUNC_3 (int ,scalar_t__,TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL
FUNC_4(
    COORD VAR_3,
    BOOL VAR_4)
{
    CONSOLE_SCREEN_BUFFER_INFO VAR_5;
    COORD VAR_6;
    BOOL VAR_7 = VAR_0;

    if (FUNC_0(VAR_2, &VAR_5))
    {





 if (VAR_5.srWindow.Right >= VAR_3.X)
 {
     VAR_6.X = FUNC_2(VAR_5.srWindow);
     if (VAR_6.X > VAR_3.X)
  VAR_6.X = VAR_3.X;
     VAR_5.srWindow.Right = VAR_3.X - 1;
     VAR_5.srWindow.Left = VAR_3.X - VAR_6.X;
     VAR_7 = VAR_1;
 }
 if (VAR_5.srWindow.Bottom >= VAR_3.Y)
 {
     VAR_6.Y = FUNC_1(VAR_5.srWindow);
     if (VAR_6.Y > VAR_3.Y)
  VAR_6.Y = VAR_3.Y;
     VAR_5.srWindow.Bottom = VAR_3.Y - 1;
     VAR_5.srWindow.Top = VAR_3.Y - VAR_6.Y;
     VAR_7 = VAR_1;
 }
 if (VAR_7 && VAR_4)
 {
     if (!FUNC_3(VAR_2, VAR_1, &VAR_5.srWindow))
  return VAR_0;
 }
 return VAR_1;
    }

    return VAR_0;
}
