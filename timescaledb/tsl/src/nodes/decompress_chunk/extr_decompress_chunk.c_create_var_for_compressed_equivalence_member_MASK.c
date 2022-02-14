
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ varno; scalar_t__ varattno; scalar_t__ varlevelsup; scalar_t__ varnoold; scalar_t__ varoattno; } ;
typedef TYPE_2__ Var ;
struct TYPE_9__ {scalar_t__ uncompressed_relid_idx; scalar_t__ compressed_relid_idx; TYPE_1__* current_col_info; int compressed_relid; } ;
struct TYPE_7__ {scalar_t__ segmentby_column_index; int attname; } ;
typedef int Node ;
typedef TYPE_3__ EMCreationContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static Node *
FUNC_4(Var *VAR_0, const EMCreationContext *VAR_1)
{

 FUNC_0(VAR_1->current_col_info != ((void*)0));
 FUNC_0(VAR_1->current_col_info->segmentby_column_index > 0);
 FUNC_0(VAR_0->varno == VAR_1->uncompressed_relid_idx);
 FUNC_0(VAR_0->varattno > 0);

 VAR_0 = (Var *) FUNC_2(VAR_0);

 if (VAR_0->varlevelsup == 0)
 {
  VAR_0->varno = VAR_1->compressed_relid_idx;
  VAR_0->varnoold = VAR_1->compressed_relid_idx;
  VAR_0->varattno =
   FUNC_3(VAR_1->compressed_relid, FUNC_1(VAR_1->current_col_info->attname));

  VAR_0->varoattno = VAR_0->varattno;

  return (Node *) VAR_0;
 }

 return ((void*)0);
}
