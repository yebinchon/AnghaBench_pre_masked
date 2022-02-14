
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int * spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int,int,int *) ;

__attribute__((used)) static void
FUNC_3(spa_t *VAR_4)
{
 uint64_t VAR_5;
 objset_t *VAR_6 = VAR_4->spa_meta_objset;
 int VAR_7 = FUNC_2(VAR_6, VAR_1,
     VAR_0, sizeof (uint64_t), 1, &VAR_5);
 if (VAR_7 == VAR_2)
  return;
 FUNC_1(VAR_5);
 FUNC_0(VAR_4, VAR_3, ((void*)0));
}
