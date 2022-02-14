
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int usec_t ;
typedef int uint64_t ;
struct TYPE_11__ {int lifetime; scalar_t__ ra_sent; int event_priority; int timeout_event_source; struct TYPE_11__* event; } ;
typedef TYPE_1__ sd_radv ;
typedef TYPE_1__ sd_event_source ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int *,int ,int,int ,int (*) (TYPE_1__*,int ,void*),TYPE_1__*,int ,char*,int) ;
 int FUNC_3 (char*,int,int,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_1__*,int *,int) ;
 int FUNC_8 (TYPE_1__*,int ,int*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(sd_event_source *VAR_7, uint64_t VAR_8, void *VAR_9) {
        int VAR_10;
        sd_radv *VAR_11 = VAR_9;
        usec_t VAR_12 = VAR_3;
        usec_t VAR_13 = VAR_2;
        usec_t VAR_14, VAR_15;
        char VAR_16[VAR_0];

        FUNC_0(VAR_7);
        FUNC_0(VAR_11);
        FUNC_0(VAR_11->event);

        VAR_10 = FUNC_8(VAR_11->event, FUNC_1(), &VAR_14);
        if (VAR_10 < 0)
                goto fail;

        VAR_10 = FUNC_7(VAR_11, ((void*)0), VAR_11->lifetime);
        if (VAR_10 < 0)
                FUNC_5(VAR_10, "Unable to send Router Advertisement: %m");


        if (VAR_11->ra_sent < VAR_4) {
                VAR_13 = VAR_5;
                VAR_12 = VAR_5 / 3;
        }



        if (VAR_11->lifetime > 0 && (VAR_11->lifetime * VAR_6) < VAR_13) {
                VAR_13 = VAR_11->lifetime * VAR_6;
                VAR_12 = VAR_13 / 3;
        }

        VAR_15 = FUNC_6(VAR_12, VAR_13);

        FUNC_4("Next Router Advertisement in %s",
                 FUNC_3(VAR_16, VAR_0,
                                 VAR_15, VAR_6));

        VAR_10 = FUNC_2(VAR_11->event, &VAR_11->timeout_event_source,
                             FUNC_1(),
                             VAR_14 + VAR_15, VAR_1,
                             FUNC_10, VAR_11,
                             VAR_11->event_priority, "radv-timeout", 1);
        if (VAR_10 < 0)
                goto fail;

        VAR_11->ra_sent++;

        return 0;

fail:
        FUNC_9(VAR_11);

        return 0;
}
