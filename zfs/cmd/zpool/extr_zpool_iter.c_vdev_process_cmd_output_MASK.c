
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cols_cnt; char** cols; char** lines; int lines_cnt; } ;
typedef TYPE_1__ vdev_cmd_data_t ;


 char** FUNC_0 (char**,int) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 void* FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(vdev_cmd_data_t *VAR_0, char *VAR_1)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3 = VAR_1;
 char *VAR_4;
 char **VAR_5;

 if (VAR_1 == ((void*)0))
  return (1);

 VAR_4 = FUNC_1(VAR_1, '=');
 if (VAR_4 != ((void*)0)) {




  *VAR_4 = '\0';
  VAR_2 = VAR_1;
  VAR_3 = VAR_4 + 1;
 } else {
  VAR_3 = VAR_1;
 }


 if (VAR_2 != ((void*)0)) {
  for (int VAR_6 = 0; VAR_6 < VAR_0->cols_cnt; VAR_6++) {
   if (FUNC_2(VAR_2, VAR_0->cols[VAR_6]) == 0)
    return (0);
  }
 }

 if (VAR_3 != ((void*)0)) {
  VAR_5 = FUNC_0(VAR_0->lines,
      (VAR_0->lines_cnt + 1) * sizeof (*VAR_0->lines));
  if (VAR_5 == ((void*)0))
   return (1);

  VAR_0->lines = VAR_5;
  VAR_0->lines[VAR_0->lines_cnt] = FUNC_3(VAR_3);
  VAR_0->lines_cnt++;
 }

 if (VAR_2 != ((void*)0)) {
  VAR_5 = FUNC_0(VAR_0->cols,
      (VAR_0->cols_cnt + 1) * sizeof (*VAR_0->cols));
  if (VAR_5 == ((void*)0))
   return (1);

  VAR_0->cols = VAR_5;
  VAR_0->cols[VAR_0->cols_cnt] = FUNC_3(VAR_2);
  VAR_0->cols_cnt++;
 }

 if (VAR_3 != ((void*)0) && VAR_2 == ((void*)0))
  return (1);

 return (0);
}
