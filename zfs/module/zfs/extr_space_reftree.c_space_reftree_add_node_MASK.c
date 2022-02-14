
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int sr_refcnt; int sr_offset; } ;
typedef TYPE_1__ space_ref_t ;
typedef int int64_t ;
typedef int avl_tree_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;

__attribute__((used)) static void
FUNC_2(avl_tree_t *VAR_1, uint64_t VAR_2, int64_t VAR_3)
{
 space_ref_t *VAR_4;

 VAR_4 = FUNC_1(sizeof (*VAR_4), VAR_0);
 VAR_4->sr_offset = VAR_2;
 VAR_4->sr_refcnt = VAR_3;

 FUNC_0(VAR_1, VAR_4);
}
