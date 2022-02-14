
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int usec_t ;
typedef int sd_event_source ;
struct TYPE_3__ {int announce_event_source; } ;
typedef TYPE_1__ DnsScope ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(sd_event_source *VAR_0, usec_t VAR_1, void *VAR_2) {
        DnsScope *VAR_3 = VAR_2;

        FUNC_0(VAR_0);

        VAR_3->announce_event_source = FUNC_2(VAR_3->announce_event_source);

        (void) FUNC_1(VAR_3, 0);
        return 0;
}
