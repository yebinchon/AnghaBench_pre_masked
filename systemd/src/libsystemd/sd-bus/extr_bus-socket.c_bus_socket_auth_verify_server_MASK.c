
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int rbuffer_size; int auth_rbegin; scalar_t__ auth; int can_fds; scalar_t__ rbuffer; int accept_fd; } ;
typedef TYPE_1__ sd_bus ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (char const*,size_t,char*) ;
 scalar_t__ FUNC_6 (char const*,size_t,char*) ;
 char* FUNC_7 (char const*,int,char*,int) ;
 int FUNC_8 (scalar_t__,char*,int) ;
 size_t FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,char const*,size_t) ;
 int FUNC_11 (TYPE_1__*,char const*,size_t) ;

__attribute__((used)) static int FUNC_12(sd_bus *VAR_4) {
        char *VAR_5;
        const char *VAR_6;
        size_t VAR_7;
        bool VAR_8 = 0;
        int VAR_9;

        FUNC_0(VAR_4);

        if (VAR_4->rbuffer_size < 1)
                return 0;


        if (*(char*) VAR_4->rbuffer != 0)
                return -VAR_2;

        if (VAR_4->rbuffer_size < 3)
                return 0;


        if (VAR_4->auth_rbegin <= 0)
                VAR_4->auth_rbegin = 1;

        for (;;) {

                VAR_6 = (char*) VAR_4->rbuffer + VAR_4->auth_rbegin;
                VAR_5 = FUNC_7(VAR_6, VAR_4->rbuffer_size - VAR_4->auth_rbegin, "\r\n", 2);
                if (!VAR_5)
                        return VAR_8;

                VAR_7 = VAR_5 - VAR_6;

                if (FUNC_5(VAR_6, VAR_7, "AUTH ANONYMOUS")) {

                        VAR_9 = FUNC_10(VAR_4,
                                                   VAR_6 + FUNC_9("AUTH ANONYMOUS"),
                                                   VAR_7 - FUNC_9("AUTH ANONYMOUS"));
                        if (VAR_9 < 0)
                                return VAR_9;
                        if (VAR_9 == 0)
                                VAR_9 = FUNC_2(VAR_4, "REJECTED\r\n");
                        else {
                                VAR_4->auth = VAR_0;
                                if (VAR_7 <= FUNC_9("AUTH ANONYMOUS"))
                                        VAR_9 = FUNC_2(VAR_4, "DATA\r\n");
                                else
                                        VAR_9 = FUNC_3(VAR_4);
                        }

                } else if (FUNC_5(VAR_6, VAR_7, "AUTH EXTERNAL")) {

                        VAR_9 = FUNC_11(VAR_4,
                                                  VAR_6 + FUNC_9("AUTH EXTERNAL"),
                                                  VAR_7 - FUNC_9("AUTH EXTERNAL"));
                        if (VAR_9 < 0)
                                return VAR_9;
                        if (VAR_9 == 0)
                                VAR_9 = FUNC_2(VAR_4, "REJECTED\r\n");
                        else {
                                VAR_4->auth = VAR_1;
                                if (VAR_7 <= FUNC_9("AUTH EXTERNAL"))
                                        VAR_9 = FUNC_2(VAR_4, "DATA\r\n");
                                else
                                        VAR_9 = FUNC_3(VAR_4);
                        }

                } else if (FUNC_5(VAR_6, VAR_7, "AUTH"))
                        VAR_9 = FUNC_2(VAR_4, "REJECTED EXTERNAL ANONYMOUS\r\n");
                else if (FUNC_6(VAR_6, VAR_7, "CANCEL") ||
                         FUNC_5(VAR_6, VAR_7, "ERROR")) {

                        VAR_4->auth = VAR_3;
                        VAR_9 = FUNC_2(VAR_4, "REJECTED\r\n");

                } else if (FUNC_6(VAR_6, VAR_7, "BEGIN")) {

                        if (VAR_4->auth == VAR_3)
                                VAR_9 = FUNC_2(VAR_4, "ERROR\r\n");
                        else {





                                if (FUNC_1(VAR_4))
                                        return 1;

                                VAR_4->rbuffer_size -= (VAR_5 + 2 - (char*) VAR_4->rbuffer);
                                FUNC_8(VAR_4->rbuffer, VAR_5 + 2, VAR_4->rbuffer_size);
                                return FUNC_4(VAR_4);
                        }

                } else if (FUNC_5(VAR_6, VAR_7, "DATA")) {

                        if (VAR_4->auth == VAR_3)
                                VAR_9 = FUNC_2(VAR_4, "ERROR\r\n");
                        else {
                                if (VAR_4->auth == VAR_0)
                                        VAR_9 = FUNC_10(VAR_4, VAR_6 + 4, VAR_7 - 4);
                                else
                                        VAR_9 = FUNC_11(VAR_4, VAR_6 + 4, VAR_7 - 4);

                                if (VAR_9 < 0)
                                        return VAR_9;
                                if (VAR_9 == 0) {
                                        VAR_4->auth = VAR_3;
                                        VAR_9 = FUNC_2(VAR_4, "REJECTED\r\n");
                                } else
                                        VAR_9 = FUNC_3(VAR_4);
                        }
                } else if (FUNC_6(VAR_6, VAR_7, "NEGOTIATE_UNIX_FD")) {
                        if (VAR_4->auth == VAR_3 || !VAR_4->accept_fd)
                                VAR_9 = FUNC_2(VAR_4, "ERROR\r\n");
                        else {
                                VAR_4->can_fds = 1;
                                VAR_9 = FUNC_2(VAR_4, "AGREE_UNIX_FD\r\n");
                        }
                } else
                        VAR_9 = FUNC_2(VAR_4, "ERROR\r\n");

                if (VAR_9 < 0)
                        return VAR_9;

                VAR_4->auth_rbegin = VAR_5 + 2 - (char*) VAR_4->rbuffer;

                VAR_8 = 1;
        }
}
