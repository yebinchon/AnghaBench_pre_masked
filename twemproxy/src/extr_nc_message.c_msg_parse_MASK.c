
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int result; int (* parser ) (struct msg*) ;} ;
struct context {int dummy; } ;
struct conn {scalar_t__ err; int (* recv_done ) (struct context*,struct conn*,struct msg*,int *) ;} ;
typedef int rstatus_t ;





 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct msg*) ;
 int FUNC_1 (struct context*,struct conn*,struct msg*) ;
 int FUNC_2 (struct context*,struct conn*,struct msg*) ;
 int FUNC_3 (struct context*,struct conn*,struct msg*,int *) ;
 int FUNC_4 (struct msg*) ;

__attribute__((used)) static rstatus_t
FUNC_5(struct context *VAR_3, struct conn *VAR_4, struct msg *VAR_5)
{
    rstatus_t VAR_6;

    if (FUNC_0(VAR_5)) {

        VAR_4->recv_done(VAR_3, VAR_4, VAR_5, ((void*)0));
        return VAR_1;
    }

    VAR_5->parser(VAR_5);

    switch (VAR_5->result) {
    case 129:
        VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
        break;

    case 128:
        VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
        break;

    case 130:
        VAR_6 = VAR_1;
        break;

    default:
        VAR_6 = VAR_0;
        VAR_4->err = VAR_2;
        break;
    }

    return VAR_4->err != 0 ? VAR_0 : VAR_6;
}
