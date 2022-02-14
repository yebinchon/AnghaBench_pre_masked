
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat_array {int count; int __data; int * data; } ;
typedef int nvpair_t ;
typedef int nvlist_t ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int **,int*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(nvlist_t *VAR_1, const char *VAR_2,
    struct stat_array *VAR_3)
{
 nvpair_t *VAR_4;
 int VAR_5;

 FUNC_4(FUNC_0(VAR_1, VAR_2, &VAR_4) == 0);
 switch (FUNC_1(VAR_4)) {
 case 128:
  VAR_5 = FUNC_3(VAR_4, &VAR_3->data, &VAR_3->count);
  break;
 case 129:
  VAR_5 = FUNC_2(VAR_4, &VAR_3->__data);
  VAR_3->data = &VAR_3->__data;
  VAR_3->count = 1;
  break;
 default:

  VAR_5 = VAR_0;
  break;
 }

 return (VAR_5);
}
