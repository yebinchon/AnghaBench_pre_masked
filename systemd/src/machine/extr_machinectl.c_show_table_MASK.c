
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const Table ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (char const*,int *,int) ;
 int FUNC_8 (char const*,scalar_t__) ;
 int FUNC_9 (char const*,size_t,size_t) ;

__attribute__((used)) static int FUNC_10(Table *VAR_3, const char *VAR_4) {
        int VAR_5;

        FUNC_1(VAR_3);
        FUNC_1(VAR_4);

        if (FUNC_5(VAR_3) > 1 || FUNC_0(VAR_2)) {
                VAR_5 = FUNC_9(VAR_3, (size_t) 0, (size_t) -1);
                if (VAR_5 < 0)
                        return FUNC_2(VAR_5, "Failed to sort table: %m");

                FUNC_8(VAR_3, VAR_1);

                if (FUNC_0(VAR_2))
                        VAR_5 = FUNC_7(VAR_3, ((void*)0), FUNC_3(VAR_2) | VAR_0);
                else
                        VAR_5 = FUNC_6(VAR_3, ((void*)0));
                if (VAR_5 < 0)
                        return FUNC_2(VAR_5, "Failed to show table: %m");
        }

        if (VAR_1) {
                if (FUNC_5(VAR_3) > 1)
                        FUNC_4("\n%zu %s listed.\n", FUNC_5(VAR_3) - 1, VAR_4);
                else
                        FUNC_4("No %s.\n", VAR_4);
        }

        return 0;
}
