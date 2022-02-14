
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct holdarg {char* snapname; scalar_t__ recursive; int tag; int nvl; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int (*) (TYPE_1__*,void*),struct holdarg*) ;

__attribute__((used)) static int
FUNC_5(zfs_handle_t *VAR_2, void *VAR_3)
{
 struct holdarg *VAR_4 = VAR_3;
 char VAR_5[VAR_1];
 int VAR_6 = 0;

 if (FUNC_2(VAR_5, sizeof (VAR_5), "%s@%s", VAR_2->zfs_name,
     VAR_4->snapname) >= sizeof (VAR_5))
  return (VAR_0);

 if (FUNC_1(VAR_5))
  FUNC_0(VAR_4->nvl, VAR_5, VAR_4->tag);

 if (VAR_4->recursive)
  VAR_6 = FUNC_4(VAR_2, FUNC_5, VAR_4);
 FUNC_3(VAR_2);
 return (VAR_6);
}
