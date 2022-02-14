
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* strategy; void* targetLength; void* minMatch; void* searchLog; void* chainLog; void* hashLog; void* windowLog; } ;
typedef TYPE_1__ ZSTD_compressionParameters ;
typedef int FUZZ_dataProducer_t ;


 void* FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ FUNC_1 (TYPE_1__,size_t,int ) ;

ZSTD_compressionParameters FUNC_2(size_t VAR_8, FUZZ_dataProducer_t *VAR_9)
{

    ZSTD_compressionParameters VAR_10;
    VAR_10.windowLog = FUNC_0(VAR_9, VAR_7, 15);
    VAR_10.hashLog = FUNC_0(VAR_9, VAR_1, 15);
    VAR_10.chainLog = FUNC_0(VAR_9, VAR_0, 16);
    VAR_10.searchLog = FUNC_0(VAR_9, VAR_4, 9);
    VAR_10.minMatch = FUNC_0(VAR_9, VAR_3,
                                          VAR_2);
    VAR_10.targetLength = FUNC_0(VAR_9, 0, 512);
    VAR_10.strategy = FUNC_0(VAR_9, VAR_6, VAR_5);
    return FUNC_1(VAR_10, VAR_8, 0);
}
