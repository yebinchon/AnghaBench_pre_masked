
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_tqh {int dummy; } ;
struct msg {scalar_t__ mlen; int mhdr; } ;
struct mbuf {scalar_t__ pos; scalar_t__ last; } ;
struct iovec {scalar_t__ iov_base; size_t iov_len; } ;
struct context {int dummy; } ;
struct conn {int (* send_done ) (struct context*,struct conn*,struct msg*) ;struct msg* smsg; struct msg* (* send_next ) (struct context*,struct conn*) ;} ;
struct array {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int rstatus_t ;
typedef int iov ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 struct mbuf* FUNC_1 (int *) ;
 struct mbuf* FUNC_2 (struct mbuf*,int ) ;
 int FUNC_3 (struct msg_tqh*) ;
 struct msg* FUNC_4 (struct msg_tqh*) ;
 int FUNC_5 (struct msg_tqh*) ;
 int FUNC_6 (struct msg_tqh*,struct msg*,int ) ;
 struct msg* FUNC_7 (struct msg*,int ) ;
 int FUNC_8 (struct msg_tqh*,struct msg*,int ) ;
 int FUNC_9 (struct array*) ;
 struct iovec* FUNC_10 (struct array*) ;
 int FUNC_11 (struct array*,struct iovec*,int,int) ;
 scalar_t__ FUNC_12 (struct conn*,struct array*,size_t) ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (struct mbuf*) ;
 size_t FUNC_14 (struct mbuf*) ;
 int VAR_6 ;
 struct msg* FUNC_15 (struct context*,struct conn*) ;
 int FUNC_16 (struct context*,struct conn*,struct msg*) ;
 int FUNC_17 (struct context*,struct conn*,struct msg*) ;

__attribute__((used)) static rstatus_t
FUNC_18(struct context *VAR_7, struct conn *VAR_8, struct msg *VAR_9)
{
    struct msg_tqh VAR_10;
    struct msg *VAR_11;
    struct mbuf *VAR_12, *VAR_13;
    size_t VAR_14;
    struct iovec *VAR_15, VAR_16[VAR_2];
    struct array VAR_17;
    size_t VAR_18, VAR_19;
    size_t VAR_20;
    ssize_t VAR_21;

    FUNC_5(&VAR_10);

    FUNC_11(&VAR_17, VAR_16, sizeof(VAR_16[0]), VAR_2);



    VAR_18 = 0;





    VAR_20 = VAR_4;

    for (;;) {
        FUNC_0(VAR_8->smsg == VAR_9);

        FUNC_6(&VAR_10, VAR_9, VAR_5);

        for (VAR_12 = FUNC_1(&VAR_9->mhdr);
             VAR_12 != ((void*)0) && FUNC_9(&VAR_17) < VAR_2 && VAR_18 < VAR_20;
             VAR_12 = VAR_13) {
            VAR_13 = FUNC_2(VAR_12, VAR_6);

            if (FUNC_13(VAR_12)) {
                continue;
            }

            VAR_14 = FUNC_14(VAR_12);
            if ((VAR_18 + VAR_14) > VAR_20) {
                VAR_14 = VAR_20 - VAR_18;
            }

            VAR_15 = FUNC_10(&VAR_17);
            VAR_15->iov_base = VAR_12->pos;
            VAR_15->iov_len = VAR_14;

            VAR_18 += VAR_14;
        }

        if (FUNC_9(&VAR_17) >= VAR_2 || VAR_18 >= VAR_20) {
            break;
        }

        VAR_9 = VAR_8->send_next(VAR_7, VAR_8);
        if (VAR_9 == ((void*)0)) {
            break;
        }
    }





    VAR_8->smsg = ((void*)0);
    if (!FUNC_3(&VAR_10) && VAR_18 != 0) {
        VAR_21 = FUNC_12(VAR_8, &VAR_17, VAR_18);
    } else {
        VAR_21 = 0;
    }

    VAR_19 = VAR_21 > 0 ? (size_t)VAR_21 : 0;



    for (VAR_9 = FUNC_4(&VAR_10); VAR_9 != ((void*)0); VAR_9 = VAR_11) {
        VAR_11 = FUNC_7(VAR_9, VAR_5);

        FUNC_8(&VAR_10, VAR_9, VAR_5);

        if (VAR_19 == 0) {
            if (VAR_9->mlen == 0) {
                VAR_8->send_done(VAR_7, VAR_8, VAR_9);
            }
            continue;
        }


        for (VAR_12 = FUNC_1(&VAR_9->mhdr); VAR_12 != ((void*)0); VAR_12 = VAR_13) {
            VAR_13 = FUNC_2(VAR_12, VAR_6);

            if (FUNC_13(VAR_12)) {
                continue;
            }

            VAR_14 = FUNC_14(VAR_12);
            if (VAR_19 < VAR_14) {

                VAR_12->pos += VAR_19;
                FUNC_0(VAR_12->pos < VAR_12->last);
                VAR_19 = 0;
                break;
            }


            VAR_12->pos = VAR_12->last;
            VAR_19 -= VAR_14;
        }


        if (VAR_12 == ((void*)0)) {
            VAR_8->send_done(VAR_7, VAR_8, VAR_9);
        }
    }

    FUNC_0(FUNC_3(&VAR_10));

    if (VAR_21 >= 0) {
        return VAR_3;
    }

    return (VAR_21 == VAR_0) ? VAR_3 : VAR_1;
}
