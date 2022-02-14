
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int has_nulls; int serializer; int type; int data; int sizes; int nulls; } ;
typedef int Oid ;
typedef TYPE_1__ ArrayCompressor ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;

ArrayCompressor *
FUNC_4(Oid VAR_1)
{
 ArrayCompressor *VAR_2 = FUNC_2(sizeof(*VAR_2));
 VAR_2->has_nulls = 0;

 FUNC_3(&VAR_2->nulls);
 FUNC_3(&VAR_2->sizes);
 FUNC_0(&VAR_2->data, VAR_0, 0);

 VAR_2->type = VAR_1;
 VAR_2->serializer = FUNC_1(VAR_1);
 return VAR_2;
}
