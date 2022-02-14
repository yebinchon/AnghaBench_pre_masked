
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat_array {int count; scalar_t__* data; } ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (struct stat_array*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,unsigned int) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 scalar_t__ FUNC_3 (int *,char const*,struct stat_array*) ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static struct stat_array *
FUNC_6(const char **VAR_1, unsigned int VAR_2, nvlist_t *VAR_3,
    nvlist_t *VAR_4)
{
 nvlist_t *VAR_5 = ((void*)0), *VAR_6;
 struct stat_array *VAR_7, *VAR_8, *VAR_9;
 int VAR_10, VAR_11;
 unsigned int VAR_12 = (sizeof (struct stat_array)) * VAR_2;


 FUNC_5(FUNC_2(VAR_4, VAR_0,
     &VAR_6) == 0);
 if (VAR_3) {
  FUNC_5(FUNC_2(VAR_3, VAR_0,
      &VAR_5) == 0);
 }

 VAR_8 = FUNC_4(VAR_12);
 VAR_7 = FUNC_4(VAR_12);
 VAR_9 = FUNC_4(VAR_12);

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  FUNC_5(FUNC_3(VAR_6, VAR_1[VAR_11],
      &VAR_8[VAR_11]) == 0);
  VAR_9[VAR_11].count = VAR_8[VAR_11].count;
  VAR_12 = VAR_9[VAR_11].count * sizeof (VAR_9[VAR_11].data[0]);
  VAR_9[VAR_11].data = FUNC_4(VAR_12);
  FUNC_1(VAR_9[VAR_11].data, VAR_8[VAR_11].data, VAR_12);

  if (VAR_5) {
   FUNC_5(FUNC_3(VAR_5, VAR_1[VAR_11],
       &VAR_7[VAR_11]) == 0);
   for (VAR_10 = 0; VAR_10 < VAR_7[VAR_11].count; VAR_10++)
    VAR_9[VAR_11].data[VAR_10] -= VAR_7[VAR_11].data[VAR_10];
  }
 }
 FUNC_0(VAR_8);
 FUNC_0(VAR_7);
 return (VAR_9);
}
