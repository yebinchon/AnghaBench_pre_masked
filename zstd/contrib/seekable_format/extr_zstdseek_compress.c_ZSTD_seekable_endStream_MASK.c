
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int writingSeekTable; int framelog; scalar_t__ frameDSize; } ;
typedef TYPE_1__ ZSTD_seekable_CStream ;
typedef int ZSTD_outBuffer ;


 scalar_t__ FUNC_0 (size_t const) ;
 size_t FUNC_1 (TYPE_1__*,int *) ;
 size_t FUNC_2 (int *) ;
 size_t FUNC_3 (int *,int *) ;

size_t FUNC_4(ZSTD_seekable_CStream* VAR_0, ZSTD_outBuffer* VAR_1)
{
    if (!VAR_0->writingSeekTable && VAR_0->frameDSize) {
        const size_t VAR_2 = FUNC_1(VAR_0, VAR_1);
        if (FUNC_0(VAR_2)) return VAR_2;

        if (VAR_2) return VAR_2 + FUNC_2(&VAR_0->framelog);
    }

    VAR_0->writingSeekTable = 1;

    return FUNC_3(&VAR_0->framelog, VAR_1);
}
