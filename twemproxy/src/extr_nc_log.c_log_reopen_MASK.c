
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger {scalar_t__ fd; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int ) ;
 struct logger VAR_5 ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ) ;

void
FUNC_4(void)
{
    struct logger *VAR_6 = &VAR_5;

    if (VAR_6->fd != VAR_3) {
        FUNC_0(VAR_6->fd);
        VAR_6->fd = FUNC_2(VAR_6->name, VAR_2 | VAR_0 | VAR_1, 0644);
        if (VAR_6->fd < 0) {
            FUNC_1("reopening log file '%s' failed, ignored: %s", VAR_6->name,
                       FUNC_3(VAR_4));
        }
    }
}
