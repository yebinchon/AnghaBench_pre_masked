
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t t_len; TYPE_1__* t_data; } ;
struct TYPE_5__ {size_t t_hoff; } ;
typedef int MemoryContext ;
typedef TYPE_2__* HeapTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (int ,size_t) ;
 int FUNC_3 (void*,int ,size_t) ;

void *
FUNC_4(HeapTuple VAR_0, MemoryContext VAR_1, size_t VAR_2,
       size_t VAR_3)
{
 void *VAR_4 = FUNC_2(VAR_1, VAR_2);


 FUNC_0(VAR_3 == VAR_0->t_len - VAR_0->t_data->t_hoff);
 FUNC_3(VAR_4, FUNC_1(VAR_0), VAR_3);

 return VAR_4;
}
