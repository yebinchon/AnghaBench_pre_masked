
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ga_cbp; scalar_t__ ga_verbose; } ;
typedef TYPE_1__ get_all_state_t ;
typedef int get_all_cb_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(get_all_cb_t *VAR_2, boolean_t VAR_3)
{
 get_all_state_t VAR_4 = {
     .ga_verbose = VAR_3,
     .ga_cbp = VAR_2
 };

 if (VAR_3)
  FUNC_2(FUNC_1("Reading ZFS config"));
 (void) FUNC_3(VAR_0, VAR_1, &VAR_4);

 if (VAR_3)
  FUNC_0(FUNC_1("done."));
}
