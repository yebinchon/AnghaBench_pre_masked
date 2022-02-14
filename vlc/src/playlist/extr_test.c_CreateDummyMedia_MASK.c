
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int input_item_t ;


 int FUNC_0 (char**,char*,int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,char*) ;

__attribute__((used)) static input_item_t *
FUNC_3(int VAR_0)
{
    char *VAR_1;
    char *VAR_2;

    int VAR_3 = FUNC_0(&VAR_1, "vlc://item-%d", VAR_0);
    if (VAR_3 == -1)
        return ((void*)0);

    VAR_3 = FUNC_0(&VAR_2, "item-%d", VAR_0);
    if (VAR_3 == -1)
        return ((void*)0);

    input_item_t *VAR_4 = FUNC_2(VAR_1, VAR_2);
    FUNC_1(VAR_1);
    FUNC_1(VAR_2);
    return VAR_4;
}
