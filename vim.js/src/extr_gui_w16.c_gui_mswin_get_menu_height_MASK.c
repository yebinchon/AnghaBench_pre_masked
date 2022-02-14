
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ starting; scalar_t__ menu_is_active; } ;
struct TYPE_5__ {int bottom; int top; } ;
typedef TYPE_1__ RECT ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_6(
    int VAR_8)
{
    static int VAR_9 = -1;

    int VAR_10;
    int VAR_11;

    if (VAR_5.menu_is_active)
 VAR_10 = FUNC_1(VAR_7);
    else
 VAR_10 = 0;

    if (VAR_10 == 0)
 VAR_11 = 0;
    else if (VAR_5.starting)
 VAR_11 = FUNC_2(VAR_4);
    else
    {
 RECT VAR_12, VAR_13;
 int VAR_14 = FUNC_2(VAR_3);
 int VAR_15 = FUNC_2(VAR_2);







 FUNC_3(VAR_6, &VAR_12);
 FUNC_0(VAR_6, &VAR_13);
 VAR_11 = VAR_12 - VAR_12 - (VAR_13-VAR_13 +
          2 * VAR_14 * (!FUNC_4(VAR_6)) + VAR_15);
    }

    if (VAR_8 && VAR_11 != VAR_9)
    {
 VAR_9 = VAR_11;
 FUNC_5(VAR_0, VAR_0, VAR_1);
    }

    return VAR_11;
}
