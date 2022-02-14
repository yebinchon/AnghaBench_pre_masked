
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context {int client_negotiate_unix_fds; int server_negotiate_unix_fds; int client_anonymous_auth; int server_anonymous_auth; int fds; } ;
typedef int pthread_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct context*) ;
 int FUNC_3 (int *,int *,int ,struct context*) ;
 int FUNC_4 (int ,void**) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct context) ;

__attribute__((used)) static int FUNC_7(bool VAR_3, bool VAR_4,
                    bool VAR_5, bool VAR_6) {

        struct context VAR_7;
        pthread_t VAR_8;
        void *VAR_9;
        int VAR_10, VAR_11;

        FUNC_6(VAR_7);

        FUNC_1(FUNC_5(VAR_0, VAR_1, 0, VAR_7.fds) >= 0);

        VAR_7.client_negotiate_unix_fds = VAR_3;
        VAR_7.server_negotiate_unix_fds = VAR_4;
        VAR_7.client_anonymous_auth = VAR_5;
        VAR_7.server_anonymous_auth = VAR_6;

        VAR_10 = FUNC_3(&VAR_8, ((void*)0), VAR_2, &VAR_7);
        if (VAR_10 != 0)
                return -VAR_10;

        VAR_10 = FUNC_2(&VAR_7);

        VAR_11 = FUNC_4(VAR_8, &VAR_9);
        if (VAR_11 != 0)
                return -VAR_11;

        if (VAR_10 < 0)
                return VAR_10;

        if (FUNC_0(VAR_9) < 0)
                return FUNC_0(VAR_9);

        return 0;
}
