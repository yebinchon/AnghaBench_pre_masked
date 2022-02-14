
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int machine; int release; int sysname; } ;
struct instance {int pid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct utsname*) ;

__attribute__((used)) static void
FUNC_2(struct instance *VAR_1)
{
    int VAR_2;
    struct utsname VAR_3;

    VAR_2 = FUNC_1(&VAR_3);
    if (VAR_2 < 0) {
        FUNC_0("nutcracker-%s started on pid %d", VAR_0, VAR_1->pid);
    } else {
        FUNC_0("nutcracker-%s built for %s %s %s started on pid %d",
             VAR_0, VAR_3.sysname, VAR_3.release, VAR_3.machine,
             VAR_1->pid);
    }

    FUNC_0("run, rabbit run / dig that hole, forget the sun / "
         "and when at last the work is done / don't sit down / "
         "it's time to dig another one");
}
