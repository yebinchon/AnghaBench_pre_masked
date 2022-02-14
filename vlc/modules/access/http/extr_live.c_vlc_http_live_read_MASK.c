
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_resource {int * response; } ;
struct block_t {int dummy; } ;
typedef struct block_t block_t ;


 struct block_t* VAR_0 ;
 int FUNC_0 (int *) ;
 struct block_t* FUNC_1 (struct vlc_http_resource*) ;

block_t *FUNC_2(struct vlc_http_resource *VAR_1)
{
    struct block_t *VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 != ((void*)0) && VAR_2 != VAR_0)
        return VAR_2;



    FUNC_0(VAR_1->response);
    VAR_1->response = ((void*)0);
    return FUNC_1(VAR_1);
}
