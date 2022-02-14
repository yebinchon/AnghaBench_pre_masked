
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; scalar_t__ end; } ;
typedef TYPE_1__ ZSTD_stack ;
typedef int const BYTE ;


 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_1__*,size_t) ;

void *FUNC_2(void *VAR_0, size_t *VAR_1)
{
 ZSTD_stack *VAR_2 = (ZSTD_stack *)VAR_0;
 *VAR_1 = (BYTE const *)VAR_2->end - (BYTE *)FUNC_0(VAR_2->ptr);
 return FUNC_1(VAR_2, *VAR_1);
}
