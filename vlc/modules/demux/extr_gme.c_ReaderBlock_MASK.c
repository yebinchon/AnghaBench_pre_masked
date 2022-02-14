
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char* gme_err_t ;
struct TYPE_2__ {int p_buffer; scalar_t__ i_buffer; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (void*,int,int) ;

__attribute__((used)) static gme_err_t FUNC_2 (void *VAR_0, void *VAR_1, int VAR_2)
{
    block_t *VAR_3 = VAR_0;

    int VAR_4 = FUNC_0 (VAR_2, (int)VAR_3->i_buffer);
    FUNC_1 (VAR_1, VAR_3->p_buffer, VAR_4);
    VAR_3->i_buffer -= VAR_4;
    VAR_3->p_buffer += VAR_4;
    if (VAR_4 != VAR_2)
        return "short read";
    return ((void*)0);
}
