
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int vfs_used; } ;
struct TYPE_6__ {int min_use; } ;
struct TYPE_8__ {TYPE_2__ space; TYPE_1__ metrics; } ;
typedef TYPE_3__ JournalStorage ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(JournalStorage *VAR_0) {
        FUNC_1(VAR_0);







        VAR_0->metrics.min_use = FUNC_0(VAR_0->metrics.min_use, VAR_0->space.vfs_used);
}
