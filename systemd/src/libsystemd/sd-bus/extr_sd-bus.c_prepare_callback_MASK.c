
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int usec_t ;
struct TYPE_8__ {scalar_t__ output_fd; scalar_t__ input_fd; int time_event_source; int input_io_event_source; int output_io_event_source; } ;
typedef TYPE_1__ sd_event_source ;
typedef TYPE_1__ sd_bus ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(sd_event_source *VAR_2, void *VAR_3) {
        sd_bus *VAR_4 = VAR_3;
        int VAR_5, VAR_6;
        usec_t VAR_7;

        FUNC_0(VAR_2);
        FUNC_0(VAR_4);

        VAR_6 = FUNC_3(VAR_4);
        if (VAR_6 < 0) {
                VAR_5 = VAR_6;
                goto fail;
        }

        if (VAR_4->output_fd != VAR_4->input_fd) {

                VAR_5 = FUNC_6(VAR_4->input_io_event_source, VAR_6 & VAR_0);
                if (VAR_5 < 0)
                        goto fail;

                VAR_5 = FUNC_6(VAR_4->output_io_event_source, VAR_6 & VAR_1);
        } else
                VAR_5 = FUNC_6(VAR_4->input_io_event_source, VAR_6);
        if (VAR_5 < 0)
                goto fail;

        VAR_5 = FUNC_4(VAR_4, &VAR_7);
        if (VAR_5 < 0)
                goto fail;
        if (VAR_5 > 0) {
                int VAR_8;

                VAR_8 = FUNC_7(VAR_4->time_event_source, VAR_7);
                if (VAR_8 < 0) {
                        VAR_5 = VAR_8;
                        goto fail;
                }
        }

        VAR_5 = FUNC_5(VAR_4->time_event_source, VAR_5 > 0);
        if (VAR_5 < 0)
                goto fail;

        return 1;

fail:
        FUNC_2(VAR_5, "Preparing of bus events failed, closing down: %m");
        FUNC_1(VAR_4);

        return 1;
}
