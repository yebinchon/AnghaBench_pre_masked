
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pos; scalar_t__ size; TYPE_2__* seq; } ;
typedef TYPE_1__ rawSeqStore_t ;
struct TYPE_5__ {size_t litLength; size_t matchLength; } ;
typedef TYPE_2__ rawSeq ;
typedef size_t U32 ;



void FUNC_0(rawSeqStore_t* VAR_0, size_t VAR_1, U32 const VAR_2) {
    while (VAR_1 > 0 && VAR_0->pos < VAR_0->size) {
        rawSeq* VAR_3 = VAR_0->seq + VAR_0->pos;
        if (VAR_1 <= VAR_3->litLength) {

            VAR_3->litLength -= (U32)VAR_1;
            return;
        }
        VAR_1 -= VAR_3->litLength;
        VAR_3->litLength = 0;
        if (VAR_1 < VAR_3->matchLength) {

            VAR_3->matchLength -= (U32)VAR_1;
            if (VAR_3->matchLength < VAR_2) {

                if (VAR_0->pos + 1 < VAR_0->size) {
                    VAR_3[1].litLength += VAR_3[0].matchLength;
                }
                VAR_0->pos++;
            }
            return;
        }
        VAR_1 -= VAR_3->matchLength;
        VAR_3->matchLength = 0;
        VAR_0->pos++;
    }
}
