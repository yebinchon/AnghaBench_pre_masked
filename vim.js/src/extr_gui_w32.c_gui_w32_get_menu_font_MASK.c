
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbSize; int lfMenuFont; } ;
typedef TYPE_1__ NONCLIENTMETRICS ;
typedef int LOGFONT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_1(LOGFONT *VAR_3)
{
    NONCLIENTMETRICS VAR_4;

    VAR_4.cbSize = sizeof(NONCLIENTMETRICS);
    if (!FUNC_0(
     VAR_2,
     sizeof(NONCLIENTMETRICS),
     &VAR_4,
     0))
 return VAR_0;
    *VAR_3 = VAR_4.lfMenuFont;
    return VAR_1;
}
