
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ intmax_t ;
struct TYPE_8__ {long double real; int unsig; scalar_t__ integer; } ;
struct TYPE_9__ {int type; TYPE_1__ value; struct TYPE_9__* reference; scalar_t__ is_reference; } ;
typedef TYPE_2__ JsonVariant ;


 int VAR_0 ;

 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* VAR_3 ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,...) ;

intmax_t FUNC_2(JsonVariant *VAR_4) {
        if (!VAR_4)
                goto mismatch;
        if (VAR_4 == VAR_1 ||
            VAR_4 == VAR_3 ||
            VAR_4 == VAR_2)
                return 0;
        if (!FUNC_0(VAR_4))
                goto mismatch;
        if (VAR_4->is_reference)
                return FUNC_2(VAR_4->reference);

        switch (VAR_4->type) {

        case 130:
                return VAR_4->value.integer;

        case 128:
                if (VAR_4->value.unsig <= VAR_0)
                        return (intmax_t) VAR_4->value.unsig;

                FUNC_1("Unsigned integer %ju requested as signed integer and out of range, returning 0.", VAR_4->value.unsig);
                return 0;

        case 129: {
                intmax_t VAR_5;

                VAR_5 = (intmax_t) VAR_4->value.real;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
 if ((long double) VAR_5 == VAR_4->value.real)
#pragma GCC diagnostic pop
 return VAR_5;

                FUNC_1("Real %Lg requested as integer, and cannot be converted losslessly, returning 0.", VAR_4->value.real);
                return 0;
        }

        default:
                break;
        }

mismatch:
        FUNC_1("Non-integer JSON variant requested as integer, returning 0.");
        return 0;
}
