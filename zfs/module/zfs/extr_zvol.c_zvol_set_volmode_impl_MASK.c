
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int fstrans_cookie_t ;
struct TYPE_2__ {int (* zv_create_minor ) (char*) ;} ;






 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*,char) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int const VAR_1 ;

__attribute__((used)) static void
FUNC_6(char *VAR_2, uint64_t VAR_3)
{
 fstrans_cookie_t VAR_4 = FUNC_0();

 if (FUNC_2(VAR_2, '@') != ((void*)0))
  return;
 switch (VAR_3) {
  case 128:
   (void) FUNC_5(VAR_2);
   break;
  case 129:
  case 130:
   (void) FUNC_5(VAR_2);
   (void) VAR_0->zv_create_minor(VAR_2);
   break;
  case 131:
   (void) FUNC_5(VAR_2);
   if (VAR_1 == 128)
    break;
   else
    (void) VAR_0->zv_create_minor(VAR_2);
   break;
 }

 FUNC_1(VAR_4);
}
