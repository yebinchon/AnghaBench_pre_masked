
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int * data; } ;
typedef TYPE_1__ vdev_cmd_data_list_t ;
typedef int tpool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int,int,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,void*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(vdev_cmd_data_list_t *VAR_2)
{
 tpool_t *VAR_3;

 VAR_3 = FUNC_1(1, 5 * FUNC_0(VAR_0), 0, ((void*)0));
 if (VAR_3 == ((void*)0))
  return;


 for (int VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4++) {
  (void) FUNC_3(VAR_3, VAR_1,
      (void *) &VAR_2->data[VAR_4]);
 }


 FUNC_4(VAR_3);
 FUNC_2(VAR_3);
}
