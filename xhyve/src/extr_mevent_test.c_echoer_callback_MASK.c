
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esync {int e_mt; int e_cond; } ;
typedef enum ev_type { ____Placeholder_ev_type } ev_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(int VAR_0, enum ev_type VAR_1, void *VAR_2)
{
 struct esync *VAR_3 = VAR_2;

 FUNC_1(&VAR_3->e_mt);
 FUNC_0(&VAR_3->e_cond);
 FUNC_2(&VAR_3->e_mt);
}
