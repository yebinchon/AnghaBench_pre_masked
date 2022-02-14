
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int type; } ;
struct TYPE_7__ {int * sizes; } ;
typedef TYPE_1__ ArrayCompressorSerializationInfo ;
typedef TYPE_2__ ArrayCompressor ;


 void* FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;

void *
FUNC_2(ArrayCompressor *VAR_0)
{
 ArrayCompressorSerializationInfo *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1->sizes == ((void*)0))
  return ((void*)0);

 return FUNC_0(VAR_1, VAR_0->type);
}
