
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dbn_lock; int dbn_dirty; int dbn_name; } ;
typedef TYPE_1__ dsl_bookmark_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static dsl_bookmark_node_t *
FUNC_3(char *VAR_3)
{
 dsl_bookmark_node_t *VAR_4 = FUNC_0(sizeof (*VAR_4), VAR_1);
 VAR_4->dbn_name = FUNC_2(VAR_3);
 VAR_4->dbn_dirty = VAR_0;
 FUNC_1(&VAR_4->dbn_lock, ((void*)0), VAR_2, ((void*)0));
 return (VAR_4);
}
