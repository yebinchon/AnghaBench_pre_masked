
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int type; } ;
typedef int JsonVariantType ;
typedef TYPE_1__ JsonVariant ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

JsonVariantType FUNC_1(JsonVariant *VAR_18) {

        if (!VAR_18)
                return VAR_17;

        if (FUNC_0(VAR_18))
                return VAR_15;

        if (VAR_18 == VAR_8 || VAR_18 == VAR_6)
                return VAR_1;

        if (VAR_18 == VAR_7)
                return VAR_12;

        if (VAR_18 == VAR_9)
                return VAR_2;

        if (VAR_18 == VAR_11)
                return VAR_16;

        if (VAR_18 == VAR_10)
                return VAR_14;

        if (VAR_18 == VAR_5)
                return VAR_15;

        if (VAR_18 == VAR_3)
                return VAR_0;

        if (VAR_18 == VAR_4)
                return VAR_13;

        return VAR_18->type;
}
