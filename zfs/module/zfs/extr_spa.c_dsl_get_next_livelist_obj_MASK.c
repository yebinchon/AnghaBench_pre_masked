
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_3__ {int za_first_integer; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
typedef int objset_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(objset_t *VAR_0, uint64_t VAR_1, uint64_t *VAR_2)
{
 int VAR_3;
 zap_cursor_t VAR_4;
 zap_attribute_t VAR_5;
 FUNC_1(&VAR_4, VAR_0, VAR_1);
 VAR_3 = FUNC_2(&VAR_4, &VAR_5);
 FUNC_0(&VAR_4);
 if (VAR_3 == 0)
  *VAR_2 = VAR_5.za_first_integer;
 return (VAR_3);
}
