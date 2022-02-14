
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct logger {char* name; scalar_t__ fd; int level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,char*,int ) ;
 struct logger VAR_7 ;
 scalar_t__ FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

int
FUNC_6(int VAR_8, char *VAR_9)
{
    struct logger *VAR_10 = &VAR_7;

    VAR_10->level = FUNC_0(VAR_0, FUNC_1(VAR_8, VAR_1));
    VAR_10->name = VAR_9;
    if (VAR_9 == ((void*)0) || !FUNC_5(VAR_9)) {
        VAR_10->fd = VAR_5;
    } else {
        VAR_10->fd = FUNC_3(VAR_9, VAR_4 | VAR_2 | VAR_3, 0644);
        if (VAR_10->fd < 0) {
            FUNC_2("opening log file '%s' failed: %s", VAR_9,
                       FUNC_4(VAR_6));
            return -1;
        }
    }

    return 0;
}
