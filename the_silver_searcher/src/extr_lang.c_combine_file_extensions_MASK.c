
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** extensions; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int ) ;

size_t FUNC_4(size_t *VAR_2, size_t VAR_3, char **VAR_4) {



    size_t VAR_5 = 100;
    (*VAR_4) = (char *)FUNC_0(VAR_5 * VAR_0);
    FUNC_1((*VAR_4), 0, VAR_5 * VAR_0);
    size_t VAR_6 = 0;

    size_t VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
        size_t VAR_8 = 0;
        const char *VAR_9 = VAR_1[VAR_2[VAR_7]].extensions[VAR_8];
        do {
            if (VAR_6 == VAR_5) {
                break;
            }
            char *VAR_10 = (*VAR_4) + VAR_6 * VAR_0;
            FUNC_3(VAR_10, VAR_9, FUNC_2(VAR_9));
            ++VAR_6;
            VAR_9 = VAR_1[VAR_2[VAR_7]].extensions[++VAR_8];
        } while (VAR_9);
    }

    return VAR_6;
}
