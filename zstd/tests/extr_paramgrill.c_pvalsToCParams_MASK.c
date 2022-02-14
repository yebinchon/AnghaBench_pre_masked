
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * vals; } ;
typedef TYPE_1__ paramValues_t ;
struct TYPE_7__ {int strategy; int targetLength; int minMatch; int searchLog; int hashLog; int chainLog; int windowLog; } ;
typedef TYPE_2__ ZSTD_compressionParameters ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static ZSTD_compressionParameters FUNC_1(paramValues_t VAR_7)
{
    ZSTD_compressionParameters VAR_8;
    FUNC_0(&VAR_8, 0, sizeof(ZSTD_compressionParameters));
    VAR_8.windowLog = VAR_7.vals[VAR_6];
    VAR_8.chainLog = VAR_7.vals[VAR_0];
    VAR_8.hashLog = VAR_7.vals[VAR_1];
    VAR_8.searchLog = VAR_7.vals[VAR_3];
    VAR_8.minMatch = VAR_7.vals[VAR_2];
    VAR_8.targetLength = VAR_7.vals[VAR_5];
    VAR_8.strategy = VAR_7.vals[VAR_4];

    return VAR_8;
}
