
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chunk_relid; int chunk_index; } ;
typedef int Oid ;
typedef int Node ;
typedef int List ;
typedef int Index ;
typedef TYPE_1__ ConstifyTableOidContext ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static List *
FUNC_1(List *VAR_0, Index VAR_1, Oid VAR_2)
{
 ConstifyTableOidContext VAR_3 = {
  .chunk_index = VAR_1,
  .chunk_relid = VAR_2,
 };

 return (List *) FUNC_0((Node *) VAR_0, &VAR_3);
}
