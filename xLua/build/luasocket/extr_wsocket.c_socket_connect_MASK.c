
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int socklen_t ;
typedef int p_timeout ;
typedef scalar_t__* p_socket ;
typedef int err ;
typedef int SA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int ) ;
 int FUNC_3 (scalar_t__,int ,int ,char*,int*) ;
 int FUNC_4 (scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(p_socket VAR_10, SA *VAR_11, socklen_t VAR_12, p_timeout VAR_13) {
    int VAR_14;

    if (*VAR_10 == VAR_4) return VAR_0;

    if (FUNC_2(*VAR_10, VAR_11, VAR_12) == 0) return VAR_1;

    VAR_14 = FUNC_1();
    if (VAR_14 != VAR_9 && VAR_14 != VAR_8) return VAR_14;

    if (FUNC_5(VAR_13)) return VAR_2;

    VAR_14 = FUNC_4(VAR_10, VAR_7, VAR_13);
    if (VAR_14 == VAR_0) {
        int VAR_15 = sizeof(VAR_14);

        FUNC_0(10);

        FUNC_3(*VAR_10, VAR_5, VAR_6, (char *)&VAR_14, &VAR_15);


        return VAR_14 > 0? VAR_14: VAR_3;
    } else return VAR_14;

}
