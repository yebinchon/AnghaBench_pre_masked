
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
typedef int ctl ;
struct TYPE_4__ {int keysize; int entrysize; int * hcxt; } ;
typedef TYPE_1__ HASHCTL ;
typedef int ContinuousAggsCacheInvalEntry ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_2 (char*,int ,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_4()
{
 HASHCTL VAR_7;

 FUNC_1(VAR_6 == ((void*)0));

 VAR_6 = FUNC_0(VAR_4,
               "ConinuousAggsTriggerCtx",
               VAR_0);

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.keysize = sizeof(int32);
 VAR_7.entrysize = sizeof(ContinuousAggsCacheInvalEntry);
 VAR_7.hcxt = VAR_6;

 VAR_5 = FUNC_2("TS Continuous Aggs Cache Inval",
               VAR_1,
               &VAR_7,
               VAR_3 | VAR_2);
}
