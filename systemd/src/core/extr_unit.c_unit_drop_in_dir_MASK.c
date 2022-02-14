
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UnitWriteFlags ;
struct TYPE_8__ {TYPE_2__* manager; scalar_t__ transient; } ;
typedef TYPE_3__ Unit ;
struct TYPE_6__ {char const* transient; char const* persistent_control; char const* runtime_control; } ;
struct TYPE_7__ {TYPE_1__ lookup_paths; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static const char* FUNC_2(Unit *VAR_2, UnitWriteFlags VAR_3) {
        FUNC_1(VAR_2);

        if (FUNC_0(VAR_3))
                return ((void*)0);

        if (VAR_2->transient)
                return VAR_2->manager->lookup_paths.transient;

        if (VAR_3 & VAR_0)
                return VAR_2->manager->lookup_paths.persistent_control;

        if (VAR_3 & VAR_1)
                return VAR_2->manager->lookup_paths.runtime_control;

        return ((void*)0);
}
