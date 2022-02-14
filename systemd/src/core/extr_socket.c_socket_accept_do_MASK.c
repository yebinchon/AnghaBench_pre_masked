
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Socket ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *,int *,int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(Socket *VAR_4, int VAR_5) {
        int VAR_6;

        FUNC_2(*VAR_4);
        FUNC_2(VAR_5 >= 0);

        VAR_6 = FUNC_1(VAR_5, ((void*)0), ((void*)0), VAR_2|VAR_1);
        if (VAR_6 < 0)

                return FUNC_0(VAR_3) ? -VAR_0 : -VAR_3;

        return VAR_6;
}
