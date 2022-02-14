
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (char const*,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, mode_t VAR_4, uid_t VAR_5) {
        int VAR_6;

        FUNC_0(VAR_3);

        VAR_6 = FUNC_2(VAR_3, VAR_4);
        if (VAR_6 < 0 && VAR_6 != -VAR_0)
                return VAR_6;

        if (VAR_5 == VAR_1)
                return 0;

        if (FUNC_1(VAR_3, VAR_5, VAR_5) < 0)
                return -VAR_2;

        return 0;
}
