
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int Tox ;
struct TYPE_4__ {scalar_t__ file; } ;
struct TYPE_3__ {scalar_t__ file; } ;
typedef scalar_t__ TOX_CONNECTION ;


 unsigned int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*) ;

void FUNC_2(Tox *VAR_3, uint32_t VAR_4, TOX_CONNECTION VAR_5, void *VAR_6)
{
    if (VAR_5)
        FUNC_1("\nOther went online.\n");
    else {
        FUNC_1("\nOther went offline.\n");
        unsigned int VAR_7;

        for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
            if (VAR_2[VAR_7].file != 0) {
                FUNC_0(VAR_2[VAR_7].file);
                VAR_2[VAR_7].file = 0;
            }

            if (VAR_1[VAR_7].file != 0) {
                FUNC_0(VAR_1[VAR_7].file);
                VAR_1[VAR_7].file = 0;
            }
        }
    }
}
