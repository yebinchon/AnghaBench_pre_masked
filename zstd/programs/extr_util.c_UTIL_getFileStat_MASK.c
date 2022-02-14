
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int st_mode; } ;
typedef TYPE_1__ stat_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,TYPE_1__*) ;
 int FUNC_2 (char const*,TYPE_1__*) ;

int FUNC_3(const char* VAR_1, stat_t *VAR_2)
{
    int VAR_3;




    VAR_3 = FUNC_2(VAR_1, VAR_2);
    if (VAR_3 || !FUNC_0(VAR_2->st_mode)) return 0;

    return 1;
}
