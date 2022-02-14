
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int Tox ;
struct TYPE_2__ {scalar_t__ friendnum; scalar_t__ filenumber; scalar_t__ file; } ;
typedef int TOX_FILE_CONTROL ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,scalar_t__,...) ;

void FUNC_3(Tox *VAR_3, uint32_t VAR_4, uint32_t VAR_5, TOX_FILE_CONTROL VAR_6,
                        void *VAR_7)
{
    char VAR_8[512] = {0};
    FUNC_2(VAR_8, "[t] control %u received", VAR_6);
    FUNC_1(VAR_8);

    if (VAR_6 == VAR_1) {
        unsigned int VAR_9;

        for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {

            if (VAR_2[VAR_9].file && VAR_2[VAR_9].friendnum == VAR_4 && VAR_2[VAR_9].filenumber == VAR_5) {
                FUNC_0(VAR_2[VAR_9].file);
                VAR_2[VAR_9].file = 0;
                char VAR_10[512];
                FUNC_2(VAR_10, "[t] %u file transfer: %u cancelled", VAR_2[VAR_9].friendnum, VAR_2[VAR_9].filenumber);
                FUNC_1(VAR_10);
            }
        }
    }
}
