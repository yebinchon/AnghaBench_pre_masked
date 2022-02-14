
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int UnitDependencyMask ;
struct TYPE_17__ {int default_dependencies; } ;
struct TYPE_14__ {int options; } ;
struct TYPE_16__ {TYPE_1__ parameters_fragment; scalar_t__ from_fragment; } ;
struct TYPE_15__ {int fstype; } ;
typedef TYPE_2__ MountParameters ;
typedef TYPE_3__ Mount ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char const* VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_4__*,int ,char const*,int,int ) ;
 int FUNC_8 (TYPE_4__*,int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_9(Mount *VAR_14) {
        const char *VAR_15, *VAR_16;
        UnitDependencyMask VAR_17;
        MountParameters *VAR_18;
        bool VAR_19;
        int VAR_20;

        FUNC_1(VAR_14);

        if (!FUNC_0(VAR_14)->default_dependencies)
                return 0;




        if (FUNC_4(VAR_14))
                return 0;

        VAR_18 = FUNC_3(VAR_14);
        if (!VAR_18)
                return 0;

        VAR_17 = VAR_14->from_fragment ? VAR_11 : VAR_12;
        VAR_19 = VAR_14->from_fragment ? FUNC_2(VAR_14->parameters_fragment.options, "nofail\0" "fail\0") : 0;

        if (FUNC_5(VAR_18)) {






                VAR_20 = FUNC_7(FUNC_0(VAR_14), VAR_8, VAR_3, 1, VAR_17);
                if (VAR_20 < 0)
                        return VAR_20;
                VAR_20 = FUNC_8(FUNC_0(VAR_14), VAR_13, VAR_8, VAR_2, 1, VAR_17);
                if (VAR_20 < 0)
                        return VAR_20;

                VAR_15 = VAR_4;
                VAR_16 = VAR_5;
        } else {
                VAR_15 = VAR_0;
                VAR_16 = VAR_1;
        }

        if (!VAR_19) {
                VAR_20 = FUNC_7(FUNC_0(VAR_14), VAR_9, VAR_16, 1, VAR_17);
                if (VAR_20 < 0)
                        return VAR_20;
        }

        VAR_20 = FUNC_7(FUNC_0(VAR_14), VAR_8, VAR_15, 1, VAR_17);
        if (VAR_20 < 0)
                return VAR_20;

        VAR_20 = FUNC_8(FUNC_0(VAR_14), VAR_9, VAR_10, VAR_7, 1, VAR_17);
        if (VAR_20 < 0)
                return VAR_20;


        if (FUNC_6(VAR_18->fstype, "tmpfs")) {
                VAR_20 = FUNC_7(FUNC_0(VAR_14), VAR_8, VAR_6, 1, VAR_17);
                if (VAR_20 < 0)
                        return VAR_20;
        }

        return 0;
}
