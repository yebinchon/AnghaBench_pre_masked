
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int16 ;
struct TYPE_7__ {int * (* iterator_init_forward ) (int ,int ) ;} ;
struct TYPE_6__ {size_t compression_algorithm; } ;
struct TYPE_5__ {scalar_t__ decompressed_column_offset; int is_null; scalar_t__ val; int decompressed_type; int * iterator; scalar_t__ is_compressed; } ;
typedef TYPE_1__ PerCompressedColumn ;
typedef scalar_t__ Datum ;
typedef TYPE_2__ CompressedDataHeader ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 TYPE_4__* VAR_0 ;
 int * FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(PerCompressedColumn *VAR_1, int16 VAR_2,
            Datum *VAR_3, bool *VAR_4)
{
 for (int16 VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
 {
  PerCompressedColumn *VAR_6 = &VAR_1[VAR_5];
  if (VAR_6->decompressed_column_offset < 0)
   continue;

  VAR_6->is_null = VAR_4[VAR_5];
  if (VAR_6->is_null)
  {
   VAR_6->is_null = 1;
   VAR_6->iterator = ((void*)0);
   VAR_6->val = 0;
   continue;
  }

  if (VAR_6->is_compressed)
  {
   char *VAR_7 = (char *) FUNC_0(VAR_3[VAR_5]);
   CompressedDataHeader *VAR_8 = (CompressedDataHeader *) VAR_7;

   VAR_6->iterator =
    VAR_0[VAR_8->compression_algorithm]
     .iterator_init_forward(FUNC_1(VAR_7), VAR_6->decompressed_type);
  }
  else
   VAR_6->val = VAR_3[VAR_5];
 }
}
