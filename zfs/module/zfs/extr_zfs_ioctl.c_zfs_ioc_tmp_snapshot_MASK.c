
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zc_cleanup_fd; int zc_value; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int u_longlong_t ;
typedef int minor_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,int ,char*) ;
 char* FUNC_2 (char*,int ,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(zfs_cmd_t *VAR_0)
{
 char *VAR_1;
 char *VAR_2;
 int VAR_3;
 minor_t VAR_4;

 VAR_3 = FUNC_5(VAR_0->zc_cleanup_fd, &VAR_4);
 if (VAR_3 != 0)
  return (VAR_3);

 VAR_1 = FUNC_2("%s-%016llx", VAR_0->zc_value,
     (u_longlong_t)FUNC_0());
 VAR_2 = FUNC_2("%%%s", VAR_0->zc_value);

 VAR_3 = FUNC_1(VAR_0->zc_name, VAR_1, VAR_4,
     VAR_2);
 if (VAR_3 == 0)
  (void) FUNC_4(VAR_0->zc_value, VAR_1,
      sizeof (VAR_0->zc_value));
 FUNC_3(VAR_1);
 FUNC_3(VAR_2);
 FUNC_6(VAR_0->zc_cleanup_fd);
 return (VAR_3);
}
