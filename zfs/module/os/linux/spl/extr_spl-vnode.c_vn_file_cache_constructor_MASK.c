
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int f_list; int f_lock; int f_ref; } ;
typedef TYPE_1__ file_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ,int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, void *VAR_2, int VAR_3)
{
 file_t *VAR_4 = VAR_1;

 FUNC_1(&VAR_4->f_ref, 0);
 FUNC_2(&VAR_4->f_lock, ((void*)0), VAR_0, ((void*)0));
 FUNC_0(&VAR_4->f_list);

 return (0);
}
