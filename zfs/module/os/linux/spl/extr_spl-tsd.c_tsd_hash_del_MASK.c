
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsd_hash_table_t ;
struct TYPE_3__ {int he_pid_list; int he_key_list; int he_list; } ;
typedef TYPE_1__ tsd_hash_entry_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(tsd_hash_table_t *VAR_0, tsd_hash_entry_t *VAR_1)
{
 FUNC_0(&VAR_1->he_list);
 FUNC_1(&VAR_1->he_key_list);
 FUNC_1(&VAR_1->he_pid_list);
}
