
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t longLengthPos; int longLengthID; TYPE_3__ const* sequences; TYPE_3__* sequencesStart; } ;
typedef TYPE_2__ seqStore_t ;
struct TYPE_11__ {unsigned int offset; scalar_t__ litLength; scalar_t__ matchLength; } ;
typedef TYPE_3__ seqDef ;
struct TYPE_12__ {unsigned int offset; scalar_t__ litLength; unsigned int rep; unsigned int matchPos; scalar_t__ matchLength; } ;
typedef TYPE_4__ ZSTD_Sequence ;
struct TYPE_9__ {size_t seqIndex; int maxSequences; TYPE_4__* seqStart; } ;
struct TYPE_13__ {TYPE_1__ seqCollector; } ;
typedef TYPE_5__ ZSTD_CCtx ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int) ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_2(ZSTD_CCtx* VAR_3)
{
    const seqStore_t* VAR_4 = FUNC_0(VAR_3);
    const seqDef* VAR_5 = VAR_4->sequencesStart;
    size_t VAR_6 = VAR_4->sequences - VAR_5;

    ZSTD_Sequence* VAR_7 = &VAR_3->seqCollector.seqStart[VAR_3->seqCollector.seqIndex];
    size_t VAR_8; size_t VAR_9; int VAR_10;

    FUNC_1(VAR_3->seqCollector.seqIndex + 1 < VAR_3->seqCollector.maxSequences);
    for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_6; ++VAR_8) {
        VAR_7[VAR_8].offset = VAR_5[VAR_8].offset;
        VAR_7[VAR_8].litLength = VAR_5[VAR_8].litLength;
        VAR_7[VAR_8].matchLength = VAR_5[VAR_8].matchLength + VAR_0;

        if (VAR_8 == VAR_4->longLengthPos) {
            if (VAR_4->longLengthID == 1) {
                VAR_7[VAR_8].litLength += 0x10000;
            } else if (VAR_4->longLengthID == 2) {
                VAR_7[VAR_8].matchLength += 0x10000;
            }
        }

        if (VAR_7[VAR_8].offset <= VAR_1) {
            VAR_7[VAR_8].rep = VAR_7[VAR_8].offset;
            VAR_10 = (unsigned int)VAR_8 - VAR_7[VAR_8].offset;

            if (VAR_7[VAR_8].litLength == 0) {
                if (VAR_7[VAR_8].offset < 3) {
                    --VAR_10;
                } else {
                    VAR_10 = (unsigned int)VAR_8 - 1;
                }
                ++VAR_7[VAR_8].rep;
            }
            FUNC_1(VAR_10 >= -3);
            VAR_7[VAR_8].offset = VAR_10 >= 0 ? VAR_7[VAR_10].offset : VAR_2[-VAR_10 - 1];
            if (VAR_7[VAR_8].rep == 4) {
                --VAR_7[VAR_8].offset;
            }
        } else {
            VAR_7[VAR_8].offset -= VAR_1;
        }

        VAR_9 += VAR_7[VAR_8].litLength;
        VAR_7[VAR_8].matchPos = (unsigned int)VAR_9;
        VAR_9 += VAR_7[VAR_8].matchLength;
    }
    VAR_3->seqCollector.seqIndex += VAR_6;
}
