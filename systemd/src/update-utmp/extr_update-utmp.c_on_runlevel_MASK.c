
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ audit_fd; } ;
typedef TYPE_1__ Context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,char*,char*,int *,int *,int *,int) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int*,int *) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (char*,char*,int,int) ;

__attribute__((used)) static int FUNC_10(Context *VAR_5) {
        int VAR_6 = 0, VAR_7, VAR_8, VAR_9;

        FUNC_2(VAR_5);





        VAR_7 = FUNC_7(&VAR_8, ((void*)0));

        if (VAR_7 < 0) {
                if (!FUNC_0(VAR_7, -VAR_3, -VAR_1))
                        return FUNC_5(VAR_7, "Failed to get current runlevel: %m");

                VAR_8 = 0;
        }


        VAR_9 = FUNC_4(VAR_5);
        if (VAR_9 < 0)
                return VAR_9;
        if (VAR_9 == 0)
                return FUNC_6("Failed to get new runlevel, utmp update skipped.");

        if (VAR_8 == VAR_9)
                return 0;
        VAR_7 = FUNC_8(VAR_9, VAR_8);
        if (VAR_7 < 0 && !FUNC_0(VAR_7, -VAR_3, -VAR_1))
                return FUNC_5(VAR_7, "Failed to write utmp record: %m");

        return VAR_6;
}
