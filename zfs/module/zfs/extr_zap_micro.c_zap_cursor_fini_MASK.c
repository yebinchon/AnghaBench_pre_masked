
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * zc_objset; TYPE_3__* zc_leaf; TYPE_2__* zc_zap; } ;
typedef TYPE_1__ zap_cursor_t ;
struct TYPE_7__ {int l_rwlock; } ;
struct TYPE_6__ {int zap_rwlock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;

void
FUNC_3(zap_cursor_t *VAR_1)
{
 if (VAR_1->zc_zap) {
  FUNC_0(&VAR_1->zc_zap->zap_rwlock, VAR_0);
  FUNC_2(VAR_1->zc_zap, ((void*)0));
  VAR_1->zc_zap = ((void*)0);
 }
 if (VAR_1->zc_leaf) {
  FUNC_0(&VAR_1->zc_leaf->l_rwlock, VAR_0);
  FUNC_1(VAR_1->zc_leaf);
  VAR_1->zc_leaf = ((void*)0);
 }
 VAR_1->zc_objset = ((void*)0);
}
