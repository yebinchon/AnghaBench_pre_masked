
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int16 ;
struct TYPE_8__ {TYPE_2__ (* try_next ) (TYPE_4__*) ;} ;
struct TYPE_7__ {int is_null; scalar_t__ val; scalar_t__ is_done; } ;
struct TYPE_6__ {size_t decompressed_column_offset; int is_null; TYPE_4__* iterator; scalar_t__ val; int is_compressed; } ;
typedef TYPE_1__ PerCompressedColumn ;
typedef TYPE_2__ DecompressResult ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 TYPE_2__ FUNC_1 (TYPE_4__*) ;

bool
FUNC_2(PerCompressedColumn *VAR_1, Datum *VAR_2,
       bool *VAR_3)
{
 DecompressResult VAR_4;
 int16 VAR_5 = VAR_1->decompressed_column_offset;


 if (VAR_5 < 0)
  return 1;


 if (!VAR_1->is_compressed)
 {
  VAR_2[VAR_5] = VAR_1->val;
  VAR_3[VAR_5] = VAR_1->is_null;
  return 1;
 }


 if (VAR_1->is_null)
 {
  VAR_3[VAR_5] = 1;
  return 1;
 }


 if (VAR_1->iterator == ((void*)0))
  FUNC_0(VAR_0, "tried to decompress more data than was compressed in column");

 VAR_4 = VAR_1->iterator->try_next(VAR_1->iterator);
 if (VAR_4.is_done)
 {

  VAR_1->iterator = ((void*)0);
  VAR_3[VAR_5] = 1;
  return 1;
 }

 VAR_3[VAR_5] = VAR_4.is_null;
 if (VAR_4.is_null)
  VAR_2[VAR_5] = 0;
 else
  VAR_2[VAR_5] = VAR_4.val;

 return 0;
}
