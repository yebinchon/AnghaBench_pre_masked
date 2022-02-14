
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int custom_private; } ;
struct TYPE_5__ {int * methods; } ;
struct TYPE_6__ {int varattno_map; int reverse; int chunk_relid; int hypertable_id; TYPE_1__ csstate; } ;
typedef int Node ;
typedef int List ;
typedef TYPE_2__ DecompressChunkState ;
typedef TYPE_3__ CustomScan ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,int ) ;

Node *
FUNC_6(CustomScan *VAR_2)
{
 DecompressChunkState *VAR_3;
 List *VAR_4;

 VAR_3 = (DecompressChunkState *) FUNC_5(sizeof(DecompressChunkState), VAR_0);

 VAR_3->csstate.methods = &VAR_1;

 VAR_4 = FUNC_0(VAR_2->custom_private);
 VAR_3->hypertable_id = FUNC_1(VAR_4);
 VAR_3->chunk_relid = FUNC_3(VAR_4);
 VAR_3->reverse = FUNC_4(VAR_4);
 VAR_3->varattno_map = FUNC_2(VAR_2->custom_private);

 return (Node *) VAR_3;
}
