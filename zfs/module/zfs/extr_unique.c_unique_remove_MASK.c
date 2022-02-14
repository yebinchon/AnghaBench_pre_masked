
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int un_value; } ;
typedef TYPE_1__ unique_t ;
typedef int uint64_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_5(uint64_t VAR_2)
{
 unique_t VAR_3;
 unique_t *VAR_4;

 VAR_3.un_value = VAR_2;
 FUNC_3(&VAR_1);
 VAR_4 = FUNC_0(&VAR_0, &VAR_3, ((void*)0));
 if (VAR_4 != ((void*)0)) {
  FUNC_1(&VAR_0, VAR_4);
  FUNC_2(VAR_4, sizeof (unique_t));
 }
 FUNC_4(&VAR_1);
}
