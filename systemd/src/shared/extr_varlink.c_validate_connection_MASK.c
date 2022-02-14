
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ uid; scalar_t__ n_connections; scalar_t__ connections_max; unsigned int connections_per_uid_max; int by_uid; int flags; } ;
typedef struct ucred const VarlinkServer ;


 scalar_t__ FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ucred const*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct ucred const*,char*,...) ;

__attribute__((used)) static int FUNC_8(VarlinkServer *VAR_3, const struct ucred *VAR_4) {
        int VAR_5 = -1;

        FUNC_3(VAR_3);
        FUNC_3(VAR_4);

        if (FUNC_0(VAR_3->flags, VAR_2))
                VAR_5 = VAR_4->uid == 0;

        if (FUNC_0(VAR_3->flags, VAR_1))
                VAR_5 = VAR_5 > 0 || VAR_4->uid == FUNC_4();

        if (VAR_5 == 0) {

                FUNC_7(VAR_3, "Unprivileged client attempted connection, refusing.");
                return 0;
        }

        if (VAR_3->n_connections >= VAR_3->connections_max) {
                FUNC_7(VAR_3, "Connection limit of %u reached, refusing.", VAR_3->connections_max);
                return 0;
        }

        if (FUNC_0(VAR_3->flags, VAR_0)) {
                unsigned VAR_6;

                if (!FUNC_6(VAR_4->uid)) {
                        FUNC_7(VAR_3, "Client with invalid UID attempted connection, refusing.");
                        return 0;
                }

                VAR_6 = FUNC_1(FUNC_5(VAR_3->by_uid, FUNC_2(VAR_4->uid)));
                if (VAR_6 >= VAR_3->connections_per_uid_max) {
                        FUNC_7(VAR_3, "Per-UID connection limit of %u reached, refusing.",
                                           VAR_3->connections_per_uid_max);
                        return 0;
                }
        }

        return 1;
}
