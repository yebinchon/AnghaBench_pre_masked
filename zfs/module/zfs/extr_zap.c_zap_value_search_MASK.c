
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_5__ {int za_first_integer; int za_name; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
typedef int objset_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,TYPE_1__*) ;

int
FUNC_7(objset_t *VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    char *VAR_5)
{
 zap_cursor_t VAR_6;
 int VAR_7;

 if (VAR_4 == 0)
  VAR_4 = -1ULL;

 zap_attribute_t *VAR_8 = FUNC_0(sizeof (*VAR_8), VAR_0);
 for (FUNC_5(&VAR_6, VAR_1, VAR_2);
     (VAR_7 = FUNC_6(&VAR_6, VAR_8)) == 0;
     FUNC_3(&VAR_6)) {
  if ((VAR_8->za_first_integer & VAR_4) == (VAR_3 & VAR_4)) {
   (void) FUNC_2(VAR_5, VAR_8->za_name);
   break;
  }
 }
 FUNC_4(&VAR_6);
 FUNC_1(VAR_8, sizeof (*VAR_8));
 return (VAR_7);
}
