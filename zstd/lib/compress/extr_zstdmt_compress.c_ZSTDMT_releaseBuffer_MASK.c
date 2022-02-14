
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * start; scalar_t__ capacity; } ;
typedef TYPE_1__ buffer_t ;
struct TYPE_6__ {int nbBuffers; int totalBuffers; int cMem; int poolMutex; TYPE_1__* bTable; } ;
typedef TYPE_2__ ZSTDMT_bufferPool ;
typedef int U32 ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(ZSTDMT_bufferPool* VAR_0, buffer_t VAR_1)
{
    FUNC_0(5, "ZSTDMT_releaseBuffer");
    if (VAR_1.start == ((void*)0)) return;
    FUNC_2(&VAR_0->poolMutex);
    if (VAR_0->nbBuffers < VAR_0->totalBuffers) {
        VAR_0->bTable[VAR_0->nbBuffers++] = VAR_1;
        FUNC_0(5, "ZSTDMT_releaseBuffer: stored buffer of size %u in slot %u",
                    (U32)VAR_1.capacity, (U32)(VAR_0->nbBuffers-1));
        FUNC_3(&VAR_0->poolMutex);
        return;
    }
    FUNC_3(&VAR_0->poolMutex);

    FUNC_0(5, "ZSTDMT_releaseBuffer: pool capacity reached => freeing ");
    FUNC_1(VAR_1.start, VAR_0->cMem);
}
