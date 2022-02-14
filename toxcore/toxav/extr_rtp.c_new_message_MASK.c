
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_2__ {void* tlen; void* cpart; void* ssrc; void* timestamp; void* sequnum; } ;
struct RTPMessage {TYPE_1__ header; int len; } ;
struct RTPHeader {int dummy; } ;


 int FUNC_0 (int) ;
 struct RTPMessage* FUNC_1 (size_t,int) ;
 int FUNC_2 (TYPE_1__*,int const*,size_t) ;
 void* FUNC_3 (void*) ;
 void* FUNC_4 (void*) ;

struct RTPMessage *FUNC_5 (size_t VAR_0, const uint8_t *VAR_1, uint16_t VAR_2)
{
    FUNC_0(VAR_0 >= VAR_2);

    struct RTPMessage *VAR_3 = FUNC_1(sizeof(struct RTPMessage) + (VAR_0 - sizeof(struct RTPHeader)), 1);

    VAR_3->len = VAR_2 - sizeof(struct RTPHeader);
    FUNC_2(&VAR_3->header, VAR_1, VAR_2);

    VAR_3->header.sequnum = FUNC_4(VAR_3->header.sequnum);
    VAR_3->header.timestamp = FUNC_3(VAR_3->header.timestamp);
    VAR_3->header.ssrc = FUNC_3(VAR_3->header.ssrc);

    VAR_3->header.cpart = FUNC_4(VAR_3->header.cpart);
    VAR_3->header.tlen = FUNC_4(VAR_3->header.tlen);

    return VAR_3;
}
