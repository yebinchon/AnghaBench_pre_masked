
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct holdarg {char* snapname; scalar_t__ recursive; int nvl; int tag; void* error; } ;
typedef int nvlist_t ;
typedef int name ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,int **) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int (*) (TYPE_1__*,void*),struct holdarg*) ;

__attribute__((used)) static int
FUNC_9(zfs_handle_t *VAR_4, void *VAR_5)
{
 struct holdarg *VAR_6 = VAR_5;
 char VAR_7[VAR_3];
 int VAR_8 = 0;
 nvlist_t *VAR_9;

 if (FUNC_6(VAR_7, sizeof (VAR_7), "%s@%s", VAR_4->zfs_name,
     VAR_6->snapname) >= sizeof (VAR_7)) {
  VAR_6->error = VAR_0;
  VAR_8 = VAR_0;
 }

 if (FUNC_4(VAR_7, &VAR_9) != 0) {
  VAR_6->error = VAR_1;
 } else if (!FUNC_5(VAR_9, VAR_6->tag)) {
  VAR_6->error = VAR_2;
 } else {
  nvlist_t *VAR_10 = FUNC_2();
  FUNC_0(VAR_10, VAR_6->tag);
  FUNC_1(VAR_6->nvl, VAR_7, VAR_10);
  FUNC_3(VAR_10);
 }

 if (VAR_6->recursive)
  VAR_8 = FUNC_8(VAR_4, FUNC_9, VAR_6);
 FUNC_7(VAR_4);
 return (VAR_8);
}
