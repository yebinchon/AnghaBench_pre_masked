
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int timeout_no_ra; } ;
typedef TYPE_1__ sd_ndisc ;
typedef TYPE_1__ sd_event_source ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int FUNC_4(sd_event_source *VAR_1, uint64_t VAR_2, void *VAR_3) {
        sd_ndisc *VAR_4 = VAR_3;

        FUNC_0(VAR_1);
        FUNC_0(VAR_4);

        FUNC_2("No RA received before link confirmation timeout");

        (void) FUNC_1(VAR_4->timeout_no_ra);
        FUNC_3(VAR_4, VAR_0, ((void*)0));

        return 0;
}
