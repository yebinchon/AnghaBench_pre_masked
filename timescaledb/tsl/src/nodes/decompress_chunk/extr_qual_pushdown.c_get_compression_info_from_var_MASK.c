
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ varno; scalar_t__ varattno; } ;
typedef TYPE_3__ Var ;
struct TYPE_10__ {int compression_info; TYPE_2__* chunk_rte; TYPE_1__* chunk_rel; } ;
struct TYPE_8__ {int relid; } ;
struct TYPE_7__ {scalar_t__ relid; } ;
typedef TYPE_4__ QualPushdownContext ;
typedef int FormData_hypertable_compression ;


 char* FUNC_0 (int ,scalar_t__,int) ;
 int * FUNC_1 (int ,char*) ;

__attribute__((used)) static inline FormData_hypertable_compression *
FUNC_2(QualPushdownContext *VAR_0, Var *VAR_1)
{
 char *VAR_2;

 if (VAR_1->varno != VAR_0->chunk_rel->relid)
  return ((void*)0);


 if (VAR_1->varattno <= 0)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_0->chunk_rte->relid, VAR_1->varattno, 0);
 return FUNC_1(VAR_0->compression_info, VAR_2);
}
