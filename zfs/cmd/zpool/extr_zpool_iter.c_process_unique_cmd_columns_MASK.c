
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cols_cnt; char** cols; char** lines; } ;
typedef TYPE_1__ vdev_cmd_data_t ;
struct TYPE_5__ {int count; char** uniq_cols; int uniq_cols_cnt; int* uniq_cols_width; TYPE_1__* data; } ;
typedef TYPE_2__ vdev_cmd_data_list_t ;


 int FUNC_0 (int,int) ;
 char** FUNC_1 (char**,int) ;
 int* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(vdev_cmd_data_list_t *VAR_0)
{
 char **VAR_1 = ((void*)0), **VAR_2 = ((void*)0);
 int *VAR_3;
 vdev_cmd_data_t *VAR_4;
 int VAR_5 = 0;
 int VAR_6;


 for (int VAR_7 = 0; VAR_7 < VAR_0->count; VAR_7++) {
  VAR_4 = &VAR_0->data[VAR_7];

  for (int VAR_8 = 0; VAR_8 < VAR_4->cols_cnt; VAR_8++) {

   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    if (FUNC_3(VAR_4->cols[VAR_8], VAR_1[VAR_6]) == 0)
     break;
   }
   if (VAR_6 == VAR_5) {

    VAR_2 = FUNC_1(VAR_1, sizeof (*VAR_1) *
        (VAR_5 + 1));
    if (VAR_2 == ((void*)0))
     break;
    VAR_1 = VAR_2;
    VAR_1[VAR_5] = VAR_4->cols[VAR_8];
    VAR_5++;
   }
  }
 }






 VAR_3 = FUNC_2(sizeof (*VAR_3) * VAR_5);
 for (int VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {

  VAR_3[VAR_9] = FUNC_4(VAR_1[VAR_9]);

  for (int VAR_10 = 0; VAR_10 < VAR_0->count; VAR_10++) {

   VAR_4 = &VAR_0->data[VAR_10];
   for (VAR_6 = 0; VAR_6 < VAR_4->cols_cnt; VAR_6++) {

    if (FUNC_3(VAR_4->cols[VAR_6], VAR_1[VAR_9]) == 0) {

     VAR_3[VAR_9] =
         FUNC_0(VAR_3[VAR_9],
         FUNC_4(VAR_4->lines[VAR_6]));
    }
   }
  }
 }

 VAR_0->uniq_cols = VAR_1;
 VAR_0->uniq_cols_cnt = VAR_5;
 VAR_0->uniq_cols_width = VAR_3;
}
