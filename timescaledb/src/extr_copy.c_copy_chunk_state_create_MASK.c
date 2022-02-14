
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* data; } ;
struct TYPE_6__ {int next_copy_from; TYPE_1__ fromctx; int dispatch; int * estate; int rel; } ;
typedef int Relation ;
typedef int Hypertable ;
typedef int EState ;
typedef int CopyFromFunc ;
typedef TYPE_2__ CopyChunkState ;


 int * FUNC_0 () ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static CopyChunkState *
FUNC_3(Hypertable *VAR_0, Relation VAR_1, CopyFromFunc VAR_2, void *VAR_3)
{
 CopyChunkState *VAR_4;
 EState *VAR_5 = FUNC_0();

 VAR_4 = FUNC_1(sizeof(CopyChunkState));
 VAR_4->rel = VAR_1;
 VAR_4->estate = VAR_5;
 VAR_4->dispatch = FUNC_2(VAR_0, VAR_5);
 VAR_4->fromctx.data = VAR_3;
 VAR_4->next_copy_from = VAR_2;

 return VAR_4;
}
