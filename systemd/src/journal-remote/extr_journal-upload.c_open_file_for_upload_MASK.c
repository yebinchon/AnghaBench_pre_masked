
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int input; int input_event; int events; } ;
typedef TYPE_1__ Uploader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int ,int *,int,int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(Uploader *VAR_10, const char *VAR_11) {
        int VAR_12, VAR_13 = 0;

        if (FUNC_4(VAR_11, "-"))
                VAR_12 = VAR_5;
        else {
                VAR_12 = FUNC_1(VAR_11, VAR_4|VAR_2|VAR_3);
                if (VAR_12 < 0)
                        return FUNC_0(VAR_8, "Failed to open %s: %m", VAR_11);
        }

        VAR_10->input = VAR_12;

        if (VAR_6) {
                VAR_13 = FUNC_2(VAR_10->events, &VAR_10->input_event,
                                    VAR_12, VAR_1, VAR_7, VAR_10);
                if (VAR_13 < 0) {
                        if (VAR_13 != -VAR_0 || VAR_6 > 0)
                                return FUNC_0(VAR_13, "Failed to register input event: %m");


                        VAR_13 = FUNC_3(VAR_10, VAR_9, VAR_10);
                }
        }

        return VAR_13;
}
