
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_7__ {int time_event_source; int io_event_source; } ;
typedef TYPE_1__ sd_event_source ;
typedef TYPE_1__ Varlink ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_6(sd_event_source *VAR_2, void *VAR_3) {
        Varlink *VAR_4 = VAR_3;
        int VAR_5, VAR_6;
        usec_t VAR_7;

        FUNC_0(VAR_2);
        FUNC_0(VAR_4);

        VAR_6 = FUNC_4(VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_5 = FUNC_2(VAR_4->io_event_source, VAR_6);
        if (VAR_5 < 0)
                return VAR_5;

        VAR_5 = FUNC_5(VAR_4, &VAR_7);
        if (VAR_5 < 0)
                return VAR_5;
        if (VAR_5 > 0) {
                VAR_5 = FUNC_3(VAR_4->time_event_source, VAR_7);
                if (VAR_5 < 0)
                        return VAR_5;
        }

        VAR_5 = FUNC_1(VAR_4->time_event_source, VAR_5 > 0 ? VAR_1 : VAR_0);
        if (VAR_5 < 0)
                return VAR_5;

        return 1;
}
