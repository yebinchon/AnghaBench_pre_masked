
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_id128_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2) {
        sd_id128_t VAR_3;
        FUNC_0(VAR_2);

        if (FUNC_1(VAR_2, &VAR_3) < 0)
                return -VAR_0;

        if (FUNC_2(VAR_3))
                return -VAR_0;

        VAR_1 = VAR_3;
        return 0;
}
