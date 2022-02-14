
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t count; TYPE_4__* values; } ;
typedef TYPE_3__ sqliterk_values ;
struct TYPE_9__ {TYPE_1__* text; } ;
struct TYPE_11__ {TYPE_2__ any; int type; } ;
typedef TYPE_4__ sqliterk_value ;
typedef int sqliterk_text ;
struct TYPE_8__ {int s; char* t; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*,int const) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_3 ;

int FUNC_4(sqliterk_values *VAR_4,
                                      const char *VAR_5,
                                      const int VAR_6)
{
    if (!VAR_4 || !VAR_5) {
        return VAR_0;
    }
    int VAR_7 = FUNC_3(VAR_4);
    if (VAR_7 != VAR_2) {
        return VAR_7;
    }
    sqliterk_value *VAR_8 = &VAR_4->values[VAR_4->count];
    VAR_8->type = VAR_3;
    VAR_8->any.text = FUNC_1(sizeof(sqliterk_text));
    if (!VAR_8->any.text) {
        VAR_7 = VAR_1;
        goto sqliterkValuesAddNoTerminatorText_Failed;
    }
    VAR_8->any.text->s = VAR_6;
    VAR_8->any.text->t = FUNC_1(sizeof(char) * (VAR_6 + 1));
    if (!VAR_8->any.text->t) {
        VAR_7 = VAR_1;
        goto sqliterkValuesAddNoTerminatorText_Failed;
    }
    FUNC_0(VAR_8->any.text->t, VAR_5, VAR_6);
    VAR_8->any.text->t[VAR_6] = '\0';
    VAR_4->count++;
    return VAR_2;

sqliterkValuesAddNoTerminatorText_Failed:
    FUNC_2(VAR_8);
    return VAR_7;
}
