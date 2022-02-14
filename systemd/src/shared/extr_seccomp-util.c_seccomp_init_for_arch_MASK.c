
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ scmp_filter_ctx ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;

int FUNC_8(scmp_filter_ctx *VAR_6, uint32_t VAR_7, uint32_t VAR_8) {
        scmp_filter_ctx VAR_9;
        int VAR_10;




        VAR_9 = FUNC_6(VAR_8);
        if (!VAR_9)
                return -VAR_1;

        if (VAR_7 != VAR_3 &&
            VAR_7 != FUNC_3()) {

                VAR_10 = FUNC_4(VAR_9, FUNC_3());
                if (VAR_10 < 0)
                        goto finish;

                VAR_10 = FUNC_1(VAR_9, VAR_7);
                if (VAR_10 < 0)
                        goto finish;

                FUNC_0(FUNC_2(VAR_9, VAR_7) >= 0);
                FUNC_0(FUNC_2(VAR_9, VAR_3) == -VAR_0);
                FUNC_0(FUNC_2(VAR_9, FUNC_3()) == -VAR_0);
        } else {
                FUNC_0(FUNC_2(VAR_9, VAR_3) >= 0);
                FUNC_0(FUNC_2(VAR_9, FUNC_3()) >= 0);
        }

        VAR_10 = FUNC_5(VAR_9, VAR_4, VAR_2);
        if (VAR_10 < 0)
                goto finish;

        VAR_10 = FUNC_5(VAR_9, VAR_5, 0);
        if (VAR_10 < 0)
                goto finish;

        *VAR_6 = VAR_9;
        return 0;

finish:
        FUNC_7(VAR_9);
        return VAR_10;
}
