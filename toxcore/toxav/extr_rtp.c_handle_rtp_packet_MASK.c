
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct RTPHeader {int pt; int cpart; int tlen; int timestamp; int sequnum; } ;
struct TYPE_10__ {int sequnum; scalar_t__ timestamp; int tlen; } ;
struct TYPE_12__ {int len; scalar_t__ data; TYPE_1__ header; } ;
struct TYPE_11__ {int payload_type; int rsequnum; int (* mcb ) (int ,TYPE_3__*) ;TYPE_3__* mp; int bwc; scalar_t__ rtimestamp; int cs; } ;
typedef TYPE_2__ RTPSession ;
typedef int Messenger ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,struct RTPHeader const*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (scalar_t__,int const*,int) ;
 int FUNC_7 (scalar_t__,scalar_t__,int) ;
 TYPE_3__* FUNC_8 (int,int const*,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_3__*) ;
 int FUNC_12 (int ,TYPE_3__*) ;
 int FUNC_13 (int ,TYPE_3__*) ;
 int FUNC_14 (int ,TYPE_3__*) ;

int FUNC_15 (Messenger *VAR_1, uint32_t VAR_2, const uint8_t *VAR_3, uint16_t VAR_4, void *VAR_5)
{
    (void) VAR_1;
    (void) VAR_2;

    RTPSession *VAR_6 = VAR_5;

    VAR_3 ++;
    VAR_4--;

    if (!VAR_6 || VAR_4 < sizeof (struct RTPHeader)) {
        FUNC_0("No session or invalid length of received buffer!");
        return -1;
    }

    const struct RTPHeader *VAR_7 = (struct RTPHeader *) VAR_3;

    if (VAR_7->pt != VAR_6->payload_type % 128) {
        FUNC_0("Invalid payload type with the session");
        return -1;
    }

    if (FUNC_10(VAR_7->cpart) >= FUNC_10(VAR_7->tlen)) {

        return -1;
    }

    FUNC_3(VAR_6->bwc, VAR_4);

    if (FUNC_10(VAR_7->tlen) == VAR_4 - sizeof (struct RTPHeader)) {





        if (FUNC_4(VAR_6, VAR_7)) {
            return 0;
        } else {

            VAR_6->rsequnum = FUNC_10(VAR_7->sequnum);
            VAR_6->rtimestamp = FUNC_9(VAR_7->timestamp);
        }

        FUNC_2(VAR_6->bwc, VAR_4);


        if (VAR_6->mp) {
            if (VAR_6->mcb)
                VAR_6->mcb (VAR_6->cs, VAR_6->mp);
            else
                FUNC_5(VAR_6->mp);

            VAR_6->mp = ((void*)0);
        }





        if (!VAR_6->mcb)
            return 0;

        return VAR_6->mcb (VAR_6->cs, FUNC_8(VAR_4, VAR_3, VAR_4));
    } else {


        if (VAR_6->mp) {
            if (VAR_6->mp->header.sequnum == FUNC_10(VAR_7->sequnum) &&
                    VAR_6->mp->header.timestamp == FUNC_9(VAR_7->timestamp)) {



                if (VAR_6->mp->header.tlen - VAR_6->mp->len < VAR_4 - sizeof(struct RTPHeader) ||
                        VAR_6->mp->header.tlen <= FUNC_10(VAR_7->cpart)) {



                    return 0;
                }

                FUNC_6(VAR_6->mp->data + FUNC_10(VAR_7->cpart), VAR_3 + sizeof(struct RTPHeader),
                       VAR_4 - sizeof(struct RTPHeader));

                VAR_6->mp->len += VAR_4 - sizeof(struct RTPHeader);

                FUNC_2(VAR_6->bwc, VAR_4);

                if (VAR_6->mp->len == VAR_6->mp->header.tlen) {



                    if (VAR_6->mcb)
                        VAR_6->mcb (VAR_6->cs, VAR_6->mp);
                    else
                        FUNC_5(VAR_6->mp);

                    VAR_6->mp = ((void*)0);
                }
            } else {


                if (VAR_6->mp->header.timestamp > FUNC_9(VAR_7->timestamp))



                    return 0;


                FUNC_1(VAR_6->bwc,
                             (VAR_6->mp->header.tlen - VAR_6->mp->len) +


                             ((VAR_6->mp->header.tlen - VAR_6->mp->len) /
                              VAR_0) * sizeof(struct RTPHeader) );


                if (VAR_6->mcb)
                    VAR_6->mcb (VAR_6->cs, VAR_6->mp);
                else
                    FUNC_5(VAR_6->mp);

                VAR_6->mp = ((void*)0);
                goto NEW_MULTIPARTED;
            }
        } else {




NEW_MULTIPARTED:




            if (FUNC_4(VAR_6, VAR_7)) {
                return 0;
            } else {

                VAR_6->rsequnum = FUNC_10(VAR_7->sequnum);
                VAR_6->rtimestamp = FUNC_9(VAR_7->timestamp);
            }

            FUNC_2(VAR_6->bwc, VAR_4);



            if (VAR_6->mcb) {
                VAR_6->mp = FUNC_8(FUNC_10(VAR_7->tlen) + sizeof(struct RTPHeader), VAR_3, VAR_4);


                if (FUNC_10(VAR_7->cpart));

                FUNC_7(VAR_6->mp->data + FUNC_10(VAR_7->cpart), VAR_6->mp->data, VAR_6->mp->len);
            }
        }
    }

    return 0;
}
