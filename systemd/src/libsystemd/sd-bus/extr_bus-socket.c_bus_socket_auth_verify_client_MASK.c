
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int* bytes; } ;
typedef TYPE_1__ sd_id128_t ;
struct TYPE_10__ {char* rbuffer; int rbuffer_size; int can_fds; TYPE_1__ server_id; scalar_t__ anonymous_auth; int auth; scalar_t__ accept_fd; } ;
typedef TYPE_2__ sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,int,char*,int) ;
 char* FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_1__,TYPE_1__) ;
 int FUNC_8 (TYPE_1__) ;
 int FUNC_9 (char) ;

__attribute__((used)) static int FUNC_10(sd_bus *VAR_4) {
        char *VAR_5, *VAR_6, *VAR_7, *VAR_8;
        sd_id128_t VAR_9;
        int VAR_10;

        FUNC_1(VAR_4);
        VAR_5 = FUNC_5(VAR_4->rbuffer, VAR_4->rbuffer_size, "\r\n", 2);
        if (!VAR_5)
                return 0;

        VAR_6 = FUNC_4(VAR_5 + 2, VAR_4->rbuffer_size - (VAR_5 - (char*) VAR_4->rbuffer) - 2, "\r\n", 2);
        if (!VAR_6)
                return 0;

        if (VAR_4->accept_fd) {
                VAR_7 = FUNC_4(VAR_6 + 2, VAR_4->rbuffer_size - (VAR_6 - (char*) VAR_4->rbuffer) - 2, "\r\n", 2);
                if (!VAR_7)
                        return 0;

                VAR_8 = VAR_7 + 2;
        } else {
                VAR_7 = ((void*)0);
                VAR_8 = VAR_6 + 2;
        }



        if (VAR_5 - (char*) VAR_4->rbuffer == 4) {
                if (FUNC_3(VAR_4->rbuffer, "DATA", 4))
                        return -VAR_3;
        } else if (VAR_5 - (char*) VAR_4->rbuffer == 3 + 32) {






                if (FUNC_3(VAR_4->rbuffer, "OK ", 3))
                        return -VAR_3;
        } else
                return -VAR_3;



        if (VAR_6 - VAR_5 != 2 + 3 + 32)
                return -VAR_3;

        if (FUNC_3(VAR_5 + 2, "OK ", 3))
                return -VAR_3;

        VAR_4->auth = VAR_4->anonymous_auth ? VAR_0 : VAR_1;

        for (unsigned VAR_11 = 0; VAR_11 < 32; VAR_11 += 2) {
                int VAR_12, VAR_13;

                VAR_12 = FUNC_9(VAR_5[2 + 3 + VAR_11]);
                VAR_13 = FUNC_9(VAR_5[2 + 3 + VAR_11 + 1]);

                if (VAR_12 < 0 || VAR_13 < 0)
                        return -VAR_2;

                VAR_9.bytes[VAR_11/2] = ((uint8_t) VAR_12 << 4 | (uint8_t) VAR_13);
        }

        if (!FUNC_8(VAR_4->server_id) &&
            !FUNC_7(VAR_4->server_id, VAR_9))
                return -VAR_3;

        VAR_4->server_id = VAR_9;



        if (VAR_7)
                VAR_4->can_fds =
                        (VAR_7 - VAR_6 == FUNC_0("\r\nAGREE_UNIX_FD")) &&
                        FUNC_3(VAR_6 + 2, "AGREE_UNIX_FD",
                               FUNC_0("AGREE_UNIX_FD")) == 0;

        VAR_4->rbuffer_size -= (VAR_8 - (char*) VAR_4->rbuffer);
        FUNC_6(VAR_4->rbuffer, VAR_8, VAR_4->rbuffer_size);

        VAR_10 = FUNC_2(VAR_4);
        if (VAR_10 < 0)
                return VAR_10;

        return 1;
}
