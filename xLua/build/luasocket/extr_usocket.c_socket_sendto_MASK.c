
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int p_timeout ;
typedef scalar_t__* p_socket ;
typedef int SA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,char const*,size_t,int ,int *,int ) ;
 int FUNC_1 (scalar_t__*,int ,int ) ;

int FUNC_2(p_socket VAR_9, const char *VAR_10, size_t VAR_11, size_t *VAR_12,
        SA *VAR_13, socklen_t VAR_14, p_timeout VAR_15)
{
    int VAR_16;
    *VAR_12 = 0;
    if (*VAR_9 == VAR_6) return VAR_3;
    for ( ;; ) {
        long VAR_17 = (long) FUNC_0(*VAR_9, VAR_10, VAR_11, 0, VAR_13, VAR_14);
        if (VAR_17 >= 0) {
            *VAR_12 = VAR_17;
            return VAR_4;
        }
        VAR_16 = VAR_8;
        if (VAR_16 == VAR_2) return VAR_3;
        if (VAR_16 == VAR_1) continue;
        if (VAR_16 != VAR_0) return VAR_16;
        if ((VAR_16 = FUNC_1(VAR_9, VAR_7, VAR_15)) != VAR_4) return VAR_16;
    }
    return VAR_5;
}
