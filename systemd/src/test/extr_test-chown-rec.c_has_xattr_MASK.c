
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int acl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char const*,char*,char*,int) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_5) {
        char VAR_6[sizeof(acl) * 4];

        if (FUNC_1(VAR_5, "system.posix_acl_access", VAR_6, sizeof(VAR_6)) < 0) {
                if (FUNC_0(VAR_4, VAR_3, VAR_2, VAR_0, VAR_1))
                        return 0;
        }

        return 1;
}
