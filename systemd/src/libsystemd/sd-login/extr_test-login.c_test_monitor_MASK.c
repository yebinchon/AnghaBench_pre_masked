
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
typedef scalar_t__ uint64_t ;
struct pollfd {int events; int fd; } ;
typedef int sd_login_monitor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pollfd*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (char*,int **) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void) {
        sd_login_monitor *VAR_1 = ((void*)0);
        unsigned VAR_2;
        int VAR_3;

        VAR_3 = FUNC_8("session", &VAR_1);
        FUNC_0(VAR_3 >= 0);

        for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
                struct pollfd VAR_4 = {};
                usec_t VAR_5, VAR_6;

                FUNC_0((VAR_4.fd = FUNC_6(VAR_1)) >= 0);
                FUNC_0((VAR_4.events = FUNC_5(VAR_1)) >= 0);

                FUNC_0(FUNC_7(VAR_1, &VAR_5) >= 0);

                VAR_6 = FUNC_1(VAR_0);

                VAR_3 = FUNC_2(&VAR_4, 1,
                         VAR_5 == (uint64_t) -1 ? -1 :
                         VAR_5 > VAR_6 ? (int) ((VAR_5 - VAR_6) / 1000) :
                         0);

                FUNC_0(VAR_3 >= 0);

                FUNC_4(VAR_1);
                FUNC_3("Wake!\n");
        }

        FUNC_9(VAR_1);
}
