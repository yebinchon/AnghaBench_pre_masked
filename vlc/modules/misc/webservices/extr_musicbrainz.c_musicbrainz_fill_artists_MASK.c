
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int length; int ptr; } ;
struct TYPE_7__ {int length; int * values; } ;
struct TYPE_9__ {TYPE_2__ string; TYPE_1__ array; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_3__ u; } ;
typedef TYPE_4__ json_value ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_1 (char*,size_t) ;
 char* FUNC_2 (char*,char*) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (char*,int ,size_t) ;

__attribute__((used)) static char *FUNC_5(const json_value *VAR_2)
{
    char *VAR_3 = ((void*)0);
    if(VAR_2->type != VAR_0 || VAR_2->u.array.length < 1)
        return VAR_3;

    size_t VAR_4 = 1;
    for(size_t VAR_5=0; VAR_5<VAR_2->u.array.length; VAR_5++)
    {
        const json_value *VAR_6 = FUNC_0(VAR_2->u.array.values[VAR_5], "name");
        if(VAR_6->type != VAR_1)
            continue;

        if(VAR_3 == ((void*)0))
        {
            VAR_3 = FUNC_3(VAR_6->u.string.ptr);
            VAR_4 = VAR_6->u.string.length + 1;
        }
        else
        {
            char *VAR_7 = FUNC_1(VAR_3, VAR_4 + VAR_6->u.string.length + 2);
            if(VAR_7)
            {
                VAR_3 = VAR_7;
                VAR_3 = FUNC_2(VAR_3, ", ");
                VAR_3 = FUNC_4(VAR_3, VAR_6->u.string.ptr, VAR_6->u.string.length);
                VAR_4 += VAR_6->u.string.length + 2;
            }
        }
    }

    return VAR_3;
}
