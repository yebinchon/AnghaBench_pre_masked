
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * text; } ;


 int * FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(int VAR_1, char *VAR_2, char *VAR_3)
{
    if (VAR_0[VAR_1].text != ((void*)0))
 FUNC_1(VAR_0[VAR_1].text);

    VAR_0[VAR_1].text = FUNC_0((int)(FUNC_3(VAR_2) + FUNC_3(VAR_3)) - 1);
    FUNC_2(VAR_0[VAR_1].text, VAR_2, VAR_3);
}
