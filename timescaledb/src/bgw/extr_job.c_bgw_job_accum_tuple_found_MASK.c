
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mctx; int tuple; } ;
typedef TYPE_1__ TupleInfo ;
struct TYPE_5__ {int list; int alloc_size; } ;
typedef int ScanTupleResult ;
typedef int MemoryContext ;
typedef int BgwJob ;
typedef TYPE_2__ AccumData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static ScanTupleResult
FUNC_3(TupleInfo *VAR_1, void *VAR_2)
{
 AccumData *VAR_3 = VAR_2;
 BgwJob *VAR_4 = FUNC_1(VAR_1->tuple, VAR_3->alloc_size, VAR_1->mctx);
 MemoryContext VAR_5 = FUNC_0(VAR_1->mctx);

 VAR_3->list = FUNC_2(VAR_3->list, VAR_4);

 FUNC_0(VAR_5);
 return VAR_0;
}
