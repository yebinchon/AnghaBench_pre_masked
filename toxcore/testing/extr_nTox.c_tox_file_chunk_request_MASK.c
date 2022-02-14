
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int Tox ;
struct TYPE_2__ {scalar_t__ friendnum; scalar_t__ filenumber; scalar_t__ file; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,int,size_t,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__,int ,int *,int,int ) ;

void FUNC_6(Tox *VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint64_t VAR_6, size_t VAR_7,
                            void *VAR_8)
{
    unsigned int VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {

        if (VAR_2[VAR_9].file && VAR_2[VAR_9].friendnum == VAR_4 && VAR_2[VAR_9].filenumber == VAR_5) {
            if (VAR_7 == 0) {
                FUNC_0(VAR_2[VAR_9].file);
                VAR_2[VAR_9].file = 0;
                char VAR_10[512];
                FUNC_4(VAR_10, "[t] %u file transfer: %u completed", VAR_2[VAR_9].friendnum, VAR_2[VAR_9].filenumber);
                FUNC_3(VAR_10);
                break;
            }

            FUNC_2(VAR_2[VAR_9].file, VAR_6, VAR_1);
            uint8_t VAR_11[VAR_7];
            int VAR_12 = FUNC_1(VAR_11, 1, VAR_7, VAR_2[VAR_9].file);
            FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_11, VAR_12, 0);
            break;
        }
    }
}
