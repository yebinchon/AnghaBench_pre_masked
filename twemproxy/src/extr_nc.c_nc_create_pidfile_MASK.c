
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct instance {int pidfile; int pid_filename; int pid; } ;
typedef scalar_t__ ssize_t ;
typedef int rstatus_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int,char*,int ) ;
 scalar_t__ FUNC_3 (int,char*,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static rstatus_t
FUNC_6(struct instance *VAR_7)
{
    char VAR_8[VAR_2];
    int VAR_9, VAR_10;
    ssize_t VAR_11;

    VAR_9 = FUNC_4(VAR_7->pid_filename, VAR_5 | VAR_3 | VAR_4, 0644);
    if (VAR_9 < 0) {
        FUNC_1("opening pid file '%s' failed: %s", VAR_7->pid_filename,
                  FUNC_5(VAR_6));
        return VAR_0;
    }
    VAR_7->pidfile = 1;

    VAR_10 = FUNC_2(VAR_8, VAR_2, "%d", VAR_7->pid);

    VAR_11 = FUNC_3(VAR_9, VAR_8, VAR_10);
    if (VAR_11 < 0) {
        FUNC_1("write to pid file '%s' failed: %s", VAR_7->pid_filename,
                  FUNC_5(VAR_6));
        return VAR_0;
    }

    FUNC_0(VAR_9);

    return VAR_1;
}
