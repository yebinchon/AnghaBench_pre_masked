
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint64_t ;
typedef int sd_event_time_handler_t ;
struct TYPE_16__ {scalar_t__ description; } ;
typedef TYPE_1__ sd_event_source ;
typedef TYPE_1__* sd_event ;
typedef int int64_t ;
typedef scalar_t__ clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (TYPE_1__**,TYPE_1__**,scalar_t__,int ,int ,int ,void*) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__*) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,void*) ;
 char const* FUNC_12 (char const*) ;

int FUNC_13(
                sd_event *VAR_3,
                sd_event_source **VAR_4,
                clockid_t VAR_5,
                uint64_t VAR_6,
                uint64_t VAR_7,
                sd_event_time_handler_t VAR_8,
                void *VAR_9,
                int64_t VAR_10,
                const char *VAR_11,
                bool VAR_12) {

        bool VAR_13 = 0;
        int VAR_14, VAR_15;
        clockid_t VAR_16;

        FUNC_1(VAR_3);
        FUNC_1(VAR_4);

        if (*VAR_4) {
                if (!VAR_12) {
                        VAR_15 = FUNC_4(*VAR_4, &VAR_14);
                        if (VAR_15 < 0)
                                return FUNC_2(VAR_15, "sd-event: Failed to query whether event source \"%s\" is enabled or not: %m",
                                                       FUNC_12((*VAR_4)->description ?: VAR_11));

                        if (VAR_14 != VAR_1)
                                return 0;
                }

                VAR_15 = FUNC_5(*VAR_4, &VAR_16);
                if (VAR_15 < 0)
                        return FUNC_2(VAR_15, "sd-event: Failed to get clock id of event source \"%s\": %m", FUNC_12((*VAR_4)->description ?: VAR_11));

                if (VAR_16 != VAR_5)
                        return FUNC_2(FUNC_0(VAR_0),
                                               "sd-event: Current clock id %i of event source \"%s\" is different from specified one %i.",
                                               (int)VAR_16,
                                               FUNC_12((*VAR_4)->description ? : VAR_11),
                                               (int)VAR_5);

                VAR_15 = FUNC_9(*VAR_4, VAR_6);
                if (VAR_15 < 0)
                        return FUNC_2(VAR_15, "sd-event: Failed to set time for event source \"%s\": %m", FUNC_12((*VAR_4)->description ?: VAR_11));

                VAR_15 = FUNC_10(*VAR_4, VAR_7);
                if (VAR_15 < 0)
                        return FUNC_2(VAR_15, "sd-event: Failed to set accuracy for event source \"%s\": %m", FUNC_12((*VAR_4)->description ?: VAR_11));



                (void) FUNC_11(*VAR_4, VAR_9);

                VAR_15 = FUNC_7(*VAR_4, VAR_2);
                if (VAR_15 < 0)
                        return FUNC_2(VAR_15, "sd-event: Failed to enable event source \"%s\": %m", FUNC_12((*VAR_4)->description ?: VAR_11));
        } else {
                VAR_15 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
                if (VAR_15 < 0)
                        return FUNC_2(VAR_15, "sd-event: Failed to create timer event \"%s\": %m", FUNC_12(VAR_11));

                VAR_13 = 1;
        }

        VAR_15 = FUNC_8(*VAR_4, VAR_10);
        if (VAR_15 < 0)
                return FUNC_2(VAR_15, "sd-event: Failed to set priority for event source \"%s\": %m", FUNC_12((*VAR_4)->description ?: VAR_11));

        if (VAR_11) {
                VAR_15 = FUNC_6(*VAR_4, VAR_11);
                if (VAR_15 < 0)
                        return FUNC_2(VAR_15, "sd-event: Failed to set description for event source \"%s\": %m", VAR_11);
        }

        return VAR_13;
}
