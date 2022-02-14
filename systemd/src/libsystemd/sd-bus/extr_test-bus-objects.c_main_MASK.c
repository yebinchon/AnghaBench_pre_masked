
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int automatic_integer_property; int automatic_string_property; int something; int fds; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct context*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int ,struct context*) ;
 int FUNC_5 (int ,void**) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (char*) ;

int FUNC_8(int VAR_4, char *VAR_5[]) {
        struct context VAR_6 = {};
        pthread_t VAR_7;
        void *VAR_8;
        int VAR_9, VAR_10;

        VAR_6.automatic_integer_property = 4711;
        FUNC_1(VAR_6.automatic_string_property = FUNC_7("dudeldu"));

        FUNC_1(FUNC_6(VAR_0, VAR_2, 0, VAR_6.fds) >= 0);

        VAR_9 = FUNC_4(&VAR_7, ((void*)0), VAR_3, &VAR_6);
        if (VAR_9 != 0)
                return -VAR_9;

        VAR_9 = FUNC_2(&VAR_6);

        VAR_10 = FUNC_5(VAR_7, &VAR_8);
        if (VAR_10 != 0)
                return -VAR_10;

        if (VAR_9 < 0)
                return VAR_9;

        if (FUNC_0(VAR_8) < 0)
                return FUNC_0(VAR_8);

        FUNC_3(VAR_6.something);
        FUNC_3(VAR_6.automatic_string_property);

        return VAR_1;
}
