
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int Tox ;
struct TYPE_2__ {scalar_t__ file; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (size_t const*,size_t,int,scalar_t__) ;
 int FUNC_3 (char*,...) ;

void FUNC_4(Tox *VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint64_t VAR_5, const uint8_t *VAR_6,
                size_t VAR_7, void *VAR_8)
{
    uint8_t VAR_9 = (VAR_4 >> 16) - 1;

    if (VAR_7 == 0) {
        FUNC_0(VAR_1[VAR_9].file);
        FUNC_3("File closed\n");
        VAR_1[VAR_9].file = 0;
        FUNC_3("%u file transfer: %u completed\n", VAR_3, VAR_4);
        return;
    }

    if (VAR_1[VAR_9].file != 0) {
        FUNC_1(VAR_1[VAR_9].file, VAR_5, VAR_0);

        if (FUNC_2(VAR_6, VAR_7, 1, VAR_1[VAR_9].file) != 1)
            FUNC_3("Error writing data\n");
    }
}
