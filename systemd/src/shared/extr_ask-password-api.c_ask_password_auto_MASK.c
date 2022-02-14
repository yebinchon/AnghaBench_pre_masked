
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef int AskPasswordFlags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,char const*,char const*,char const*,int ,int,char***) ;
 int FUNC_1 (char const*,int,char***) ;
 int FUNC_2 (int,char const*,char const*,int ,int,int *,char***) ;
 int FUNC_3 (char***) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(
                const char *VAR_6,
                const char *VAR_7,
                const char *VAR_8,
                const char *VAR_9,
                usec_t VAR_10,
                AskPasswordFlags VAR_11,
                char ***VAR_12) {

        int VAR_13;

        FUNC_3(VAR_12);

        if ((VAR_11 & VAR_0) &&
            VAR_9 &&
            ((VAR_11 & VAR_2) || !FUNC_4(VAR_5)) &&
            (VAR_11 & VAR_1)) {
                VAR_13 = FUNC_1(VAR_9, VAR_11, VAR_12);
                if (VAR_13 != -VAR_3)
                        return VAR_13;
        }

        if (!(VAR_11 & VAR_2) && FUNC_4(VAR_5))
                return FUNC_2(-1, VAR_6, VAR_9, VAR_10, VAR_11, ((void*)0), VAR_12);

        if (!(VAR_11 & VAR_1))
                return FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);

        return -VAR_4;
}
