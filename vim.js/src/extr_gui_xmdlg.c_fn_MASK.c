
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; char** names; } ;
typedef TYPE_1__ SharedFontSelData ;


 int FUNC_0 () ;

__attribute__((used)) static char *
FUNC_1(SharedFontSelData *VAR_0, int VAR_1)
{

    if (VAR_0->num < 0)
 FUNC_0();
    if (VAR_1 >= VAR_0->num)
 VAR_1 = VAR_0->num - 1;
    if (VAR_1 < 0)
 VAR_1 = 0;

    return VAR_0->names[VAR_1];
}
