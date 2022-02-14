
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t s_addr; } ;
struct TYPE_8__ {int in6; TYPE_1__ in; } ;
struct TYPE_9__ {int type; size_t timestamp; size_t timespan; size_t size; size_t int_val; size_t int8; size_t int16; size_t int32; size_t int64; size_t uint_val; size_t uint8; size_t uint16; size_t uint32; size_t uint64; size_t percent; size_t ifindex; TYPE_2__ address; int boolean; int string; } ;
typedef TYPE_3__ TableData ;


 int VAR_0 ;
 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(TableData *VAR_1, size_t VAR_2, TableData *VAR_3, size_t VAR_4) {
        FUNC_2(VAR_1);
        FUNC_2(VAR_3);

        if (VAR_1->type == VAR_3->type) {




                switch (VAR_1->type) {

                case 138:
                        return FUNC_4(VAR_1->string, VAR_3->string);

                case 150:
                        if (!VAR_1->boolean && VAR_3->boolean)
                                return -1;
                        if (VAR_1->boolean && !VAR_3->boolean)
                                return 1;
                        return 0;

                case 135:
                case 133:
                case 134:
                        return FUNC_0(VAR_1->timestamp, VAR_3->timestamp);

                case 137:
                case 136:
                        return FUNC_0(VAR_1->timespan, VAR_3->timespan);

                case 139:
                case 149:
                        return FUNC_0(VAR_1->size, VAR_3->size);

                case 146:
                        return FUNC_0(VAR_1->int_val, VAR_3->int_val);

                case 142:
                        return FUNC_0(VAR_1->int8, VAR_3->int8);

                case 145:
                        return FUNC_0(VAR_1->int16, VAR_3->int16);

                case 144:
                        return FUNC_0(VAR_1->int32, VAR_3->int32);

                case 143:
                        return FUNC_0(VAR_1->int64, VAR_3->int64);

                case 132:
                        return FUNC_0(VAR_1->uint_val, VAR_3->uint_val);

                case 128:
                        return FUNC_0(VAR_1->uint8, VAR_3->uint8);

                case 131:
                        return FUNC_0(VAR_1->uint16, VAR_3->uint16);

                case 130:
                        return FUNC_0(VAR_1->uint32, VAR_3->uint32);

                case 129:
                        return FUNC_0(VAR_1->uint64, VAR_3->uint64);

                case 140:
                        return FUNC_0(VAR_1->percent, VAR_3->percent);

                case 148:
                        return FUNC_0(VAR_1->ifindex, VAR_3->ifindex);

                case 141:
                        return FUNC_0(VAR_1->address.in.s_addr, VAR_3->address.in.s_addr);

                case 147:
                        return FUNC_3(&VAR_1->address.in6, &VAR_3->address.in6, FUNC_1(VAR_0));

                default:
                        ;
                }
        }


        return FUNC_0(VAR_2, VAR_4);
}
