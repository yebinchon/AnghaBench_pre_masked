
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* tables; } ;
struct TYPE_4__ {int id; } ;
typedef int Oid ;
typedef size_t CatalogTable ;
typedef TYPE_2__ Catalog ;



__attribute__((used)) static inline Oid
FUNC_0(Catalog *VAR_0, CatalogTable VAR_1)
{
 return VAR_0->tables[VAR_1].id;
}
