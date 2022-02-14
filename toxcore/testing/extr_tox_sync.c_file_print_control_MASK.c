
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int Tox ;
struct TYPE_2__ {scalar_t__ file; } ;
typedef scalar_t__ TOX_FILE_CONTROL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*) ;

void FUNC_3(Tox *VAR_2, uint32_t VAR_3, uint32_t VAR_4, TOX_FILE_CONTROL VAR_5,
                        void *VAR_6)
{
    if (VAR_4 < (1 << 15) && (VAR_5 == VAR_0)) {
        FUNC_1(VAR_2, VAR_4);
        return;
    }

    if (VAR_4 > (1 << 15) && (VAR_5 == VAR_0)) {
        uint8_t VAR_7 = (VAR_4 >> 16) - 1;
        FUNC_0(VAR_1[VAR_7].file);
        FUNC_2("File closed\n");
        VAR_1[VAR_7].file = 0;
        return;
    }
}
