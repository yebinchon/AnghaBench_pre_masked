
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* end; void* ptr; } ;
typedef TYPE_1__ ZSTD_stack ;
struct TYPE_6__ {void* member_2; int * member_1; int * member_0; } ;
typedef TYPE_2__ ZSTD_customMem ;


 void* FUNC_0 (void*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;

ZSTD_customMem FUNC_2(void *VAR_2, size_t VAR_3)
{
 ZSTD_customMem VAR_4 = {VAR_0, VAR_1, VAR_2};
 ZSTD_stack *VAR_5 = (ZSTD_stack *)VAR_2;

 if (!VAR_2 || VAR_3 < sizeof(ZSTD_stack) || VAR_2 != FUNC_0(VAR_2)) {
  ZSTD_customMem VAR_6 = {((void*)0), ((void*)0), ((void*)0)};
  return VAR_6;
 }

 VAR_5->ptr = VAR_2;
 VAR_5->end = (char *)VAR_2 + VAR_3;
 FUNC_1(VAR_5, sizeof(ZSTD_stack));
 return VAR_4;
}
