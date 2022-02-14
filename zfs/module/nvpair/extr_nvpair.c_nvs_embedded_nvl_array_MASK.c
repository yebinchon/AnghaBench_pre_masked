
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_5__ {int nvs_op; } ;
typedef TYPE_1__ nvstream_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int ** FUNC_0 (int *) ;
 size_t VAR_2 ;
 size_t FUNC_1 (int *) ;



 int FUNC_2 (int **,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *,size_t*) ;

__attribute__((used)) static int
FUNC_6(nvstream_t *VAR_3, nvpair_t *VAR_4, size_t *VAR_5)
{
 size_t VAR_6 = FUNC_1(VAR_4);
 nvlist_t **VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 switch (VAR_3->nvs_op) {
 case 129:
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
   if (FUNC_4(VAR_3, VAR_7[VAR_8]) != 0)
    return (VAR_0);
  break;

 case 130: {
  size_t VAR_9 = VAR_6 * sizeof (uint64_t);
  nvlist_t *VAR_10 = (nvlist_t *)((uintptr_t)VAR_7 + VAR_9);

  FUNC_2(VAR_7, VAR_9);
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
   if (FUNC_4(VAR_3, VAR_10) != 0) {
    FUNC_3(VAR_4);
    return (VAR_0);
   }

   VAR_7[VAR_8] = VAR_10++;
  }
  break;
 }
 case 128: {
  uint64_t VAR_11 = 0;

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
   size_t VAR_12 = 0;

   if (FUNC_5(VAR_3, VAR_7[VAR_8], &VAR_12) != 0)
    return (VAR_1);

   if ((VAR_11 += VAR_12) > VAR_2)
    return (VAR_1);
  }

  *VAR_5 = VAR_11;
  break;
 }
 default:
  return (VAR_1);
 }

 return (0);
}
