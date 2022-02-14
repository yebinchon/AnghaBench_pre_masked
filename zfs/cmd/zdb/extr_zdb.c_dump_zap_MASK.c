
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_3__ {char* za_name; int za_num_integers; int za_integer_length; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_longlong_t ;
typedef int objset_t ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (void*,int) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,int ,char*,int,int,void*) ;

__attribute__((used)) static void
FUNC_9(objset_t *VAR_1, uint64_t VAR_2, void *VAR_3, size_t VAR_4)
{
 zap_cursor_t VAR_5;
 zap_attribute_t VAR_6;
 void *VAR_7;
 unsigned VAR_8;

 FUNC_0(VAR_1, VAR_2);
 (void) FUNC_1("\n");

 for (FUNC_6(&VAR_5, VAR_1, VAR_2);
     FUNC_7(&VAR_5, &VAR_6) == 0;
     FUNC_4(&VAR_5)) {
  (void) FUNC_1("\t\t%s = ", VAR_6.za_name);
  if (VAR_6.za_num_integers == 0) {
   (void) FUNC_1("\n");
   continue;
  }
  VAR_7 = FUNC_3(VAR_6.za_num_integers *
      VAR_6.za_integer_length, VAR_0);
  (void) FUNC_8(VAR_1, VAR_2, VAR_6.za_name,
      VAR_6.za_integer_length, VAR_6.za_num_integers, VAR_7);
  if (VAR_6.za_integer_length == 1) {
   (void) FUNC_1("%s", (char *)VAR_7);
  } else {
   for (VAR_8 = 0; VAR_8 < VAR_6.za_num_integers; VAR_8++) {
    switch (VAR_6.za_integer_length) {
    case 2:
     (void) FUNC_1("%u ",
         ((uint16_t *)VAR_7)[VAR_8]);
     break;
    case 4:
     (void) FUNC_1("%u ",
         ((uint32_t *)VAR_7)[VAR_8]);
     break;
    case 8:
     (void) FUNC_1("%lld ",
         (u_longlong_t)((int64_t *)VAR_7)[VAR_8]);
     break;
    }
   }
  }
  (void) FUNC_1("\n");
  FUNC_2(VAR_7, VAR_6.za_num_integers * VAR_6.za_integer_length);
 }
 FUNC_5(&VAR_5);
}
