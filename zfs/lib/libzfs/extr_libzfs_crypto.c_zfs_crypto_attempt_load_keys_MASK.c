
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef int u_longlong_t ;
struct TYPE_3__ {scalar_t__ cb_numattempted; scalar_t__ cb_numfailed; int member_0; } ;
typedef TYPE_1__ loadkey_cbdata_t ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*,int) ;

int
FUNC_6(libzfs_handle_t *VAR_3, char *VAR_4)
{
 int VAR_5;
 zfs_handle_t *VAR_6 = ((void*)0);
 loadkey_cbdata_t VAR_7 = { 0 };

 VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_1 | VAR_2);
 if (VAR_6 == ((void*)0)) {
  VAR_5 = VAR_0;
  goto error;
 }

 VAR_5 = FUNC_1(FUNC_4(VAR_6), &VAR_7);
 if (VAR_5)
  goto error;

 (void) FUNC_2(FUNC_0("%llu / %llu keys successfully loaded\n"),
     (u_longlong_t)(VAR_7.cb_numattempted - VAR_7.cb_numfailed),
     (u_longlong_t)VAR_7.cb_numattempted);

 if (VAR_7.cb_numfailed != 0) {
  VAR_5 = -1;
  goto error;
 }

 FUNC_3(VAR_6);
 return (0);

error:
 if (VAR_6 != ((void*)0))
  FUNC_3(VAR_6);
 return (VAR_5);
}
