
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_id128_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0) {
        sd_id128_t VAR_1, VAR_2;
        int VAR_3;

        VAR_3 = FUNC_2(&VAR_2);
        if (VAR_3 < 0)
                return VAR_3;

        VAR_3 = FUNC_1(VAR_0, &VAR_1);
        if (VAR_3 < 0)
                return VAR_3;

        return FUNC_0(VAR_1, VAR_2);
}
