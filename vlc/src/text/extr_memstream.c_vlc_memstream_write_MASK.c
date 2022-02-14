
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {size_t length; char* ptr; int error; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int,size_t*) ;
 int FUNC_1 (char*,void const*,size_t) ;
 char* FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (int ) ;

size_t FUNC_4(struct vlc_memstream *VAR_1, const void *VAR_2,
                           size_t VAR_3)
{
    size_t VAR_4;

    if (FUNC_3(FUNC_0(VAR_1->length, VAR_3, &VAR_4))
     || FUNC_3(FUNC_0(VAR_4, 1, &VAR_4)))
        goto error;

    char *VAR_5 = FUNC_2(VAR_1->ptr, VAR_4);
    if (FUNC_3(VAR_5 == ((void*)0)))
        goto error;

    FUNC_1(VAR_5 + VAR_1->length, VAR_2, VAR_3);
    VAR_1->ptr = VAR_5;
    VAR_1->length += VAR_3;
    VAR_5[VAR_1->length] = '\0';
    return VAR_3;

error:
    VAR_1->error = VAR_0;
    return 0;
}
