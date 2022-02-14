
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int st_mode; } ;
typedef TYPE_1__ stat_t ;
typedef int U32 ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,TYPE_1__*) ;
 int FUNC_2 (char const*,TYPE_1__*) ;

U32 FUNC_3(const char* VAR_1)
{
    int VAR_2;
    stat_t VAR_3;




    VAR_2 = FUNC_2(VAR_1, &VAR_3);
    if (!VAR_2 && FUNC_0(VAR_3.st_mode)) return 1;

    return 0;
}
