
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int boolean; int real; int unsig; int integer; } ;
struct TYPE_16__ {int type; int is_reference; int reference; int string; TYPE_1__ value; } ;
typedef TYPE_2__ JsonVariant ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 char* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,char const*) ;
 int FUNC_13 (char const*,int ) ;

__attribute__((used)) static void FUNC_14(JsonVariant *VAR_2, JsonVariant *VAR_3) {
        FUNC_0(VAR_2);

        VAR_3 = FUNC_5(VAR_3);
        if (!VAR_3) {
                VAR_2->type = 132;
                return;
        }

        VAR_2->type = FUNC_10(VAR_3);
        switch (VAR_2->type) {

        case 133:
                VAR_2->value.integer = FUNC_6(VAR_3);
                break;

        case 128:
                VAR_2->value.unsig = FUNC_11(VAR_3);
                break;

        case 130:
                VAR_2->value.real = FUNC_7(VAR_3);
                break;

        case 134:
                VAR_2->value.boolean = FUNC_3(VAR_3);
                break;

        case 129: {
                const char *VAR_4;

                FUNC_2(VAR_4 = FUNC_9(VAR_3));


                if (FUNC_13(VAR_4, VAR_0+1) <= VAR_0) {
                        FUNC_12(VAR_2->string, VAR_4);
                        break;
                }


                VAR_1;
        }

        case 135:
        case 131:
                VAR_2->is_reference = 1;
                VAR_2->reference = FUNC_8(FUNC_4(VAR_3));
                break;

        case 132:
                break;

        default:
                FUNC_1("Unexpected variant type");
        }
}
