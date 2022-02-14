
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,char**) ;

int FUNC_5(int VAR_6, char *VAR_7[], void *VAR_8) {
        int VAR_9;

        VAR_9 = FUNC_4(VAR_6, VAR_7);
        if (VAR_9 <= 0)
                return VAR_9;

        if (!VAR_5 && !VAR_4)
                return FUNC_3(FUNC_0(VAR_0),
                                       "Either --update or --test must be used.");

        if (VAR_5) {
                VAR_9 = FUNC_2(VAR_2, VAR_1, VAR_3, 1);
                if (VAR_9 < 0)
                        return VAR_9;
        }

        if (VAR_4)
                return FUNC_1(VAR_4);

        return 0;
}
