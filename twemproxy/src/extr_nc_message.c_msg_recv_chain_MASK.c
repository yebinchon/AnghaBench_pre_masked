
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct msg {int mlen; int pos; int mhdr; } ;
struct mbuf {scalar_t__ end; scalar_t__ last; int pos; } ;
struct context {int dummy; } ;
struct conn {struct msg* (* recv_next ) (struct context*,struct conn*,int) ;} ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ rstatus_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mbuf* FUNC_1 (int *,struct mbuf*,int ) ;
 scalar_t__ FUNC_2 (struct conn*,scalar_t__,size_t) ;
 scalar_t__ FUNC_3 (struct mbuf*) ;
 struct mbuf* FUNC_4 () ;
 int FUNC_5 (int *,struct mbuf*) ;
 size_t FUNC_6 (struct mbuf*) ;
 scalar_t__ FUNC_7 (struct context*,struct conn*,struct msg*) ;
 int VAR_4 ;
 struct msg* FUNC_8 (struct context*,struct conn*,int) ;

__attribute__((used)) static rstatus_t
FUNC_9(struct context *VAR_5, struct conn *VAR_6, struct msg *VAR_7)
{
    rstatus_t VAR_8;
    struct msg *VAR_9;
    struct mbuf *VAR_10;
    size_t VAR_11;
    ssize_t VAR_12;

    VAR_10 = FUNC_1(&VAR_7->mhdr, VAR_10, VAR_4);
    if (VAR_10 == ((void*)0) || FUNC_3(VAR_10)) {
        VAR_10 = FUNC_4();
        if (VAR_10 == ((void*)0)) {
            return VAR_1;
        }
        FUNC_5(&VAR_7->mhdr, VAR_10);
        VAR_7->pos = VAR_10->pos;
    }
    FUNC_0(VAR_10->end - VAR_10->last > 0);

    VAR_11 = FUNC_6(VAR_10);

    VAR_12 = FUNC_2(VAR_6, VAR_10->last, VAR_11);
    if (VAR_12 < 0) {
        if (VAR_12 == VAR_0) {
            return VAR_3;
        }
        return VAR_2;
    }

    FUNC_0((VAR_10->last + VAR_12) <= VAR_10->end);
    VAR_10->last += VAR_12;
    VAR_7->mlen += (uint32_t)VAR_12;

    for (;;) {
        VAR_8 = FUNC_7(VAR_5, VAR_6, VAR_7);
        if (VAR_8 != VAR_3) {
            return VAR_8;
        }


        VAR_9 = VAR_6->recv_next(VAR_5, VAR_6, 0);
        if (VAR_9 == ((void*)0) || VAR_9 == VAR_7) {

            break;
        }

        VAR_7 = VAR_9;
    }

    return VAR_3;
}
