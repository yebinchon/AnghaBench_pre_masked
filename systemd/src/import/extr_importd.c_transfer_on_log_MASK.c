
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {scalar_t__ log_message; scalar_t__ log_message_size; int log_event_source; } ;
typedef TYPE_1__ sd_event_source ;
typedef TYPE_1__ Transfer ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(sd_event_source *VAR_1, int VAR_2, uint32_t VAR_3, void *VAR_4) {
        Transfer *VAR_5 = VAR_4;
        ssize_t VAR_6;

        FUNC_0(VAR_1);
        FUNC_0(VAR_5);

        VAR_6 = FUNC_2(VAR_2, VAR_5->log_message + VAR_5->log_message_size, sizeof(VAR_5->log_message) - VAR_5->log_message_size);
        if (VAR_6 < 0)
                FUNC_1(VAR_0, "Failed to read log message: %m");
        if (VAR_6 <= 0) {



                VAR_5->log_event_source = FUNC_3(VAR_5->log_event_source);
                return 0;
        }

        VAR_5->log_message_size += VAR_6;

        FUNC_4(VAR_5, 0);

        return 0;
}
