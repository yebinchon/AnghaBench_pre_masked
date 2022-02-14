
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sa_lock; } ;
typedef TYPE_1__ sa_handle_t ;
struct TYPE_8__ {int sa_size; int * sa_data_func; int sa_attr; int * sa_data; } ;
typedef TYPE_2__ sa_bulk_attr_t ;
typedef int sa_attr_type_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int,int ,int *) ;

int
FUNC_4(sa_handle_t *VAR_1, sa_attr_type_t VAR_2, int *VAR_3)
{
 sa_bulk_attr_t VAR_4;
 int VAR_5;

 VAR_4.sa_data = ((void*)0);
 VAR_4.sa_attr = VAR_2;
 VAR_4.sa_data_func = ((void*)0);

 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->sa_lock);
 if ((VAR_5 = FUNC_3(VAR_1, &VAR_4, 1, VAR_0, ((void*)0))) != 0) {
  FUNC_2(&VAR_1->sa_lock);
  return (VAR_5);
 }
 *VAR_3 = VAR_4.sa_size;

 FUNC_2(&VAR_1->sa_lock);
 return (0);
}
