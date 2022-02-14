
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int txg_node_t ;
struct TYPE_3__ {char* tl_offset; int tl_spa; int tl_lock; int ** tl_head; } ;
typedef TYPE_1__ txg_list_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void *
FUNC_3(txg_list_t *VAR_1, uint64_t VAR_2)
{
 int VAR_3 = VAR_2 & VAR_0;
 txg_node_t *VAR_4;

 FUNC_1(&VAR_1->tl_lock);
 VAR_4 = VAR_1->tl_head[VAR_3];
 FUNC_2(&VAR_1->tl_lock);

 FUNC_0(VAR_1->tl_spa, VAR_2);
 return (VAR_4 == ((void*)0) ? ((void*)0) : (char *)VAR_4 - VAR_1->tl_offset);
}
