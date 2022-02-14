
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t varInds_t ;
struct TYPE_5__ {int * vals; } ;
typedef TYPE_1__ paramValues_t ;
struct TYPE_6__ {int strategy; int targetLength; int minMatch; int searchLog; int hashLog; int chainLog; int windowLog; } ;
typedef TYPE_2__ ZSTD_compressionParameters ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;

__attribute__((used)) static paramValues_t FUNC_0(ZSTD_compressionParameters VAR_9)
{
    paramValues_t VAR_10;
    varInds_t VAR_11;
    VAR_10.vals[VAR_8] = VAR_9.windowLog;
    VAR_10.vals[VAR_1] = VAR_9.chainLog;
    VAR_10.vals[VAR_2] = VAR_9.hashLog;
    VAR_10.vals[VAR_5] = VAR_9.searchLog;
    VAR_10.vals[VAR_4] = VAR_9.minMatch;
    VAR_10.vals[VAR_7] = VAR_9.targetLength;
    VAR_10.vals[VAR_6] = VAR_9.strategy;


    for (VAR_11 = VAR_6 + 1; VAR_11 < VAR_0; VAR_11++) {
        VAR_10.vals[VAR_11] = VAR_3[VAR_11];
    }
    return VAR_10;
}
