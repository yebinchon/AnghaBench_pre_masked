
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int framelogEntry_t ;
struct TYPE_3__ {size_t capacity; int * entries; } ;
typedef TYPE_1__ ZSTD_frameLog ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;

size_t FUNC_2(ZSTD_frameLog* VAR_1)
{

    size_t const VAR_2 = 16;
    VAR_1->entries = (framelogEntry_t*)FUNC_1(
            sizeof(framelogEntry_t) * VAR_2);
    if (VAR_1->entries == ((void*)0)) return FUNC_0(VAR_0);
    VAR_1->capacity = VAR_2;

    return 0;
}
