
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ zri_curinstrs; scalar_t__ zri_maxinstrs; void* zri_timed_out; void* zri_canceled; int zri_sync; } ;
typedef TYPE_1__ zcp_run_info_t ;
typedef int lua_State ;
typedef int lua_Debug ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 TYPE_1__* FUNC_4 (int *,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_5(lua_State *VAR_6, lua_Debug *VAR_7)
{
 FUNC_2(VAR_6, VAR_3, VAR_4);
 zcp_run_info_t *VAR_8 = FUNC_4(VAR_6, -1);





 if (VAR_8->zri_canceled ||
     (!VAR_8->zri_sync && FUNC_0(VAR_2) && FUNC_0(VAR_1))) {
  VAR_8->zri_canceled = VAR_0;
  (void) FUNC_3(VAR_6, "Channel program was canceled.");
  (void) FUNC_1(VAR_6);

 }





 VAR_8->zri_curinstrs += VAR_5;
 if (VAR_8->zri_maxinstrs != 0 && VAR_8->zri_curinstrs > VAR_8->zri_maxinstrs) {
  VAR_8->zri_timed_out = VAR_0;
  (void) FUNC_3(VAR_6,
      "Channel program timed out.");
  (void) FUNC_1(VAR_6);

 }
}
