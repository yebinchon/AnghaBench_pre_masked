
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;


 int VAR_0 ;
 int FUNC_0 (char,int ,int ,int ) ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char const*,char*,char*,char*) ;
 int FUNC_2 (int *,char*,char const**) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(
                sd_bus_message *VAR_5,
                unsigned VAR_6,
                char *VAR_7,
                const char **VAR_8) {

        unsigned VAR_9;
        int VAR_10;

        VAR_10 = FUNC_3(VAR_5, 1);
        if (VAR_10 < 0)
                return VAR_10;

        for (VAR_9 = 0;; VAR_9++) {
                const char *VAR_11;
                char VAR_12;

                VAR_10 = FUNC_2(VAR_5, &VAR_12, &VAR_11);
                if (VAR_10 < 0)
                        return VAR_10;
                if (VAR_10 == 0)
                        return -VAR_0;


                if (!FUNC_0(VAR_12, VAR_4, VAR_2, VAR_3) &&
                    !(VAR_12 == VAR_1 && FUNC_1(VAR_11, "s", "o", "g")))
                        return -VAR_0;

                if (VAR_9 >= VAR_6) {
                        if (VAR_8)
                                *VAR_8 = VAR_11;
                        if (VAR_7)
                                *VAR_7 = VAR_12;
                        return 0;
                }

                VAR_10 = FUNC_4(VAR_5, ((void*)0));
                if (VAR_10 < 0)
                        return VAR_10;
        }

}
