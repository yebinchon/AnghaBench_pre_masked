
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int entry_state; int journal; scalar_t__ uploading; } ;
typedef TYPE_1__ Uploader ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(Uploader *VAR_2, int VAR_3) {
        int VAR_4;

        if (VAR_2->uploading)
                return 0;

        VAR_4 = FUNC_1(VAR_2->journal, VAR_3);
        if (VAR_4 < 0)
                return FUNC_0(VAR_4, "Failed to skip to next entry: %m");
        else if (VAR_4 < VAR_3)
                return 0;


        VAR_2->entry_state = VAR_0;
        return FUNC_2(VAR_2, VAR_1, VAR_2);
}
