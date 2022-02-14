
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_3__ {int ** tl_head; int tl_spa; int tl_lock; } ;
typedef TYPE_1__ txg_list_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 size_t VAR_0 ;
 int FUNC_2 (int ,size_t) ;

__attribute__((used)) static boolean_t
FUNC_3(txg_list_t *VAR_1, uint64_t VAR_2)
{
 FUNC_0(FUNC_1(&VAR_1->tl_lock));
 FUNC_2(VAR_1->tl_spa, VAR_2);
 return (VAR_1->tl_head[VAR_2 & VAR_0] == ((void*)0));
}
