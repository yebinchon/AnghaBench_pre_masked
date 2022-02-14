
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockinfo {int addr; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int si ;


 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (struct sockinfo*,int ,int) ;
 char* FUNC_2 (struct sockaddr*,int) ;

char *
FUNC_3(int VAR_0)
{
    static struct sockinfo VAR_1;
    struct sockaddr *VAR_2;
    socklen_t VAR_3;
    int VAR_4;

    FUNC_1(&VAR_1, 0, sizeof(VAR_1));
    VAR_2 = (struct sockaddr *)&VAR_1.addr;
    VAR_3 = sizeof(VAR_1.addr);

    VAR_4 = FUNC_0(VAR_0, VAR_2, &VAR_3);
    if (VAR_4 < 0) {
        return "unknown";
    }

    return FUNC_2(VAR_2, VAR_3);
}
