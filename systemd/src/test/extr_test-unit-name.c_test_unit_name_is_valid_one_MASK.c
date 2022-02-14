
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UnitNameFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,char*,char*,char*,int ) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_3, UnitNameFlags VAR_4, bool VAR_5) {
        FUNC_1("%s ( %s%s%s ): %s",
                 VAR_3,
                 (VAR_4 & VAR_1) ? "plain" : "",
                 (VAR_4 & VAR_0) ? " instance" : "",
                 (VAR_4 & VAR_2) ? " template" : "",
                 FUNC_3(VAR_5));
        FUNC_0(FUNC_2(VAR_3, VAR_4) == VAR_5);
}
