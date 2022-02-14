
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* key; char* val; } ;
typedef TYPE_1__ parsed_param_t ;


 char* FUNC_0 (char*,char) ;
 size_t FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, const char* VAR_1,
        parsed_param_t *VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    char *VAR_5 = ((void*)0);

    if (!VAR_0 || *VAR_0 == '\0')
        return -1;
    if (!VAR_2 || VAR_3 == 0)
        return 0;

    VAR_5 = FUNC_2( VAR_0, VAR_1 );
    while (VAR_5 != ((void*)0) && VAR_4 < VAR_3) {
        VAR_2[VAR_4].key = VAR_5;
        VAR_2[VAR_4].val = ((void*)0);
        if ((VAR_2[VAR_4].val = FUNC_0( VAR_2[VAR_4].key, '=' )) != ((void*)0)) {
            size_t VAR_6 = FUNC_1( VAR_2[VAR_4].val );


            *(VAR_2[VAR_4].val) = '\0';


            if (VAR_6 > 1) {
                VAR_2[VAR_4].val++;


                if (VAR_2[VAR_4].key[0])
                    VAR_4++;
            };
        }
        VAR_5 = FUNC_2( ((void*)0), VAR_1 );
    }
    return VAR_4;
}
