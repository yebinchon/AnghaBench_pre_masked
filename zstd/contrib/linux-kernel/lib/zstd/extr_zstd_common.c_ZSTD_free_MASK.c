
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opaque; int (* customFree ) (int ,void*) ;} ;
typedef TYPE_1__ ZSTD_customMem ;


 int FUNC_0 (int ,void*) ;

void FUNC_1(void *VAR_0, ZSTD_customMem VAR_1)
{
 if (VAR_0 != ((void*)0))
  VAR_1.customFree(VAR_1.opaque, VAR_0);
}
