
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * methods; } ;
struct TYPE_7__ {TYPE_1__ cscan_state; int chunk_relid; } ;
struct TYPE_6__ {int custom_private; } ;
typedef int Node ;
typedef TYPE_2__ CustomScan ;
typedef TYPE_3__ CompressChunkDmlState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static Node *
FUNC_2(CustomScan *VAR_2)
{
 CompressChunkDmlState *VAR_3;

 VAR_3 = (CompressChunkDmlState *) FUNC_1(sizeof(CompressChunkDmlState), VAR_0);
 VAR_3->chunk_relid = FUNC_0(VAR_2->custom_private);
 VAR_3->cscan_state.methods = &VAR_1;
 return (Node *) VAR_3;
}
