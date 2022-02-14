
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_queue_item {int file; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct write_queue_item *VAR_3) {
        int VAR_4;

        VAR_4 = FUNC_3(VAR_3->file, FUNC_2(VAR_3->state), VAR_1|VAR_0|VAR_2);
        if (VAR_4 < 0)
                return FUNC_1(VAR_4, "Failed to write state file %s: %m", VAR_3->file);

        FUNC_0("Saved state '%s' to %s.", FUNC_2(VAR_3->state), VAR_3->file);
        return 0;
}
