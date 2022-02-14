
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t compressedSize; unsigned long long decompressedBound; } ;
typedef TYPE_1__ ZSTD_frameSizeInfo ;
typedef int BYTE ;


 unsigned long long const VAR_0 ;
 TYPE_1__ FUNC_0 (void const*,size_t) ;
 scalar_t__ FUNC_1 (size_t const) ;
 int FUNC_2 (int) ;

unsigned long long FUNC_3(const void* VAR_1, size_t VAR_2)
{
    unsigned long long VAR_3 = 0;

    while (VAR_2 > 0) {
        ZSTD_frameSizeInfo const VAR_4 = FUNC_0(VAR_1, VAR_2);
        size_t const VAR_5 = VAR_4.compressedSize;
        unsigned long long const VAR_6 = VAR_4.decompressedBound;
        if (FUNC_1(VAR_5) || VAR_6 == VAR_0)
            return VAR_0;
        FUNC_2(VAR_2 >= VAR_5);
        VAR_1 = (const BYTE*)VAR_1 + VAR_5;
        VAR_2 -= VAR_5;
        VAR_3 += VAR_6;
    }
    return VAR_3;
}
