
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int d ;
struct TYPE_7__ {long double real; } ;
struct TYPE_8__ {TYPE_1__ value; } ;
typedef TYPE_2__ JsonVariant ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__**,int ) ;
 int FUNC_1 (TYPE_2__**,int ,int) ;

int FUNC_2(JsonVariant **VAR_3, long double VAR_4) {
        JsonVariant *VAR_5;
        int VAR_6;

        FUNC_0(VAR_3, -VAR_0);

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
 if (VAR_4 == 0.0) {
#pragma GCC diagnostic pop
 *VAR_3 = VAR_1;
                return 0;
        }

        VAR_6 = FUNC_1(&VAR_5, VAR_2, sizeof(VAR_4));
        if (VAR_6 < 0)
                return VAR_6;

        VAR_5->value.real = VAR_4;
        *VAR_3 = VAR_5;

        return 0;
}
