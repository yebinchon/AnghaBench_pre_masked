
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* uic_cb ) (int ,int *,int ,int ) ;int uic_arg; int uic_txg; int uic_spa; } ;
typedef TYPE_1__ unflushed_iter_cb_arg_t ;
typedef int space_map_entry_t ;


 int FUNC_0 (int ,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_1(space_map_entry_t *VAR_0, void *VAR_1)
{
 unflushed_iter_cb_arg_t *VAR_2 = VAR_1;
 return (VAR_2->uic_cb(VAR_2->uic_spa, VAR_0, VAR_2->uic_txg, VAR_2->uic_arg));
}
