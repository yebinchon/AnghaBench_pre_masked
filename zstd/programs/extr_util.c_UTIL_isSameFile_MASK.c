
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ st_dev; scalar_t__ st_ino; } ;
typedef TYPE_1__ stat_t ;


 scalar_t__ FUNC_0 (char const*,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,char const*) ;

int FUNC_3(const char* VAR_0, const char* VAR_1)
{
    FUNC_1(VAR_0 != ((void*)0)); FUNC_1(VAR_1 != ((void*)0));







    { stat_t VAR_2;
        stat_t VAR_3;
        return FUNC_0(VAR_0, &VAR_2)
            && FUNC_0(VAR_1, &VAR_3)
            && (VAR_2.st_dev == VAR_3.st_dev)
            && (VAR_2.st_ino == VAR_3.st_ino);
    }

}
