
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int Tox ;
struct TYPE_2__ {int filenumber; int friendnum; int * file; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 size_t VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int *,int ,int ) ;

uint32_t FUNC_5(Tox *VAR_5, uint16_t VAR_6, char *VAR_7)
{
    FILE *VAR_8 = FUNC_0(VAR_7, "rb");

    if (VAR_8 == 0)
        return -1;

    FUNC_1(VAR_8, 0, VAR_0);
    uint64_t VAR_9 = FUNC_2(VAR_8);
    FUNC_1(VAR_8, 0, VAR_1);
    uint32_t VAR_10 = FUNC_4(VAR_5, VAR_6, VAR_2, VAR_9, 0, (uint8_t *)VAR_7,
                                     FUNC_3(VAR_7), 0);

    if (VAR_10 == -1)
        return -1;

    VAR_3[VAR_4].file = VAR_8;
    VAR_3[VAR_4].friendnum = VAR_6;
    VAR_3[VAR_4].filenumber = VAR_10;
    ++VAR_4;
    return VAR_10;
}
