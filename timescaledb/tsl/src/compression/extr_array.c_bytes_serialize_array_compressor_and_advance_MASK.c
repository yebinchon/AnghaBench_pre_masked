
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
struct TYPE_4__ {scalar_t__ num_elements; int data; } ;
struct TYPE_5__ {scalar_t__ total; TYPE_1__ data; int * sizes; int * nulls; } ;
typedef scalar_t__ Size ;
typedef TYPE_2__ ArrayCompressorSerializationInfo ;


 int FUNC_0 (int) ;
 char* FUNC_1 (char*,scalar_t__,int *) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

char *
FUNC_4(char *VAR_0, Size VAR_1,
            ArrayCompressorSerializationInfo *VAR_2)
{
 uint32 VAR_3 = FUNC_3(VAR_2->sizes);

 FUNC_0(VAR_1 == VAR_2->total);

 if (VAR_2->nulls != ((void*)0))
 {
  uint32 VAR_4 = FUNC_3(VAR_2->nulls);
  FUNC_0(VAR_1 >= VAR_4);
  VAR_0 = FUNC_1(VAR_0, VAR_4, VAR_2->nulls);
  VAR_1 -= VAR_4;
 }

 FUNC_0(VAR_1 >= VAR_3);
 VAR_0 = FUNC_1(VAR_0, VAR_3, VAR_2->sizes);
 VAR_1 -= VAR_3;

 FUNC_0(VAR_1 == VAR_2->data.num_elements);
 FUNC_2(VAR_0, VAR_2->data.data, VAR_2->data.num_elements);
 return VAR_0 + VAR_2->data.num_elements;
}
