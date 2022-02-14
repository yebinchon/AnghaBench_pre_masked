
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; scalar_t__ read_only; } ;
typedef TYPE_1__ MountEntry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__ const*) ;

__attribute__((used)) static bool FUNC_2(const MountEntry *VAR_2) {
        FUNC_1(VAR_2);

        return VAR_2->read_only || FUNC_0(VAR_2->mode, VAR_1, VAR_0);
}
