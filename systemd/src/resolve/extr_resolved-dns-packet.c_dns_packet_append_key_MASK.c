
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {size_t size; int type; int class; } ;
typedef TYPE_1__ DnsResourceKey ;
typedef TYPE_1__ const DnsPacket ;
typedef int DnsAnswerFlags ;


 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*,int ,int,int,int *) ;
 int FUNC_2 (TYPE_1__ const*,int,int *) ;
 int FUNC_3 (TYPE_1__ const*,size_t) ;
 int FUNC_4 (TYPE_1__ const*) ;

int FUNC_5(DnsPacket *VAR_2, const DnsResourceKey *VAR_3, const DnsAnswerFlags VAR_4, size_t *VAR_5) {
        size_t VAR_6;
        uint16_t VAR_7;
        int VAR_8;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        VAR_6 = VAR_2->size;

        VAR_8 = FUNC_1(VAR_2, FUNC_4(VAR_3), 1, 1, ((void*)0));
        if (VAR_8 < 0)
                goto fail;

        VAR_8 = FUNC_2(VAR_2, VAR_3->type, ((void*)0));
        if (VAR_8 < 0)
                goto fail;

        VAR_7 = VAR_4 & VAR_0 ? VAR_3->class | VAR_1 : VAR_3->class;
        VAR_8 = FUNC_2(VAR_2, VAR_7, ((void*)0));
        if (VAR_8 < 0)
                goto fail;

        if (VAR_5)
                *VAR_5 = VAR_6;

        return 0;

fail:
        FUNC_3(VAR_2, VAR_6);
        return VAR_8;
}
