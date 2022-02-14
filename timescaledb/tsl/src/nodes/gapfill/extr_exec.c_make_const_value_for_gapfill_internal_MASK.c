
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_3__ {int typbyval; int typlen; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef int Oid ;
typedef int Datum ;
typedef int Const ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int,int ,int ,int ,int,int ) ;

__attribute__((used)) static Const *
FUNC_3(Oid VAR_1, int64 VAR_2)
{
 TypeCacheEntry *VAR_3 = FUNC_1(VAR_1, 0);
 Datum VAR_4 = FUNC_0(VAR_2, VAR_1);

 return FUNC_2(VAR_1, -1, VAR_0, VAR_3->typlen, VAR_4, 0, VAR_3->typbyval);
}
