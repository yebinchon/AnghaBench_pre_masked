
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* tables; } ;
struct TYPE_4__ {int * index_ids; } ;
typedef int Oid ;
typedef size_t CatalogTable ;
typedef TYPE_2__ Catalog ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline Oid
FUNC_0(Catalog *VAR_2, CatalogTable VAR_3, int VAR_4)
{
 return (VAR_4 == VAR_0) ? VAR_1 : VAR_2->tables[VAR_3].index_ids[VAR_4];
}
