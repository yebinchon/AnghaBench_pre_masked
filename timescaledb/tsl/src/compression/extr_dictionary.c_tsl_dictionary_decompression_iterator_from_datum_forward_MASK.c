
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int base; } ;
typedef int Oid ;
typedef TYPE_1__ DictionaryDecompressionIterator ;
typedef int DecompressionIterator ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,void*,int,int ) ;
 TYPE_1__* FUNC_2 (int) ;

DecompressionIterator *
FUNC_3(Datum VAR_0,
               Oid VAR_1)
{
 DictionaryDecompressionIterator *VAR_2 = FUNC_2(sizeof(*VAR_2));
 FUNC_1(VAR_2,
             (void *) FUNC_0(VAR_0),
             1,
             VAR_1);
 return &VAR_2->base;
}
