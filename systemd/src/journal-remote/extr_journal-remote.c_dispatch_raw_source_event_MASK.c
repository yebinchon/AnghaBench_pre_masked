
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sd_event_source ;
struct TYPE_2__ {int buffer_event; int event; } ;
typedef TYPE_1__ RemoteSource ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(sd_event_source *VAR_3,
                                     int VAR_4,
                                     uint32_t VAR_5,
                                     void *VAR_6) {
        RemoteSource *VAR_7 = VAR_6;
        int VAR_8;

        FUNC_0(VAR_7->event);
        FUNC_0(VAR_7->buffer_event);

        VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_0, VAR_2);
        if (VAR_8 == 1)


                FUNC_2(VAR_7->buffer_event, VAR_1);

        return VAR_8;
}
