
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int journal; scalar_t__ input_event; } ;
typedef TYPE_1__ Uploader ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ) ;

int FUNC_4(Uploader *VAR_1) {
        if (VAR_1->input_event) {
                int VAR_2;

                VAR_2 = FUNC_3(VAR_1->journal);
                if (VAR_2 < 0) {
                        FUNC_1(VAR_2, "Failed to process journal: %m");
                        FUNC_0(VAR_1);
                        return VAR_2;
                }

                if (VAR_2 == VAR_0)
                        return 0;
        }

        return FUNC_2(VAR_1, 1);
}
