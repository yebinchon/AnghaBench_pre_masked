
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_3__ {char* za_name; int za_first_integer; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
typedef int objset_t ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 scalar_t__ FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(objset_t *VAR_0, uint64_t VAR_1, void *VAR_2, size_t VAR_3)
{
 zap_cursor_t VAR_4;
 zap_attribute_t VAR_5;
 const char *VAR_6[] = {
          "not specified",
          "FIFO",
          "Character Device",
          "3 (invalid)",
          "Directory",
          "5 (invalid)",
          "Block Device",
          "7 (invalid)",
          "Regular File",
          "9 (invalid)",
           "Symbolic Link",
           "11 (invalid)",
           "Socket",
           "Door",
           "Event Port",
           "15 (invalid)",
 };

 FUNC_2(VAR_0, VAR_1);
 (void) FUNC_3("\n");

 for (FUNC_6(&VAR_4, VAR_0, VAR_1);
     FUNC_7(&VAR_4, &VAR_5) == 0;
     FUNC_4(&VAR_4)) {
  (void) FUNC_3("\t\t%s = %lld (type: %s)\n",
      VAR_5.za_name, FUNC_0(VAR_5.za_first_integer),
      VAR_6[FUNC_1(VAR_5.za_first_integer)]);
 }
 FUNC_5(&VAR_4);
}
