
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef size_t uint_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (int ,TYPE_1__*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(zpool_handle_t *VAR_0, nvlist_t **VAR_1, uint_t VAR_2,
    nvlist_t **VAR_3, uint_t VAR_4)
{
 uint_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  uint_t VAR_6;
  char *VAR_7 = FUNC_2(VAR_0->zpool_hdl, VAR_0,
      VAR_1[VAR_5], 0);

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
   char *VAR_8 = FUNC_2(VAR_0->zpool_hdl, VAR_0,
       VAR_3[VAR_6], 0);
   boolean_t VAR_9 = (FUNC_1(VAR_7, VAR_8) == 0);

   FUNC_0(VAR_8);
   if (VAR_9) {
    FUNC_0(VAR_7);
    return (VAR_5);
   }
  }

  FUNC_0(VAR_7);
 }

 return (-1);
}
