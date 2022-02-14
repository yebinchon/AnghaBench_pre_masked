
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
struct TYPE_8__ {long double real; scalar_t__ unsig; int integer; } ;
struct TYPE_9__ {int type; TYPE_1__ value; int reference; scalar_t__ is_reference; } ;
typedef TYPE_2__ JsonVariant ;



 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,...) ;

uintmax_t FUNC_3(JsonVariant *VAR_3) {
        if (!VAR_3)
                goto mismatch;
        if (VAR_3 == VAR_0 ||
            VAR_3 == VAR_2 ||
            VAR_3 == VAR_1)
                return 0;
        if (!FUNC_1(VAR_3))
                goto mismatch;
        if (VAR_3->is_reference)
                return FUNC_0(VAR_3->reference);

        switch (VAR_3->type) {

        case 130:
                if (VAR_3->value.integer >= 0)
                        return (uintmax_t) VAR_3->value.integer;

                FUNC_2("Signed integer %ju requested as unsigned integer and out of range, returning 0.", VAR_3->value.integer);
                return 0;

        case 128:
                return VAR_3->value.unsig;

        case 129: {
                uintmax_t VAR_4;

                VAR_4 = (uintmax_t) VAR_3->value.real;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
 if ((long double) VAR_4 == VAR_3->value.real)
#pragma GCC diagnostic pop
 return VAR_4;

                FUNC_2("Real %Lg requested as unsigned integer, and cannot be converted losslessly, returning 0.", VAR_3->value.real);
                return 0;
        }

        default:
                break;
        }

mismatch:
        FUNC_2("Non-integer JSON variant requested as unsigned, returning 0.");
        return 0;
}
