
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (char const* const,char**) ;
 int FUNC_2 (int ,char*,char const* const) ;
 int FUNC_3 (char*,int,int *) ;
 int FUNC_4 (char const* const,int ,int ) ;

__attribute__((used)) static int FUNC_5(const char* const VAR_7[]) {
        pid_t VAR_8;
        int VAR_9;

        VAR_9 = FUNC_3("(sulogin)", VAR_3|VAR_1|VAR_4|VAR_2, &VAR_8);
        if (VAR_9 < 0)
                return VAR_9;
        if (VAR_9 == 0) {

                FUNC_1(VAR_7[0], (char**) VAR_7);
                FUNC_2(VAR_6, "Failed to execute %s: %m", VAR_7[0]);
                FUNC_0(VAR_0);
        }

        return FUNC_4(VAR_7[0], VAR_8, VAR_5);
}
