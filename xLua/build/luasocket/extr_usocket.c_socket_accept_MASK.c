
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
 scalar_t__ FUNC_0 (scalar_t__,int *,int *) ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__*,int ,int ) ;

int FUNC_2(p_socket VAR_9, p_socket VAR_10, SA *VAR_11, socklen_t *VAR_12, p_timeout VAR_13) {
    if (*VAR_9 == VAR_6) return VAR_3;
    for ( ;; ) {
        int VAR_14;
        if ((*VAR_10 = FUNC_0(*VAR_9, VAR_11, VAR_12)) != VAR_6) return VAR_4;
        VAR_14 = VAR_8;
        if (VAR_14 == VAR_2) continue;
        if (VAR_14 != VAR_0 && VAR_14 != VAR_1) return VAR_14;
        if ((VAR_14 = FUNC_1(VAR_9, VAR_7, VAR_13)) != VAR_4) return VAR_14;
    }

    return VAR_5;
}
