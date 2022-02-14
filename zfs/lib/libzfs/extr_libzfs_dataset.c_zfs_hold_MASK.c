
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zfs_hdl; int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct holdarg {char const* snapname; char const* tag; int nvl; int recursive; } ;
typedef int errbuf ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,int ,char const*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (int ,struct holdarg*) ;
 int FUNC_8 (int ,int,char*) ;

int
FUNC_9(zfs_handle_t *VAR_2, const char *VAR_3, const char *VAR_4,
    boolean_t VAR_5, int VAR_6)
{
 int VAR_7;
 struct holdarg VAR_8;

 VAR_8.nvl = FUNC_1();
 VAR_8.snapname = VAR_3;
 VAR_8.tag = VAR_4;
 VAR_8.recursive = VAR_5;
 (void) FUNC_7(FUNC_5(VAR_2), &VAR_8);

 if (FUNC_3(VAR_8.nvl)) {
  char VAR_9[1024];

  FUNC_2(VAR_8.nvl);
  VAR_7 = VAR_0;
  (void) FUNC_4(VAR_9, sizeof (VAR_9),
      FUNC_0(VAR_1,
      "cannot hold snapshot '%s@%s'"),
      VAR_2->zfs_name, VAR_3);
  (void) FUNC_8(VAR_2->zfs_hdl, VAR_7, VAR_9);
  return (VAR_7);
 }

 VAR_7 = FUNC_6(VAR_2, VAR_6, VAR_8.nvl);
 FUNC_2(VAR_8.nvl);

 return (VAR_7);
}
