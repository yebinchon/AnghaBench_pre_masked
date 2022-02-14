
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int refcount; } ;
struct TYPE_7__ {int subtxnid; TYPE_2__* cache; } ;
typedef int MemoryContext ;
typedef TYPE_1__ CachePin ;
typedef TYPE_2__ Cache ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;

extern Cache *
FUNC_4(Cache *VAR_2)
{
 MemoryContext VAR_3 = FUNC_1(VAR_1);
 CachePin *VAR_4 = FUNC_3(sizeof(CachePin));

 VAR_4->cache = VAR_2;
 VAR_4->subtxnid = FUNC_0();
 VAR_0 = FUNC_2(VAR_0, VAR_4);
 FUNC_1(VAR_3);
 VAR_2->refcount++;
 return VAR_2;
}
