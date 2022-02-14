
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*) ;
 int VAR_4 ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (int,char*,char const*) ;
 char const* FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int ) ;
 int FUNC_6 (char const*,int ) ;

__attribute__((used)) static int FUNC_7(const char *VAR_5) {
        int VAR_6;

        FUNC_1(VAR_5);
        FUNC_1(FUNC_4(VAR_5));

        VAR_6 = FUNC_5(VAR_5, 0);
        if (VAR_6 < 0)
                FUNC_2(VAR_6, "Failed to remove runtime directory %s (before unmounting), ignoring: %m", VAR_5);



        VAR_6 = FUNC_6(VAR_5, VAR_2);
        if (VAR_6 < 0 && !FUNC_0(VAR_4, VAR_0, VAR_1))
                FUNC_2(VAR_4, "Failed to unmount user runtime directory %s, ignoring: %m", VAR_5);

        VAR_6 = FUNC_5(VAR_5, VAR_3);
        if (VAR_6 < 0 && VAR_6 != -VAR_1)
                return FUNC_3(VAR_6, "Failed to remove runtime directory %s (after unmounting): %m", VAR_5);

        return 0;
}
