
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zpool_handle_t ;
struct TYPE_2__ {scalar_t__ cb_type; int cb_scrub_cmd; } ;
typedef TYPE_1__ scrub_cbdata_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int VAR_2 ;
 char* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__,int ) ;

int
FUNC_7(zpool_handle_t *VAR_3, void *VAR_4)
{
 scrub_cbdata_t *VAR_5 = VAR_4;
 int VAR_6;




 if (FUNC_4(VAR_3) == VAR_1) {
  (void) FUNC_0(VAR_2, FUNC_1("cannot scan '%s': pool is "
      "currently unavailable\n"), FUNC_3(VAR_3));
  return (1);
 }

 VAR_6 = FUNC_6(VAR_3, VAR_5->cb_type, VAR_5->cb_scrub_cmd);

 if (VAR_6 == 0 && FUNC_5(VAR_3) &&
     VAR_5->cb_type == VAR_0) {
  (void) FUNC_2(FUNC_1("warning: will not scrub state that "
      "belongs to the checkpoint of pool '%s'\n"),
      FUNC_3(VAR_3));
 }

 return (VAR_6 != 0);
}
