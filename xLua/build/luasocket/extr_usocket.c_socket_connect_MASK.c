
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
 scalar_t__ FUNC_0 (scalar_t__,int *,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int ,int ) ;
 int FUNC_2 (scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(p_socket VAR_9, SA *VAR_10, socklen_t VAR_11, p_timeout VAR_12) {
    int VAR_13;

    if (*VAR_9 == VAR_6) return VAR_3;

    do if (FUNC_0(*VAR_9, VAR_10, VAR_11) == 0) return VAR_4;
    while ((VAR_13 = VAR_8) == VAR_2);

    if (VAR_13 != VAR_1 && VAR_13 != VAR_0) return VAR_13;

    if (FUNC_3(VAR_12)) return VAR_5;

    VAR_13 = FUNC_2(VAR_9, VAR_7, VAR_12);
    if (VAR_13 == VAR_3) {
        if (FUNC_1(*VAR_9, (char *) &VAR_13, 0, 0) == 0) return VAR_4;
        else return VAR_8;
    } else return VAR_13;
}
