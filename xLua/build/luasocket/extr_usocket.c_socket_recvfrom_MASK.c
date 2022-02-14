
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
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,char*,size_t,int ,int *,int *) ;
 int FUNC_1 (scalar_t__*,int ,int ) ;

int FUNC_2(p_socket VAR_8, char *VAR_9, size_t VAR_10, size_t *VAR_11,
        SA *VAR_12, socklen_t *VAR_13, p_timeout VAR_14) {
    int VAR_15;
    *VAR_11 = 0;
    if (*VAR_8 == VAR_5) return VAR_2;
    for ( ;; ) {
        long VAR_16 = (long) FUNC_0(*VAR_8, VAR_9, VAR_10, 0, VAR_12, VAR_13);
        if (VAR_16 > 0) {
            *VAR_11 = VAR_16;
            return VAR_3;
        }
        VAR_15 = VAR_7;
        if (VAR_16 == 0) return VAR_2;
        if (VAR_15 == VAR_1) continue;
        if (VAR_15 != VAR_0) return VAR_15;
        if ((VAR_15 = FUNC_1(VAR_8, VAR_6, VAR_14)) != VAR_3) return VAR_15;
    }
    return VAR_4;
}
