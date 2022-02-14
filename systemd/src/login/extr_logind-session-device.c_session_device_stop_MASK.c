
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int active; int type; int fd; } ;
typedef TYPE_1__ SessionDevice ;





 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(SessionDevice *VAR_0) {
        FUNC_0(VAR_0);

        if (!VAR_0->active)
                return;

        switch (VAR_0->type) {

        case 130:
                if (VAR_0->fd < 0) {
                        FUNC_1("Failed to de-activate DRM fd, as the fd was lost (maybe logind restart went wrong?)");
                        return;
                }





                FUNC_2(VAR_0->fd);
                break;

        case 129:




                FUNC_3(VAR_0->fd);
                break;

        case 128:
        default:

                break;
        }

        VAR_0->active = 0;
}
