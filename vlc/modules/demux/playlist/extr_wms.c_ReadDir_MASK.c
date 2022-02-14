
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s; } ;
typedef TYPE_1__ stream_t ;
typedef int input_item_t ;
typedef int input_item_node_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (TYPE_1__*,char*,char const*) ;
 int FUNC_7 (char const*,char*,unsigned int*) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*,int) ;
 char* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(stream_t *VAR_1, input_item_node_t *VAR_2)
{
    char *VAR_3;

    while ((VAR_3 = FUNC_11(VAR_1->s)) != ((void*)0))
    {
        if (!FUNC_0(VAR_3))
            goto skip;
        if (!FUNC_9(VAR_3, "[Reference]"))
            goto skip;

        const char *VAR_4 = VAR_3;
        char *VAR_5 = FUNC_8(VAR_3, '=');
        if (VAR_5 == ((void*)0)) {
            FUNC_6(VAR_1, "unexpected entry \"%s\"", VAR_3);
            goto skip;
        }
        *(VAR_5++) = '\0';

        unsigned VAR_6;
        if (FUNC_7(VAR_4, "Ref%u", &VAR_6) != 1) {
            FUNC_6(VAR_1, "unexpected entry key \"%s\"", VAR_4);
            goto skip;
        }

        if (!FUNC_10(VAR_5, "http://", 7))
            FUNC_5(VAR_5, "mmsh", 4);

        input_item_t *VAR_7 = FUNC_2(VAR_5, VAR_5);
        FUNC_4(VAR_2, VAR_7);
        FUNC_3(VAR_7);
skip:
        FUNC_1(VAR_3);
    }
    return VAR_0;
}
