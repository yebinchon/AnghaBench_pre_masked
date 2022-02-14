
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char const*,unsigned int,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, unsigned VAR_4) {
        static bool VAR_5 = 0;







        FUNC_0(VAR_5 ? VAR_0 : VAR_1,
                 "[%s:%u] Failed to resolve specifier: %s, skipping",
                 VAR_3, VAR_4,
                 VAR_2 ? "Required $XDG_... variable not defined" : "uninitialized /etc detected");

        if (!VAR_5)
                FUNC_1("All rules containing unresolvable specifiers will be skipped.");

        VAR_5 = 1;
        return 0;
}
