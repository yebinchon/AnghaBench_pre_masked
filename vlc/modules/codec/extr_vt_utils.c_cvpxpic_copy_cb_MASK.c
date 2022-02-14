
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct picture_context_t {int dummy; } ;
struct cvpxpic_ctx {int rc; } ;
typedef struct picture_context_t picture_context_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static picture_context_t *
FUNC_1(struct picture_context_t *VAR_0)
{
    struct cvpxpic_ctx *VAR_1 = (struct cvpxpic_ctx *)VAR_0;
    FUNC_0(&VAR_1->rc);
    return VAR_0;
}
