
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ssid; int sd_device; scalar_t__ needs_freeing; } ;
typedef TYPE_1__ LinkInfo ;


 int FUNC_0 (int ) ;
 TYPE_1__ const* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static const LinkInfo* FUNC_3(LinkInfo *VAR_0) {
        for (unsigned VAR_1 = 0; VAR_0 && VAR_0[VAR_1].needs_freeing; VAR_1++) {
                FUNC_2(VAR_0[VAR_1].sd_device);
                FUNC_0(VAR_0[VAR_1].ssid);
        }

        return FUNC_1(VAR_0);
}
