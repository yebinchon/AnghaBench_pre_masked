
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bind_to_device; } ;
typedef TYPE_1__ Socket ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 char* FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(Socket *VAR_2) {
        char *VAR_3;

        FUNC_1(VAR_2);

        if (!VAR_2->bind_to_device || FUNC_2(VAR_2->bind_to_device, "lo"))
                return 0;

        VAR_3 = FUNC_3("/sys/subsystem/net/devices/", VAR_2->bind_to_device);
        return FUNC_4(FUNC_0(VAR_2), VAR_3, VAR_0, VAR_1);
}
