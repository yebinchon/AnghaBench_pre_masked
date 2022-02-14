
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* network; } ;
struct TYPE_6__ {int br_untagged_bitmap; int br_vid_bitmap; int pvid; } ;
typedef TYPE_2__ Link ;


 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int,char*) ;

__attribute__((used)) static int FUNC_2(Link *VAR_0) {
        int VAR_1;

        VAR_1 = FUNC_0(VAR_0, VAR_0->network->pvid, VAR_0->network->br_vid_bitmap, VAR_0->network->br_untagged_bitmap);
        if (VAR_1 < 0)
                FUNC_1(VAR_0, VAR_1, "Failed to assign VLANs to bridge port: %m");

        return VAR_1;
}
