
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_3__ {int za_integer_length; int za_num_integers; char* za_name; scalar_t__ za_first_integer; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int val ;
typedef int uint64_t ;
typedef char* u_longlong_t ;
typedef int objset_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,int ,char*,int,int,char*) ;

__attribute__((used)) static void
FUNC_8(objset_t *VAR_0, uint64_t VAR_1, const char *VAR_2)
{
 zap_cursor_t VAR_3;
 zap_attribute_t VAR_4;

 (void) FUNC_2("%s_obj:\n", VAR_2);

 for (FUNC_5(&VAR_3, VAR_0, VAR_1);
     FUNC_6(&VAR_3, &VAR_4) == 0;
     FUNC_3(&VAR_3)) {
  if (VAR_4.za_integer_length == 8) {
   FUNC_0(VAR_4.za_num_integers == 1);
   (void) FUNC_2("\t%s = %llu\n",
       VAR_4.za_name, (u_longlong_t)VAR_4.za_first_integer);
  } else {
   FUNC_0(VAR_4.za_integer_length == 1);
   char VAR_5[1024];
   FUNC_1(FUNC_7(VAR_0, VAR_1, VAR_4.za_name,
       1, sizeof (VAR_5), VAR_5) == 0);
   (void) FUNC_2("\t%s = %s\n", VAR_4.za_name, VAR_5);
  }
 }
 FUNC_4(&VAR_3);
}
