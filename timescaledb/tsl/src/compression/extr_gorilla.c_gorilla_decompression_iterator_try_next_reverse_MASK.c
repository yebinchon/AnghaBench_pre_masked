
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ compression_algorithm; int element_type; int forward; } ;
typedef int GorillaDecompressionIterator ;
typedef TYPE_1__ DecompressionIterator ;
typedef int DecompressResult ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

DecompressResult
FUNC_3(DecompressionIterator *VAR_1)
{
 FUNC_0(VAR_1->compression_algorithm == VAR_0 &&
     !VAR_1->forward);
 return FUNC_1(FUNC_2(
          (GorillaDecompressionIterator *) VAR_1),
         VAR_1->element_type);
}
