
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zilog_t ;
struct TYPE_5__ {scalar_t__ zb_level; } ;
typedef TYPE_2__ zbookmark_phys_t ;
struct bptree_args {int (* ba_func ) (int ,int const*,int ) ;TYPE_1__* ba_phys; scalar_t__ ba_free; int ba_tx; int ba_arg; } ;
typedef int spa_t ;
typedef int dnode_phys_t ;
typedef int blkptr_t ;
struct TYPE_4__ {int bt_uncomp; int bt_comp; int bt_bytes; } ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int *,int const*) ;
 int FUNC_5 (int ,int const*,int ) ;

__attribute__((used)) static int
FUNC_6(spa_t *VAR_1, zilog_t *VAR_2, const blkptr_t *VAR_3,
    const zbookmark_phys_t *VAR_4, const dnode_phys_t *VAR_5, void *VAR_6)
{
 int VAR_7;
 struct bptree_args *VAR_8 = VAR_6;

 if (VAR_4->zb_level == VAR_0 || FUNC_2(VAR_3) ||
     FUNC_3(VAR_3))
  return (0);

 VAR_7 = VAR_8->ba_func(VAR_8->ba_arg, VAR_3, VAR_8->ba_tx);
 if (VAR_7 == 0 && VAR_8->ba_free) {
  VAR_8->ba_phys->bt_bytes -= FUNC_4(VAR_1, VAR_3);
  VAR_8->ba_phys->bt_comp -= FUNC_0(VAR_3);
  VAR_8->ba_phys->bt_uncomp -= FUNC_1(VAR_3);
 }
 return (VAR_7);
}
