
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
typedef scalar_t__ intmax_t ;
struct TYPE_8__ {long double real; scalar_t__ unsig; scalar_t__ integer; } ;
struct TYPE_9__ {int type; TYPE_1__ value; struct TYPE_9__* reference; scalar_t__ is_reference; } ;
typedef TYPE_2__ JsonVariant ;



 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,...) ;

long double FUNC_2(JsonVariant *VAR_3) {
        if (!VAR_3)
                return 0.0;
        if (VAR_3 == VAR_0 ||
            VAR_3 == VAR_2 ||
            VAR_3 == VAR_1)
                return 0.0;
        if (!FUNC_0(VAR_3))
                goto mismatch;
        if (VAR_3->is_reference)
                return FUNC_2(VAR_3->reference);

        switch (VAR_3->type) {

        case 129:
                return VAR_3->value.real;

        case 130: {
                long double VAR_4;

                VAR_4 = (long double) VAR_3->value.integer;

                if ((intmax_t) VAR_4 == VAR_3->value.integer)
                        return VAR_4;

                FUNC_1("Signed integer %ji requested as real, and cannot be converted losslessly, returning 0.", VAR_3->value.integer);
                return 0.0;
        }

        case 128: {
                long double VAR_5;

                VAR_5 = (long double) VAR_3->value.unsig;

                if ((uintmax_t) VAR_5 == VAR_3->value.unsig)
                        return VAR_5;

                FUNC_1("Unsigned integer %ju requested as real, and cannot be converted losslessly, returning 0.", VAR_3->value.unsig);
                return 0.0;
        }

        default:
                break;
        }

mismatch:
        FUNC_1("Non-integer JSON variant requested as integer, returning 0.");
        return 0.0;
}
