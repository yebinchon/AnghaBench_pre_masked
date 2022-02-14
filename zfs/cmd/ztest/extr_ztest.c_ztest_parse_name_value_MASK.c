
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zo_special_vdevs; int zo_verbose; } ;
typedef TYPE_1__ ztest_shared_opts_t ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_4 ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_5, ztest_shared_opts_t *VAR_6)
{
 char VAR_7[32];
 char *VAR_8;
 int VAR_9 = VAR_3;

 (void) FUNC_4(VAR_7, VAR_5, sizeof (VAR_7));

 VAR_8 = FUNC_2(VAR_7, '=');
 if (VAR_8 == ((void*)0)) {
  (void) FUNC_0(VAR_4, "missing value in property=value "
      "'-C' argument (%s)\n", VAR_5);
  FUNC_5(VAR_0);
 }
 *(VAR_8) = '\0';
 VAR_8++;

 if (FUNC_3(VAR_8, "on") == 0) {
  VAR_9 = VAR_2;
 } else if (FUNC_3(VAR_8, "off") == 0) {
  VAR_9 = VAR_1;
 } else if (FUNC_3(VAR_8, "random") == 0) {
  VAR_9 = VAR_3;
 } else {
  (void) FUNC_0(VAR_4, "invalid property value '%s'\n", VAR_8);
  FUNC_5(VAR_0);
 }

 if (FUNC_3(VAR_7, "special") == 0) {
  VAR_6->zo_special_vdevs = VAR_9;
 } else {
  (void) FUNC_0(VAR_4, "invalid property name '%s'\n", VAR_7);
  FUNC_5(VAR_0);
 }
 if (VAR_6->zo_verbose >= 3)
  (void) FUNC_1("%s vdev state is '%s'\n", VAR_7, VAR_8);
}
