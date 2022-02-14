
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct context {int quit; int * fds; } ;
typedef int sd_id128_t ;
typedef int sd_bus ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (int *,int *,char*,char*,int ,int *,int ) ;
 scalar_t__ FUNC_6 (int *,int *,char*,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int *,char*) ;
 scalar_t__ FUNC_8 (int *,int *,char*,char*,int ,struct context*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int **) ;
 int FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (int *,int ,int ) ;
 scalar_t__ FUNC_13 (int *,int,int ) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void *FUNC_18(void *VAR_4) {
        struct context *VAR_5 = VAR_4;
        sd_bus *VAR_6 = ((void*)0);
        sd_id128_t VAR_7;
        int VAR_8;

        VAR_5->quit = 0;

        FUNC_2(FUNC_17(&VAR_7) >= 0);

        FUNC_2(FUNC_10(&VAR_6) >= 0);
        FUNC_2(FUNC_12(VAR_6, VAR_5->fds[0], VAR_5->fds[0]) >= 0);
        FUNC_2(FUNC_13(VAR_6, 1, VAR_7) >= 0);

        FUNC_2(FUNC_8(VAR_6, ((void*)0), "/foo", "org.freedesktop.systemd.test", VAR_2, VAR_5) >= 0);
        FUNC_2(FUNC_8(VAR_6, ((void*)0), "/foo", "org.freedesktop.systemd.test2", VAR_2, VAR_5) >= 0);
        FUNC_2(FUNC_5(VAR_6, ((void*)0), "/value", "org.freedesktop.systemd.ValueTest", VAR_3, ((void*)0), FUNC_1(20)) >= 0);
        FUNC_2(FUNC_6(VAR_6, ((void*)0), "/value", VAR_1, ((void*)0)) >= 0);
        FUNC_2(FUNC_6(VAR_6, ((void*)0), "/value/a", VAR_0, ((void*)0)) >= 0);
        FUNC_2(FUNC_7(VAR_6, ((void*)0), "/value") >= 0);
        FUNC_2(FUNC_7(VAR_6, ((void*)0), "/value/a") >= 0);

        FUNC_2(FUNC_14(VAR_6) >= 0);

        FUNC_3("Entering event loop on server");

        while (!VAR_5->quit) {
                FUNC_3("Loop!");

                VAR_8 = FUNC_11(VAR_6, ((void*)0));
                if (VAR_8 < 0) {
                        FUNC_4(VAR_8, "Failed to process requests: %m");
                        goto fail;
                }

                if (VAR_8 == 0) {
                        VAR_8 = FUNC_16(VAR_6, (uint64_t) -1);
                        if (VAR_8 < 0) {
                                FUNC_4(VAR_8, "Failed to wait: %m");
                                goto fail;
                        }

                        continue;
                }
        }

        VAR_8 = 0;

fail:
        if (VAR_6) {
                FUNC_9(VAR_6);
                FUNC_15(VAR_6);
        }

        return FUNC_0(VAR_8);
}
