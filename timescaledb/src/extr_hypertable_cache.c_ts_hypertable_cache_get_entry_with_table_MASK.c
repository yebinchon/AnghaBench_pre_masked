
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * hypertable; } ;
struct TYPE_4__ {char const* schema; char const* table; int q; int relid; } ;
typedef int Oid ;
typedef TYPE_1__ HypertableCacheQuery ;
typedef TYPE_2__ HypertableCacheEntry ;
typedef int Hypertable ;
typedef int Cache ;


 TYPE_2__* FUNC_0 (int *,int *) ;

Hypertable *
FUNC_1(Cache *VAR_0, Oid VAR_1, const char *VAR_2,
           const char *VAR_3)
{
 HypertableCacheQuery VAR_4 = {
  .relid = VAR_1,
  .schema = VAR_2,
  .table = VAR_3,
 };
 HypertableCacheEntry *VAR_5 = FUNC_0(VAR_0, &VAR_4.q);

 return VAR_5->hypertable;
}
