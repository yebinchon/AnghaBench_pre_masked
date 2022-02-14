
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int Tox ;
struct TYPE_2__ {void* file; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_3 ;
 void* FUNC_1 (char*,char*) ;
 char* VAR_4 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*,char*,char const*) ;
 size_t FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,scalar_t__,int ,int ) ;

void FUNC_6(Tox *VAR_5, uint32_t VAR_6, uint32_t VAR_7, uint32_t VAR_8, uint64_t VAR_9,
                         const uint8_t *VAR_10, size_t VAR_11, void *VAR_12)
{
    if (VAR_8 != VAR_2) {
        FUNC_2("Refused invalid file type.");
        FUNC_5(VAR_5, VAR_6, VAR_7, VAR_0, 0);
        return;
    }

    char VAR_13[1024];
    uint32_t VAR_14;
    uint16_t VAR_15 = 0;

    for (VAR_14 = 0; VAR_14 < FUNC_4((char *)VAR_10); ++VAR_14) {
        if (VAR_10[VAR_14] == '/')
            VAR_15 = VAR_14;
    }

    if (VAR_4[FUNC_4(VAR_4) - 1] == '/')
        FUNC_3(VAR_13, "%s%s", VAR_4, VAR_10 + VAR_15 + 1);
    else
        FUNC_3(VAR_13, "%s/%s", VAR_4, VAR_10 + VAR_15 + 1);

    FILE *VAR_16 = FUNC_1(VAR_13, "rb");

    if (VAR_16 != 0) {
        FUNC_0(VAR_16);
        FUNC_5(VAR_5, VAR_6, VAR_7, VAR_0, 0);
        return;
    }

    uint8_t VAR_17 = (VAR_7 >> 16) - 1;
    VAR_3[VAR_17].file = FUNC_1(VAR_13, "wb");

    if (VAR_3[VAR_17].file == 0) {
        FUNC_5(VAR_5, VAR_6, VAR_7, VAR_0, 0);
        return;
    }

    if (FUNC_5(VAR_5, VAR_6, VAR_7, VAR_1, 0)) {
        FUNC_2("Accepted file transfer. (file: %s)\n", VAR_13);
    }

}
