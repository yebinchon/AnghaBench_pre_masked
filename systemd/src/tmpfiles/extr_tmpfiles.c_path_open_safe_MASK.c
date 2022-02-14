
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int ,int,int *,int*) ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_6) {
        int VAR_7, VAR_8;





        FUNC_1(VAR_6);

        if (!FUNC_4(VAR_6))
                return FUNC_3(FUNC_0(VAR_3),
                                       "Failed to open invalid path '%s'.",
                                       VAR_6);

        VAR_7 = FUNC_2(VAR_6, VAR_5, VAR_1|VAR_2|VAR_0, ((void*)0), &VAR_8);
        if (VAR_7 < 0 && VAR_7 != -VAR_4)
                return FUNC_3(VAR_7, "Failed to validate path %s: %m", VAR_6);

        return VAR_7 < 0 ? VAR_7 : VAR_8;
}
