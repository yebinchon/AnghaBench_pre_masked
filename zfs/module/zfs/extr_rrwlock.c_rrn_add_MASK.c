
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int rrwlock_t ;
struct TYPE_4__ {void* rn_tag; int rn_next; int * rn_rrl; } ;
typedef TYPE_1__ rrw_node_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(rrwlock_t *VAR_2, void *VAR_3)
{
 rrw_node_t *VAR_4;

 VAR_4 = FUNC_1(sizeof (*VAR_4), VAR_0);
 VAR_4->rn_rrl = VAR_2;
 VAR_4->rn_next = FUNC_2(VAR_1);
 VAR_4->rn_tag = VAR_3;
 FUNC_0(FUNC_3(VAR_1, VAR_4) == 0);
}
