
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int sd_bus_slot ;
typedef int sd_bus_message_handler_t ;
struct TYPE_6__ {int bus_client; } ;
typedef TYPE_1__ sd_bus ;


 int VAR_0 ;
 char* FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int **,char*,char*,char*,char*,int ,void*,char*,char const*) ;

int FUNC_3(
                sd_bus *VAR_1,
                sd_bus_slot **VAR_2,
                const char *VAR_3,
                sd_bus_message_handler_t VAR_4,
                void *VAR_5) {

        const char *VAR_6;

        FUNC_1(VAR_1);

        if (!VAR_1->bus_client)
                return -VAR_0;

        VAR_6 = FUNC_0(VAR_1, VAR_3);

        return FUNC_2(
                        VAR_1,
                        VAR_2,
                        "org.freedesktop.DBus",
                        "/org/freedesktop/DBus",
                        "org.freedesktop.DBus",
                        "AddMatch",
                        VAR_4,
                        VAR_5,
                        "s",
                        VAR_6);
}
