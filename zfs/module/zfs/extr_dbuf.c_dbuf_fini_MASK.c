
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hash_table_mask; int hash_table; int * hash_mutexes; } ;
typedef TYPE_1__ dbuf_hash_table_t ;
typedef size_t dbuf_cached_state_t ;
struct TYPE_5__ {int cache; int size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int *) ;

void
FUNC_14(void)
{
 dbuf_hash_table_t *VAR_11 = &VAR_8;
 int VAR_12;

 FUNC_3();

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
  FUNC_8(&VAR_11->hash_mutexes[VAR_12]);







 FUNC_5(VAR_11->hash_table, (VAR_11->hash_table_mask + 1) * sizeof (void *));

 FUNC_4(VAR_9);
 FUNC_11(VAR_3);

 FUNC_9(&VAR_6);
 VAR_7 = VAR_0;
 while (VAR_7) {
  FUNC_1(&VAR_5);
  FUNC_2(&VAR_5, &VAR_6);
 }
 FUNC_10(&VAR_6);

 FUNC_8(&VAR_6);
 FUNC_0(&VAR_5);

 for (dbuf_cached_state_t VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  FUNC_13(&VAR_4[VAR_13].size);
  FUNC_7(VAR_4[VAR_13].cache);
 }

 if (VAR_10 != ((void*)0)) {
  FUNC_6(VAR_10);
  VAR_10 = ((void*)0);
 }
}
