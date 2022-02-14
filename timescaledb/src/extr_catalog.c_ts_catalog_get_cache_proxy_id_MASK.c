
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* caches; } ;
struct TYPE_5__ {int inval_proxy_id; } ;
typedef int Oid ;
typedef TYPE_2__ Catalog ;
typedef size_t CacheType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;

Oid
FUNC_5(Catalog *VAR_3, CacheType VAR_4)
{
 if (!FUNC_2(VAR_3))
 {
  Oid VAR_5;






  if (!FUNC_0())
   return VAR_1;

  VAR_5 = FUNC_3(VAR_0, 1);

  if (!FUNC_1(VAR_5))
   return VAR_1;

  return FUNC_4(VAR_2[VAR_4], VAR_5);
 }

 return VAR_3->caches[VAR_4].inval_proxy_id;
}
