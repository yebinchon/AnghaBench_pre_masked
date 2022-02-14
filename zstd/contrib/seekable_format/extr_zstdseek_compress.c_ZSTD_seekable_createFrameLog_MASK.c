
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int checksumFlag; scalar_t__ size; scalar_t__ seekTableIndex; scalar_t__ seekTablePos; } ;
typedef TYPE_1__ ZSTD_frameLog ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;

ZSTD_frameLog* FUNC_4(int VAR_0)
{
    ZSTD_frameLog* VAR_1 = FUNC_3(sizeof(ZSTD_frameLog));
    if (VAR_1 == ((void*)0)) return ((void*)0);

    if (FUNC_0(FUNC_1(VAR_1))) {
        FUNC_2(VAR_1);
        return ((void*)0);
    }

    VAR_1->checksumFlag = VAR_0;
    VAR_1->seekTablePos = 0;
    VAR_1->seekTableIndex = 0;
    VAR_1->size = 0;

    return VAR_1;
}
