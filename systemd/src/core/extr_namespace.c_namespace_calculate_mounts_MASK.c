
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t private_dev; scalar_t__ protect_hostname; scalar_t__ protect_control_groups; scalar_t__ protect_kernel_logs; scalar_t__ protect_kernel_modules; scalar_t__ protect_kernel_tunables; } ;
typedef scalar_t__ ProtectSystem ;
typedef scalar_t__ ProtectHome ;
typedef TYPE_1__ NamespaceInfo ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t FUNC_2 (char**) ;

__attribute__((used)) static size_t FUNC_3(
                const NamespaceInfo *VAR_16,
                char** VAR_17,
                char** VAR_18,
                char** VAR_19,
                char** VAR_20,
                size_t VAR_21,
                size_t VAR_22,
                const char* VAR_23,
                const char* VAR_24,
                ProtectHome VAR_25,
                ProtectSystem VAR_26) {

        size_t VAR_27;
        size_t VAR_28 =
                (VAR_26 == VAR_4 ?
                 FUNC_0(VAR_14) :
                 ((VAR_26 == VAR_3) ?
                  FUNC_0(VAR_13) :
                  ((VAR_26 == VAR_5) ?
                   FUNC_0(VAR_15) : 0)));

        VAR_27 =
                (VAR_25 == VAR_2 ?
                 FUNC_0(VAR_9) :
                 ((VAR_25 == VAR_0) ?
                  FUNC_0(VAR_7) :
                  ((VAR_25 == VAR_1) ?
                   FUNC_0(VAR_8) : 0)));

        return !!VAR_23 + !!VAR_24 +
                FUNC_2(VAR_17) +
                FUNC_2(VAR_18) +
                FUNC_2(VAR_19) +
                FUNC_2(VAR_20) +
                VAR_21 +
                VAR_22 +
                VAR_16->private_dev +
                (VAR_16->protect_kernel_tunables ? FUNC_0(VAR_12) : 0) +
                (VAR_16->protect_kernel_modules ? FUNC_0(VAR_11) : 0) +
                (VAR_16->protect_kernel_logs ? FUNC_0(VAR_10) : 0) +
                (VAR_16->protect_control_groups ? 1 : 0) +
                VAR_27 + VAR_28 +
                (VAR_16->protect_hostname ? 2 : 0) +
                (FUNC_1(VAR_16) ? FUNC_0(VAR_6) : 0);
}
