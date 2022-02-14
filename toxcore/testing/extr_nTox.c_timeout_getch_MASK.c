
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int fd_set ;
typedef int Tox ;


 char VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 char FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_5 (int *) ;

char FUNC_6(Tox *VAR_1)
{
    char VAR_2;
    int VAR_3 = FUNC_5(VAR_1);

    fd_set VAR_4;
    FUNC_1(&VAR_4);
    FUNC_0(0, &VAR_4);
    struct timeval VAR_5;
    VAR_5.tv_sec = 0;
    VAR_5.tv_usec = VAR_3 * 1000;

    VAR_2 = VAR_0;
    int VAR_6 = FUNC_4(1, &VAR_4, ((void*)0), ((void*)0), &VAR_5);

    if (VAR_6 < 0) {
        FUNC_3("select error: maybe interupted");
    } else if (VAR_6 == 0) {
    } else {
        VAR_2 = FUNC_2();
    }

    return VAR_2;
}
