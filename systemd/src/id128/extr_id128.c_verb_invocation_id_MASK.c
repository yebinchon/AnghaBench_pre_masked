
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_id128_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(int VAR_3, char **VAR_4, void *VAR_5) {
        sd_id128_t VAR_6;
        int VAR_7;

        if (!FUNC_4(VAR_1))
                return FUNC_2(FUNC_0(VAR_0),
                                       "Verb \"invocation-id\" cannot be combined with --app-specific=.");

        VAR_7 = FUNC_3(&VAR_6);
        if (VAR_7 < 0)
                return FUNC_2(VAR_7, "Failed to get invocation-ID: %m");

        return FUNC_1(VAR_6, VAR_2);
}
