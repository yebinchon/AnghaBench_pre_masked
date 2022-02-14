
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int val; scalar_t__ is_null; int is_done; } ;
struct TYPE_8__ {int element_type; } ;
struct TYPE_7__ {int base; } ;
typedef TYPE_1__ DictionaryDecompressionIterator ;
typedef TYPE_2__ DictionaryCompressed ;
typedef TYPE_3__ DecompressResult ;
typedef int ArrayCompressor ;
typedef int ArrayCompressed ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,void*,int,int ) ;
 TYPE_3__ FUNC_5 (int *) ;

__attribute__((used)) static ArrayCompressed *
FUNC_6(DictionaryCompressed *VAR_0)
{
 ArrayCompressor *VAR_1 = FUNC_0(VAR_0->element_type);
 DictionaryDecompressionIterator VAR_2;
 FUNC_4(&VAR_2,
             (void *) VAR_0,
             1,
             VAR_0->element_type);

 for (DecompressResult VAR_3 = FUNC_5(&VAR_2.base);
   !VAR_3.is_done;
   VAR_3 = FUNC_5(&VAR_2.base))
 {
  if (VAR_3.is_null)
   FUNC_2(VAR_1);
  else
   FUNC_1(VAR_1, VAR_3.val);
 }

 return FUNC_3(VAR_1);
}
