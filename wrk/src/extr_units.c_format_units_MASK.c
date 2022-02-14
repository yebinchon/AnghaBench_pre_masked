
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* base; double scale; char** units; } ;
typedef TYPE_1__ units ;


 int FUNC_0 (char**,char*,int,long double,char*) ;

__attribute__((used)) static char *FUNC_1(long double VAR_0, units *VAR_1, int VAR_2) {
    long double VAR_3 = VAR_0, VAR_4;
    char *VAR_5 = VAR_1->base;
    char *VAR_6 = ((void*)0);

    VAR_4 = VAR_1->scale * 0.85;

    for (int VAR_7 = 0; VAR_1->units[VAR_7+1] && VAR_3 >= VAR_4; VAR_7++) {
        VAR_3 /= VAR_1->scale;
        VAR_5 = VAR_1->units[VAR_7];
    }

    FUNC_0(&VAR_6, "%.*Lf%s", VAR_2, VAR_3, VAR_5);

    return VAR_6;
}
