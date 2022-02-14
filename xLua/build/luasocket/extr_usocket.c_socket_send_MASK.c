
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int p_timeout ;
typedef scalar_t__* p_socket ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*,size_t,int ) ;
 int FUNC_1 (scalar_t__*,int ,int ) ;

int FUNC_2(p_socket VAR_9, const char *VAR_10, size_t VAR_11,
        size_t *VAR_12, p_timeout VAR_13)
{
    int VAR_14;
    *VAR_12 = 0;

    if (*VAR_9 == VAR_6) return VAR_3;

    for ( ;; ) {
        long VAR_15 = (long) FUNC_0(*VAR_9, VAR_10, VAR_11, 0);

        if (VAR_15 >= 0) {
            *VAR_12 = VAR_15;
            return VAR_4;
        }
        VAR_14 = VAR_8;

        if (VAR_14 == VAR_2) return VAR_3;

        if (VAR_14 == VAR_1) continue;

        if (VAR_14 != VAR_0) return VAR_14;

        if ((VAR_14 = FUNC_1(VAR_9, VAR_7, VAR_13)) != VAR_4) return VAR_14;
    }

    return VAR_5;
}
