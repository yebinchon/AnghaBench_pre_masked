
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int snapdev; } ;
typedef TYPE_1__ zvol_snapdev_cb_arg_t ;
struct TYPE_4__ {int (* zv_create_minor ) (char const*) ;} ;




 TYPE_2__* VAR_0 ;
 int * FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, void *VAR_2)
{
 zvol_snapdev_cb_arg_t *VAR_3 = VAR_2;

 if (FUNC_0(VAR_1, '@') == ((void*)0))
  return (0);

 switch (VAR_3->snapdev) {
  case 128:
   (void) VAR_0->zv_create_minor(VAR_1);
   break;
  case 129:
   (void) FUNC_2(VAR_1);
   break;
 }

 return (0);
}
