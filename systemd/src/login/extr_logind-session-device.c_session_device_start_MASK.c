
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int active; int type; int fd; int session; } ;
typedef TYPE_1__ SessionDevice ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(SessionDevice *VAR_1) {
        int VAR_2;

        FUNC_1(VAR_1);
        FUNC_1(FUNC_6(VAR_1->session));

        if (VAR_1->active)
                return 0;

        switch (VAR_1->type) {

        case 130:
                if (VAR_1->fd < 0)
                        return FUNC_2(FUNC_0(VAR_0),
                                               "Failed to re-activate DRM fd, as the fd was lost (maybe logind restart went wrong?)");



                VAR_2 = FUNC_4(VAR_1->fd);
                if (VAR_2 < 0)
                        return VAR_2;
                break;

        case 129:

                VAR_2 = FUNC_5(VAR_1, 1);
                if (VAR_2 < 0)
                        return VAR_2;



                FUNC_3(VAR_1->fd);
                VAR_1->fd = VAR_2;
                break;

        case 128:
        default:

                break;
        }

        VAR_1->active = 1;
        return 0;
}
