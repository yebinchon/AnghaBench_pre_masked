
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int Tox ;
struct TYPE_2__ {scalar_t__ file; scalar_t__ friendnum; } ;
typedef scalar_t__ TOX_CONNECTION ;


 unsigned int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*) ;

void FUNC_2(Tox *VAR_2, uint32_t VAR_3, TOX_CONNECTION VAR_4, void *VAR_5)
{
    if (VAR_4)
        FUNC_1("\nOther went online.\n");
    else {
        FUNC_1("\nOther went offline.\n");
        unsigned int VAR_6;

        for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
            if (VAR_1[VAR_6].file != 0 && VAR_1[VAR_6].friendnum == VAR_3) {
                FUNC_0(VAR_1[VAR_6].file);
                VAR_1[VAR_6].file = 0;
            }
    }
}
