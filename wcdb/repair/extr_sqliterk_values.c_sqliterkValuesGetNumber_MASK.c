
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* values; } ;
typedef TYPE_3__ sqliterk_values ;
struct TYPE_9__ {TYPE_1__* text; scalar_t__* number; scalar_t__* integer; } ;
struct TYPE_11__ {TYPE_2__ any; } ;
typedef TYPE_4__ sqliterk_value ;
struct TYPE_8__ {int t; } ;


 double FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;




double FUNC_3(sqliterk_values *VAR_0, int VAR_1)
{
    double VAR_2 = 0;
    if (VAR_0 && VAR_1 < FUNC_1(VAR_0)) {
        sqliterk_value *VAR_3 = &VAR_0->values[VAR_1];
        switch (FUNC_2(VAR_0, VAR_1)) {
            case 130:
                VAR_2 = (double) (*VAR_3->any.integer);
                break;
            case 129:
                VAR_2 = (double) (*VAR_3->any.number);
                break;
            case 128:
                VAR_2 = FUNC_0(VAR_3->any.text->t);
                break;
            default:
                break;
        }
    }
    return VAR_2;
}
