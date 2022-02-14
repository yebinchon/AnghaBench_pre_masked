
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int pos; int mhdr; } ;
struct mbuf {int pos; } ;
struct context {int dummy; } ;
struct conn {int dummy; } ;
typedef int rstatus_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct mbuf*) ;
 struct mbuf* FUNC_1 (int *,int ,int *,int *) ;

__attribute__((used)) static rstatus_t
FUNC_2(struct context *VAR_2, struct conn *VAR_3, struct msg *VAR_4)
{
    struct mbuf *VAR_5;

    VAR_5 = FUNC_1(&VAR_4->mhdr, VAR_4->pos, ((void*)0), ((void*)0));
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }
    FUNC_0(&VAR_4->mhdr, VAR_5);
    VAR_4->pos = VAR_5->pos;

    return VAR_1;
}
