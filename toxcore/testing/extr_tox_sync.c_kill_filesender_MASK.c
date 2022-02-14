
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int Tox ;
struct TYPE_2__ {scalar_t__ file; size_t filenumber; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_1 ;

void FUNC_1(Tox *VAR_2, uint32_t VAR_3)
{
    uint32_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
        if (VAR_1[VAR_4].file != 0 && VAR_1[VAR_4].filenumber == VAR_3) {
            FUNC_0(VAR_1[VAR_4].file);
            VAR_1[VAR_4].file = 0;
        }
}
