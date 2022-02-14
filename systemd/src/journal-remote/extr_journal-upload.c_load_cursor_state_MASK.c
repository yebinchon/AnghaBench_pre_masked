
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_cursor; int state_file; } ;
typedef TYPE_1__ Uploader ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int *,int ,char*,int *) ;

__attribute__((used)) static int FUNC_3(Uploader *VAR_1) {
        int VAR_2;

        if (!VAR_1->state_file)
                return 0;

        VAR_2 = FUNC_2(((void*)0), VAR_1->state_file, "LAST_CURSOR", &VAR_1->last_cursor);
        if (VAR_2 == -VAR_0)
                FUNC_0("State file %s is not present.", VAR_1->state_file);
        else if (VAR_2 < 0)
                return FUNC_1(VAR_2, "Failed to read state file %s: %m",
                                       VAR_1->state_file);
        else
                FUNC_0("Last cursor was %s", VAR_1->last_cursor);

        return 0;
}
