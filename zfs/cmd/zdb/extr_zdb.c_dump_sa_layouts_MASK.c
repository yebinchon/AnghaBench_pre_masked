
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_3__ {char* za_name; int za_num_integers; int za_integer_length; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
typedef int objset_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (scalar_t__*,int) ;
 scalar_t__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ) ;
 scalar_t__ FUNC_8 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *,int ,char*,int,int,scalar_t__*) ;

__attribute__((used)) static void
FUNC_10(objset_t *VAR_1, uint64_t VAR_2, void *VAR_3, size_t VAR_4)
{
 zap_cursor_t VAR_5;
 zap_attribute_t VAR_6;
 uint16_t *VAR_7;
 unsigned VAR_8;

 FUNC_1(VAR_1, VAR_2);
 (void) FUNC_2("\n");

 for (FUNC_7(&VAR_5, VAR_1, VAR_2);
     FUNC_8(&VAR_5, &VAR_6) == 0;
     FUNC_5(&VAR_5)) {
  (void) FUNC_2("\t\t%s = [", VAR_6.za_name);
  if (VAR_6.za_num_integers == 0) {
   (void) FUNC_2("\n");
   continue;
  }

  FUNC_0(VAR_6.za_integer_length == 2);
  VAR_7 = FUNC_4(VAR_6.za_num_integers *
      VAR_6.za_integer_length, VAR_0);

  FUNC_0(FUNC_9(VAR_1, VAR_2, VAR_6.za_name,
      VAR_6.za_integer_length,
      VAR_6.za_num_integers, VAR_7) == 0);

  for (VAR_8 = 0; VAR_8 != VAR_6.za_num_integers; VAR_8++)
   (void) FUNC_2(" %d ", (int)VAR_7[VAR_8]);
  (void) FUNC_2("]\n");
  FUNC_3(VAR_7,
      VAR_6.za_num_integers * VAR_6.za_integer_length);
 }
 FUNC_6(&VAR_5);
}
