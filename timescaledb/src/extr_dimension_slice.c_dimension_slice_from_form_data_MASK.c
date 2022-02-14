
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * storage; int * storage_free; int fd; } ;
typedef int Form_dimension_slice ;
typedef int FormData_dimension_slice ;
typedef TYPE_1__ DimensionSlice ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static inline DimensionSlice *
FUNC_2(Form_dimension_slice VAR_0)
{
 DimensionSlice *VAR_1 = FUNC_0();

 FUNC_1(&VAR_1->fd, VAR_0, sizeof(FormData_dimension_slice));
 VAR_1->storage_free = ((void*)0);
 VAR_1->storage = ((void*)0);
 return VAR_1;
}
