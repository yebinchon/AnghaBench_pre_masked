
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int usec_t ;
typedef int jitter ;
struct TYPE_11__ {scalar_t__ conflict_event_source; TYPE_1__* manager; int key; int conflict_queue; } ;
struct TYPE_10__ {int event; } ;
typedef TYPE_2__ DnsScope ;
typedef TYPE_2__ DnsResourceRecord ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int ,TYPE_2__*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ,scalar_t__*,int ,scalar_t__,int ,int ,TYPE_2__*) ;
 int FUNC_12 (scalar_t__,char*) ;

int FUNC_13(DnsScope *VAR_4, DnsResourceRecord *VAR_5) {
        usec_t VAR_6;
        int VAR_7;

        FUNC_1(VAR_4);
        FUNC_1(VAR_5);



        VAR_7 = FUNC_8(&VAR_4->conflict_queue, &VAR_2);
        if (VAR_7 < 0) {
                FUNC_6();
                return VAR_7;
        }




        VAR_7 = FUNC_9(VAR_4->conflict_queue, VAR_5->key, VAR_5);
        if (FUNC_0(VAR_7, 0, -VAR_0))
                return 0;
        if (VAR_7 < 0)
                return FUNC_5(VAR_7, "Failed to queue conflicting RR: %m");

        FUNC_3(VAR_5->key);
        FUNC_4(VAR_5);

        if (VAR_4->conflict_event_source)
                return 0;

        FUNC_10(&VAR_6, sizeof(VAR_6));
        VAR_6 %= VAR_1;

        VAR_7 = FUNC_11(VAR_4->manager->event,
                              &VAR_4->conflict_event_source,
                              FUNC_2(),
                              FUNC_7(FUNC_2()) + VAR_6,
                              VAR_1,
                              VAR_3, VAR_4);
        if (VAR_7 < 0)
                return FUNC_5(VAR_7, "Failed to add conflict dispatch event: %m");

        (void) FUNC_12(VAR_4->conflict_event_source, "scope-conflict");

        return 0;
}
