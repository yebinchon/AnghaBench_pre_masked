
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; int max_elements; int num_elements; } ;
typedef TYPE_1__ uint64_vec ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int * FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_6(void)
{
 uint64_vec VAR_1;
 int VAR_2;
 FUNC_5(&VAR_1, VAR_0, 100);
 for (VAR_2 = 0; VAR_2 < 30; VAR_2++)
  FUNC_2(&VAR_1, VAR_2 + 3);

 FUNC_0(VAR_1.num_elements, 30);
 FUNC_0(VAR_1.max_elements, 100);
 for (VAR_2 = 0; VAR_2 < 30; VAR_2++)
  FUNC_0(*FUNC_3(&VAR_1, VAR_2), VAR_2 + 3);

 FUNC_4(&VAR_1);
 FUNC_0(VAR_1.num_elements, 0);
 FUNC_0(VAR_1.max_elements, 0);
 FUNC_1(VAR_1.data, ((void*)0));
}
