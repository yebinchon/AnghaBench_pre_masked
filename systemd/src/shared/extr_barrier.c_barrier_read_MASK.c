
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct pollfd {int events; int revents; int fd; } ;
typedef int ssize_t ;
typedef scalar_t__ int64_t ;
typedef int buf ;
struct TYPE_6__ {scalar_t__ barriers; int * pipe; int them; } ;
typedef TYPE_1__ Barrier ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_4 (struct pollfd*,int,int) ;
 int FUNC_5 (int ,scalar_t__*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7(Barrier *VAR_10, int64_t VAR_11) {
        if (FUNC_3(VAR_10))
                return 0;

        while (VAR_10->barriers > VAR_11) {
                struct pollfd VAR_12[2] = {
                        { .fd = VAR_10->pipe[0] >= 0 ? VAR_10->pipe[0] : VAR_10->pipe[1],
                          .events = VAR_6 },
                        { .fd = VAR_10->them,
                          .events = VAR_7 }};
                uint64_t VAR_13;
                int VAR_14;

                VAR_14 = FUNC_4(VAR_12, 2, -1);
                if (VAR_14 < 0 && FUNC_0(VAR_9, VAR_3, VAR_4))
                        continue;
                else if (VAR_14 < 0)
                        goto error;

                if (VAR_12[1].revents) {
                        ssize_t VAR_15;


                        VAR_15 = FUNC_5(VAR_10->them, &VAR_13, sizeof(VAR_13));
                        if (VAR_15 < 0 && FUNC_0(VAR_9, VAR_3, VAR_4))
                                continue;

                        if (VAR_15 != sizeof(VAR_13))
                                goto error;
                } else if (VAR_12[0].revents & (VAR_6 | VAR_5 | VAR_8))





                        VAR_13 = VAR_0;
                else
                        continue;


                if (VAR_13 >= (uint64_t)VAR_0) {
                        if (FUNC_1(VAR_10))
                                VAR_10->barriers = VAR_2;
                        else
                                VAR_10->barriers = VAR_1;
                } else if (!FUNC_2(VAR_10))
                        VAR_10->barriers -= VAR_13;
        }

        return !FUNC_3(VAR_10);

error:





        FUNC_6(VAR_10->pipe);
        VAR_10->barriers = VAR_2;
        return 0;
}
