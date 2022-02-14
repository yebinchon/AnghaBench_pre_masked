
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
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,char*,size_t,int ) ;
 int FUNC_1 (scalar_t__*,int ,int ) ;

int FUNC_2(p_socket VAR_8, char *VAR_9, size_t VAR_10, size_t *VAR_11, p_timeout VAR_12) {
    int VAR_13;
    *VAR_11 = 0;
    if (*VAR_8 == VAR_5) return VAR_2;
    for ( ;; ) {
        long VAR_14 = (long) FUNC_0(*VAR_8, VAR_9, VAR_10, 0);
        if (VAR_14 > 0) {
            *VAR_11 = VAR_14;
            return VAR_3;
        }
        VAR_13 = VAR_7;
        if (VAR_14 == 0) return VAR_2;
        if (VAR_13 == VAR_1) continue;
        if (VAR_13 != VAR_0) return VAR_13;
        if ((VAR_13 = FUNC_1(VAR_8, VAR_6, VAR_12)) != VAR_3) return VAR_13;
    }
    return VAR_4;
}
