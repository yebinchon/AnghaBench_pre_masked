
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int Tox ;
typedef scalar_t__ TOX_ERR_FILE_SEND_CHUNK ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int ,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int *,int,int,scalar_t__,int *,size_t,scalar_t__*) ;

void FUNC_3(Tox *VAR_7, uint32_t VAR_8, uint32_t VAR_9, uint64_t VAR_10, size_t VAR_11,
                            void *VAR_12)
{
    if (*((uint32_t *)VAR_12) != 974536)
        return;

    if (!VAR_4) {
        FUNC_0("Didn't get resume control");
    }

    if (VAR_6 != VAR_10) {
        FUNC_0("Bad position %llu", VAR_10);
        return;
    }

    if (VAR_11 == 0) {
        if (VAR_1) {
            FUNC_0("File sending already done.");
        }

        VAR_1 = 1;
        return;
    }

    if (VAR_10 + VAR_11 > VAR_3) {
        if (VAR_2) {
            FUNC_0("Requested done file tranfer.");
        }

        VAR_11 = VAR_3 - VAR_10;
        VAR_2 = 1;
    }

    TOX_ERR_FILE_SEND_CHUNK VAR_13;
    uint8_t VAR_14[VAR_11];
    FUNC_1(VAR_14, VAR_5, VAR_11);

    if (FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_14, VAR_11, &VAR_13)) {
        ++VAR_5;
        VAR_6 += VAR_11;
    } else {
        FUNC_0("Could not send chunk %i", VAR_13);
    }

    if (VAR_13 != VAR_0) {
        FUNC_0("Wrong error code");
    }
}
