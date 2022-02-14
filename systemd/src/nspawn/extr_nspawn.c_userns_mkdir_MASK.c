
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int mode_t ;
typedef int gid_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 char* FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, const char *VAR_2, mode_t VAR_3, uid_t VAR_4, gid_t VAR_5) {
        const char *VAR_6;
        int VAR_7;

        VAR_6 = FUNC_1(VAR_1, VAR_2);
        VAR_7 = FUNC_0(VAR_6, VAR_3);
        if (VAR_7 == -VAR_0)
                return 0;
        if (VAR_7 < 0)
                return VAR_7;

        return FUNC_2(VAR_6, VAR_4, VAR_5);
}
