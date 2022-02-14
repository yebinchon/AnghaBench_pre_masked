
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct timespec*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char const*,int) ;
 int VAR_4 ;
 int FUNC_4 (int *,int *,struct timespec*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_7(const char *VAR_7)
{
    int VAR_8;
    struct timespec VAR_9;


    FUNC_1(VAR_0, &VAR_9);
    VAR_9.tv_sec += 5;
    FUNC_5(&VAR_4);
    VAR_8 = VAR_3 ? 0 : FUNC_4(&VAR_6, &VAR_4, &VAR_9);
    FUNC_6(&VAR_4);

    FUNC_0(!VAR_8 || VAR_8 == VAR_1);

    if (VAR_8) {
        FUNC_3(VAR_5,
                "%s (timeout after %d secs!\n", VAR_7, 5);
        FUNC_2(1);
    }
}
