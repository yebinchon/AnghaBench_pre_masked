
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_data {int r; int w; int m; } ;
typedef int JsonVariant ;
typedef int JsonDispatchFlags ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,int ,int ,char*,char const) ;
 char* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, JsonVariant *VAR_2, JsonDispatchFlags VAR_3, void *VAR_4) {
        struct device_data *VAR_5 = VAR_4;
        bool VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;
        const char *VAR_9;
        size_t VAR_10;

        FUNC_1(VAR_9 = FUNC_3(VAR_2));

        for (VAR_10 = 0; VAR_9[VAR_10]; VAR_10++)
                if (VAR_9[VAR_10] == 'r')
                        VAR_6 = 1;
                else if (VAR_9[VAR_10] == 'w')
                        VAR_7 = 1;
                else if (VAR_9[VAR_10] == 'm')
                        VAR_8 = 1;
                else
                        return FUNC_2(VAR_2, VAR_3, FUNC_0(VAR_0),
                                        "Unknown device access character '%c'.", VAR_9[VAR_10]);

        VAR_5->r = VAR_6;
        VAR_5->w = VAR_7;
        VAR_5->m = VAR_8;

        return 0;
}
