
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* data; int data_len; int * sizes; int * nulls; int element_type; } ;
typedef int Size ;
typedef int Simple8bRleSerialized ;
typedef int Oid ;
typedef TYPE_1__ ArrayCompressedData ;


 void* FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static ArrayCompressedData
FUNC_2(const char *VAR_0, Size VAR_1, Oid VAR_2,
         bool VAR_3)
{
 ArrayCompressedData VAR_4 = { .element_type = VAR_2 };

 if (VAR_3)
 {
  Simple8bRleSerialized *VAR_5 = FUNC_0(&VAR_0);
  VAR_4.nulls = VAR_5;
  VAR_1 -= FUNC_1(VAR_5);
 }

 VAR_4.sizes = FUNC_0(&VAR_0);
 VAR_1 -= FUNC_1(VAR_4.sizes);

 VAR_4.data = VAR_0;
 VAR_4.data_len = VAR_1;

 return VAR_4;
}
