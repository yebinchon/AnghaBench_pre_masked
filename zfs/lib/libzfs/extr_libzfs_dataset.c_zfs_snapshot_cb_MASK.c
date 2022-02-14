
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_3__ {char* sd_snapname; int sd_nvl; } ;
typedef TYPE_1__ snapdata_t ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,char*,char*,char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *,int (*) (int *,void*),TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(zfs_handle_t *VAR_3, void *VAR_4)
{
 snapdata_t *VAR_5 = VAR_4;
 char VAR_6[VAR_1];
 int VAR_7 = 0;

 if (FUNC_5(VAR_3, VAR_2) == 0) {
  if (FUNC_1(VAR_6, sizeof (VAR_6), "%s@%s", FUNC_3(VAR_3),
      VAR_5->sd_snapname) >= sizeof (VAR_6))
   return (VAR_0);

  FUNC_0(VAR_5->sd_nvl, VAR_6);

  VAR_7 = FUNC_4(VAR_3, FUNC_6, VAR_5);
 }
 FUNC_2(VAR_3);

 return (VAR_7);
}
