
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int spa_async_lock; int * spa_async_thread; int spa_async_suspended; } ;
typedef TYPE_1__ spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int * FUNC_3 (int *,int ,int ,TYPE_1__*,int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(spa_t *VAR_5)
{
 FUNC_0(&VAR_5->spa_async_lock);
 if (FUNC_2(VAR_5) &&
     !VAR_5->spa_async_suspended &&
     VAR_5->spa_async_thread == ((void*)0) &&
     VAR_3 != ((void*)0))
  VAR_5->spa_async_thread = FUNC_3(((void*)0), 0,
      VAR_4, VAR_5, 0, &VAR_2, VAR_0, VAR_1);
 FUNC_1(&VAR_5->spa_async_lock);
}
