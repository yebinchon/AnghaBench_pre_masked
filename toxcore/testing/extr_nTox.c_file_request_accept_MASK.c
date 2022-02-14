
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int Tox ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__,int ,int ) ;

void FUNC_3(Tox *VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6, uint64_t VAR_7,
                         const uint8_t *VAR_8, size_t VAR_9, void *VAR_10)
{
    if (VAR_6 != VAR_2) {
        FUNC_0("Refused invalid file type.");
        FUNC_2(VAR_3, VAR_4, VAR_5, VAR_0, 0);
        return;
    }

    char VAR_11[512];
    FUNC_1(VAR_11, "[t] %u is sending us: %s of size %llu", VAR_4, VAR_8, (long long unsigned int)VAR_7);
    FUNC_0(VAR_11);

    if (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_1, 0)) {
        FUNC_1(VAR_11, "Accepted file transfer. (saving file as: %u.%u.bin)", VAR_4, VAR_5);
        FUNC_0(VAR_11);
    } else
        FUNC_0("Could not accept file transfer.");
}
