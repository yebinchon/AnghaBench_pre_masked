
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int storage; int (* storage_free ) (int ) ;} ;
typedef TYPE_1__ DimensionSlice ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(DimensionSlice *VAR_0)
{
 if (VAR_0->storage_free != ((void*)0))
  VAR_0->storage_free(VAR_0->storage);
 FUNC_0(VAR_0);
}
