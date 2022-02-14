
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int litLength; size_t matchLength; size_t offset; } ;
typedef TYPE_1__ ZSTD_Sequence ;
typedef int BYTE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,size_t) ;

__attribute__((used)) static void FUNC_2(BYTE* VAR_0, ZSTD_Sequence* VAR_1, size_t VAR_2, BYTE* VAR_3, size_t VAR_4)
{
    size_t VAR_5;
    size_t VAR_6;
    for(VAR_5 = 0; VAR_5 < VAR_2 - 1; ++VAR_5) {
        FUNC_0(VAR_0 + VAR_1[VAR_5].litLength + VAR_1[VAR_5].matchLength < VAR_0 + VAR_4);
        FUNC_0(VAR_3 + VAR_1[VAR_5].litLength + VAR_1[VAR_5].matchLength < VAR_3 + VAR_4);

        FUNC_1(VAR_0, VAR_3, VAR_1[VAR_5].litLength);
        VAR_0 += VAR_1[VAR_5].litLength;
        VAR_3 += VAR_1[VAR_5].litLength;
        VAR_4 -= VAR_1[VAR_5].litLength;

        for (VAR_6 = 0; VAR_6 < VAR_1[VAR_5].matchLength; ++VAR_6)
            VAR_0[VAR_6] = VAR_0[VAR_6 - VAR_1[VAR_5].offset];
        VAR_0 += VAR_1[VAR_5].matchLength;
        VAR_3 += VAR_1[VAR_5].matchLength;
        VAR_4 -= VAR_1[VAR_5].matchLength;
    }
    FUNC_1(VAR_0, VAR_3, VAR_4);
}
