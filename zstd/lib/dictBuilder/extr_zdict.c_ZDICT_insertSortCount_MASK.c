
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; int count; } ;
typedef TYPE_1__ offsetCount_t ;
typedef int U32 ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(offsetCount_t VAR_1[VAR_0+1], U32 VAR_2, U32 VAR_3)
{
    U32 VAR_4;
    VAR_1[VAR_0].offset = VAR_2;
    VAR_1[VAR_0].count = VAR_3;
    for (VAR_4=VAR_0; VAR_4>0; VAR_4--) {
        offsetCount_t VAR_5;
        if (VAR_1[VAR_4-1].count >= VAR_1[VAR_4].count) break;
        VAR_5 = VAR_1[VAR_4-1];
        VAR_1[VAR_4-1] = VAR_1[VAR_4];
        VAR_1[VAR_4] = VAR_5;
    }
}
