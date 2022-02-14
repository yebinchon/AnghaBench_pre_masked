
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_elements; char* data; } ;
struct TYPE_4__ {int serializer; TYPE_2__ data; int sizes; int nulls; } ;
typedef scalar_t__ Size ;
typedef int Datum ;
typedef TYPE_1__ ArrayCompressor ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,scalar_t__*,int ) ;
 int FUNC_7 (int *,scalar_t__) ;

void
FUNC_8(ArrayCompressor *VAR_0, Datum VAR_1)
{
 Size VAR_2;
 char *VAR_3;
 FUNC_7(&VAR_0->nulls, 0);
 if (FUNC_5(VAR_0->serializer))
  VAR_1 = FUNC_2(FUNC_1(VAR_1));

 VAR_2 =
  FUNC_4(VAR_0->serializer, VAR_0->data.num_elements, VAR_1) -
  VAR_0->data.num_elements;

 FUNC_7(&VAR_0->sizes, VAR_2);


 FUNC_3(&VAR_0->data, VAR_2);
 VAR_3 = VAR_0->data.data + VAR_0->data.num_elements;
 VAR_0->data.num_elements += VAR_2;

 FUNC_6(VAR_0->serializer, VAR_3, &VAR_2, VAR_1);
 FUNC_0(VAR_2 == 0);
}
