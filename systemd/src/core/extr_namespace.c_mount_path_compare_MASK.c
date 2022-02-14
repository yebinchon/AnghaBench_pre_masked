
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mode; } ;
typedef TYPE_1__ MountEntry ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const MountEntry *VAR_0, const MountEntry *VAR_1) {
        int VAR_2;


        VAR_2 = FUNC_2(FUNC_1(VAR_0), FUNC_1(VAR_1));
        if (VAR_2 != 0)
                return VAR_2;


        return FUNC_0((int) VAR_0->mode, (int) VAR_1->mode);
}
