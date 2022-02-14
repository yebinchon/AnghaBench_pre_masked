
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ intmax_t ;
typedef int i ;
struct TYPE_7__ {scalar_t__ integer; } ;
struct TYPE_8__ {TYPE_1__ value; } ;
typedef TYPE_2__ JsonVariant ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (TYPE_2__**,int ) ;
 int FUNC_1 (TYPE_2__**,int ,int) ;

int FUNC_2(JsonVariant **VAR_3, intmax_t VAR_4) {
        JsonVariant *VAR_5;
        int VAR_6;

        FUNC_0(VAR_3, -VAR_0);

        if (VAR_4 == 0) {
                *VAR_3 = VAR_2;
                return 0;
        }

        VAR_6 = FUNC_1(&VAR_5, VAR_1, sizeof(VAR_4));
        if (VAR_6 < 0)
                return VAR_6;

        VAR_5->value.integer = VAR_4;
        *VAR_3 = VAR_5;

        return 0;
}
