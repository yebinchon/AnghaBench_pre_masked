
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int name; int * gc; } ;
typedef TYPE_1__ zcp_list_info_t ;
typedef int lua_State ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int) ;
 TYPE_1__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 TYPE_1__ VAR_8 ;

int
FUNC_9(lua_State *VAR_9)
{
 int VAR_10;
 zcp_list_info_t *VAR_11[] = {
  &VAR_1,
  &VAR_6,
  &VAR_8,
  &VAR_5,
  &VAR_2,
  &VAR_7,
  &VAR_0,
  &VAR_3,
  ((void*)0)
 };

 FUNC_1(VAR_9);

 for (VAR_10 = 0; VAR_11[VAR_10] != ((void*)0); VAR_10++) {
  zcp_list_info_t *VAR_12 = VAR_11[VAR_10];

  if (VAR_12->gc != ((void*)0)) {





   (void) FUNC_0(VAR_9, VAR_12->name);
   (void) FUNC_6(VAR_9, "__gc");
   FUNC_4(VAR_9, VAR_12->gc);
   FUNC_8(VAR_9, -3);
   FUNC_2(VAR_9, 1);
  }

  FUNC_5(VAR_9, VAR_12);
  FUNC_3(VAR_9, &VAR_4, 1);
  FUNC_7(VAR_9, -2, VAR_12->name);
  VAR_12++;
 }

 return (1);
}
