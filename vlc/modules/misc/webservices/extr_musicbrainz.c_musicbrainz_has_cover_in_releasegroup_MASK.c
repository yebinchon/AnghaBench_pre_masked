
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int boolean; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__ u; } ;
typedef TYPE_2__ const json_value ;


 scalar_t__ VAR_0 ;
 TYPE_2__ const* FUNC_0 (TYPE_2__ const*,char*) ;
 char* FUNC_1 (TYPE_2__ const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_3(json_value ** const VAR_1,
                                                  size_t VAR_2,
                                                  const char *VAR_3)
{
    for(size_t VAR_4=0; VAR_4<VAR_2; VAR_4++)
    {
        const json_value *VAR_5 = FUNC_0(VAR_1[VAR_4], "release-group");
        if(VAR_5)
        {
            const char *VAR_6 = FUNC_1(VAR_5, "id");
            if(!VAR_6 || FUNC_2(VAR_6, VAR_3))
                continue;

            const json_value *VAR_7 = FUNC_0(VAR_1[VAR_4], "cover-art-archive");
            if(!VAR_7)
                continue;

            VAR_7 = FUNC_0(VAR_7, "front");
            if(!VAR_7 || VAR_7->type != VAR_0 || !VAR_7->u.boolean)
                continue;

            return 1;
        }
    }

    return 0;
}
