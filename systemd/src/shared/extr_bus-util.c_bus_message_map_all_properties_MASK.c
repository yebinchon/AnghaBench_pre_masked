
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bus_properties_map {int offset; int (* set ) (int ,char const*,struct bus_properties_map const*,int *,void*) ;scalar_t__ member; } ;
typedef struct bus_properties_map const sd_bus_message ;
typedef int sd_bus_error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bus_properties_map const*) ;
 int FUNC_1 (int ,char const*,struct bus_properties_map const*,unsigned int,int *,void*) ;
 int FUNC_2 (struct bus_properties_map const*,int ,char const*) ;
 int FUNC_3 (struct bus_properties_map const*) ;
 int FUNC_4 (struct bus_properties_map const*) ;
 int FUNC_5 (struct bus_properties_map const*,int *,char const**) ;
 int FUNC_6 (struct bus_properties_map const*,int ,char const**) ;
 int FUNC_7 (struct bus_properties_map const*,char*) ;
 scalar_t__ FUNC_8 (scalar_t__,char const*) ;
 int FUNC_9 (int ,char const*,struct bus_properties_map const*,int *,void*) ;

int FUNC_10(
                sd_bus_message *VAR_4,
                const struct bus_properties_map *VAR_5,
                unsigned VAR_6,
                sd_bus_error *VAR_7,
                void *VAR_8) {

        int VAR_9;

        FUNC_0(VAR_4);
        FUNC_0(VAR_5);

        VAR_9 = FUNC_2(VAR_4, VAR_0, "{sv}");
        if (VAR_9 < 0)
                return VAR_9;

        while ((VAR_9 = FUNC_2(VAR_4, VAR_1, "sv")) > 0) {
                const struct bus_properties_map *VAR_10;
                const char *VAR_11;
                const char *VAR_12;
                void *VAR_13;
                unsigned VAR_14;

                VAR_9 = FUNC_6(VAR_4, VAR_2, &VAR_11);
                if (VAR_9 < 0)
                        return VAR_9;

                for (VAR_14 = 0, VAR_10 = ((void*)0); VAR_5[VAR_14].member; VAR_14++)
                        if (FUNC_8(VAR_5[VAR_14].member, VAR_11)) {
                                VAR_10 = &VAR_5[VAR_14];
                                break;
                        }

                if (VAR_10) {
                        VAR_9 = FUNC_5(VAR_4, ((void*)0), &VAR_12);
                        if (VAR_9 < 0)
                                return VAR_9;

                        VAR_9 = FUNC_2(VAR_4, VAR_3, VAR_12);
                        if (VAR_9 < 0)
                                return VAR_9;

                        VAR_13 = (uint8_t *)VAR_8 + VAR_10->offset;
                        if (VAR_5[VAR_14].set)
                                VAR_9 = VAR_10->set(FUNC_4(VAR_4), VAR_11, VAR_4, VAR_7, VAR_13);
                        else
                                VAR_9 = FUNC_1(FUNC_4(VAR_4), VAR_11, VAR_4, VAR_6, VAR_7, VAR_13);
                        if (VAR_9 < 0)
                                return VAR_9;

                        VAR_9 = FUNC_3(VAR_4);
                        if (VAR_9 < 0)
                                return VAR_9;
                } else {
                        VAR_9 = FUNC_7(VAR_4, "v");
                        if (VAR_9 < 0)
                                return VAR_9;
                }

                VAR_9 = FUNC_3(VAR_4);
                if (VAR_9 < 0)
                        return VAR_9;
        }
        if (VAR_9 < 0)
                return VAR_9;

        return FUNC_3(VAR_4);
}
